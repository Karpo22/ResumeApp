//
//  WorkSkills.h
//  ResumeApp
//
//  Created by Mike Karpowich on 3/22/17.
//
//

#ifndef WorkSkills_h
#define WorkSkills_h

#include <stdio.h>
#include <QtWidgets>
#include <vector>

#include "TabBase.h"

class WorkSkillsTab : public TabBase
{
    
public:
    WorkSkillsTab(MainWindow *inParent);
    
    void refreshTab();
    
protected:
    QVBoxLayout     *mWorkSkillsLayout;
    
};


#endif /* WorkSkills_hpp */
