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

#include "PriorWorkExperienceTab.h"
#include "ContactInfoTab.h"
#include "WorkSkillsTab.h"
#include "PersonalInfoTab.h"

class PriorWorkExperience;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();
    
protected:
    QHBoxLayout *mMainWindowLayout;
    QSplitter   *mMainSplitter;
    
private:
    QMenuBar    *menuBar;
    QMenu       *mFileMenu;
    
    QTabWidget  *mTabList;
    QWidget     *mCentralWidget;
    
    PriorWorkExperienceTab *mWorkExperienceTab;
    PersonalInfoTab *mPersonalInfoTab;
    ContactInfoTab  *mContactInfoTab;
    WorkSkillsTab   *mWorkSkillsTab;

};

#endif // MAINWINDOW_H
