#ifndef MUSICVIDEOPLAYWIDGET_H
#define MUSICVIDEOPLAYWIDGET_H

/* =================================================
 * This file is part of the Music Player project
 * Copyright (c) 2014 - 2015 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include "musicabstractmovewidget.h"

class QLabel;
class QPushButton;
class QStackedWidget;
class MusicVideoView;
class MusicVideoTableWidget;
class MusicLocalSongSearchEdit;

class MUSIC_VIDEO_EXPORT MusicVideoPlayWidget : public MusicAbstractMoveWidget
{
    Q_OBJECT
public:
    MusicVideoPlayWidget(bool popup, QWidget *parent = 0);
    ~MusicVideoPlayWidget();

    void resizeWindow(bool resize);

public slots:
    void backButtonClicked();
    void afterButtonClicked();
    void searchButtonClicked();
    void musicResearchButtonSearched(const QString &name);
    void mvURLChanged(const QString &data);
    void mvURLNameChanged(const QString &name, const QString &data);

protected:
    QWidget *m_topWidget;
    QLabel *m_textLabel;
    QPushButton *m_backButton;
    QPushButton *m_afterButton;
    QPushButton *m_searchButton;
    QStackedWidget *m_stackedWidget;
    MusicVideoView *m_videoView;
    MusicVideoTableWidget *m_videoTable;
    MusicLocalSongSearchEdit *m_searchEdit;

};

#endif //MUSICVIDEOPLAYWIDGET_H

