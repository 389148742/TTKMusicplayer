#ifndef MUSICDOWNLOADQUERYTHREAD_H
#define MUSICDOWNLOADQUERYTHREAD_H

#include <QObject>
#include <QNetworkReply>
#include "musiclibexportglobal.h"
#include "musicobject.h"

class QNetworkAccessManager;

enum DownLoadType{ DisConnection, DownLoading, Buffing, Waiting };
enum QueryType{ Music, MV };

class MUSIC_CORE_EXPORT MusicDownLoadQueryThread : public QObject
{
    Q_OBJECT
public:
    explicit MusicDownLoadQueryThread(QObject *parent = 0);
    virtual ~MusicDownLoadQueryThread();

    void deleteAll();
    void startSearchSong(QueryType type, const QString &text);
    inline int getSongIdIndex() const { return m_musicSongInfo.size() + 1;}
    inline MStringLists& getMusicSongInfo(){ return m_musicSongInfo;}

signals:
    void showDownLoadInfoFor(DownLoadType type);
    void showDownLoadInfoFinished(const QString &name);
    void clearAllItems();
    void creatSearchedItems(const QString &songname,
                            const QString &artistname, const QString &time);

public slots:
    void searchFinshed();
    void replyError(QNetworkReply::NetworkError error);

protected:
    QNetworkAccessManager *m_manager;
    QNetworkReply *m_reply;
    MStringLists m_musicSongInfo;
    QString m_searchText;
    QueryType m_currentType;

};

#endif // MUSICDOWNLOADQUERYTHREAD_H
