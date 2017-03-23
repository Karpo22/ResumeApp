//
//  PriorWorkExperience.hpp
//  ResumeApp
//
//  Created by Mike Karpowich on 3/22/17.
//
//

#ifndef PriorWorkExperience_hpp
#define PriorWorkExperience_hpp

#include <stdio.h>
#include <QtWidgets>
#include <vector>

#include "TabBase.h"

class PriorWorkExperienceTab : public TabBase
{    
public:
                PriorWorkExperienceTab(MainWindow *inParent);
    
    void refreshTab();
    
protected:
    QVBoxLayout     *mPriorWorkExperienceLayout;
    
    QPushButton     *mTestButton1;
    QPushButton     *mTestButton2;
    
};

#endif /* PriorWorkExperience_hpp */
