#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QString>
#include <QFile>
#include <QSizePolicy>
#include <QAction>
#include <QtCore>
#include <QtWidgets>
#include <iostream>
#include <float.h>
#include <vector>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();
    
private:
    QMenuBar *menuBar;
    QMenu    *mFileMenu;

};

#endif // MAINWINDOW_H
