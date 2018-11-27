#ifndef ONECLICKGO_H
#define ONECLICKGO_H

#include <QWidget>
#include <QSystemTrayIcon>
#include <QFile>
#include <QMessageBox>
#include <QAction>
#include <QMenu>

#define PYFILE_MD5_CHECK

class OneClickBingWallpaper : public QWidget
{
    Q_OBJECT

public:
    OneClickBingWallpaper(QWidget *parent = 0);
    ~OneClickBingWallpaper();
private:
    QSystemTrayIcon * trayIcon;
    QMenu * trayMenu;
    QAction * cinnamonAction;
    QAction * xfceAction;
    QAction * deepinAction;
    QAction * wmAction;
    QAction * gnomeAction;
    QAction * kdeAction;
    QAction * quitAction;

private slots:
    void trayIconActivated(QSystemTrayIcon::ActivationReason);
    void updateWallpaper();
};

#endif // ONECLICKGO_H
