#include "mainwindow.h"

MainWindow::MainWindow() : QMainWindow()
{
    // Widget initialization
    mWorkExperienceTab = new PriorWorkExperienceTab(this);
    mContactInfoTab = new ContactInfoTab(this);
    mWorkSkillsTab = new WorkSkillsTab(this);
    mPersonalInfoTab = new PersonalInfoTab(this);
    
    mTabList = new QTabWidget(this);
    mTabList->addTab(mWorkExperienceTab, tr("Prior Work Experience"));
    mTabList->addTab(mWorkSkillsTab, tr("Work Skills"));
    mTabList->addTab(mPersonalInfoTab, tr("About Me"));
    mTabList->addTab(mContactInfoTab, tr("Contact Info"));
    
    this->setCentralWidget(mTabList);
    
    // Layout initialization
    mMainWindowLayout = new QHBoxLayout;
    QSplitter *mainSplitter = new QSplitter(Qt::Horizontal);
    mainSplitter->addWidget(mTabList);
    mMainWindowLayout->addWidget(mainSplitter);
    mCentralWidget = new QWidget(this);
    mCentralWidget->setLayout(mMainWindowLayout);
    setCentralWidget(mCentralWidget);
    
    this->setWindowTitle(tr("Resume Application"));
}