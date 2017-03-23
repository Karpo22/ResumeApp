//
//  PriorWorkExperience.cpp
//  ResumeApp
//
//  Created by Mike Karpowich on 3/22/17.
//
//

#include "PriorWorkExperienceTab.h"

PriorWorkExperienceTab::PriorWorkExperienceTab(MainWindow *inParent) : TabBase(inParent){
    mPriorWorkExperienceLayout = new QVBoxLayout;
    
    mTestButton1 = new QPushButton;
    mTestButton1->setText("Test Button 1");
    mTestButton1->setMaximumSize(250, 100);
    
    mPriorWorkExperienceLayout->addWidget(mTestButton1);
    mPriorWorkExperienceLayout->addWidget(mTestButton2);
    
    this->setLayout(mPriorWorkExperienceLayout);
}

void PriorWorkExperienceTab::refreshTab()
{
    
}