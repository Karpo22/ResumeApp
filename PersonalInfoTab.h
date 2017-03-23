//
//  PersonalInfoTab.hpp
//  ResumeApp
//
//  Created by Mike Karpowich on 3/22/17.
//
//

#ifndef PersonalInfoTab_hpp
#define PersonalInfoTab_hpp

#include <stdio.h>
#include <QtWidgets>
#include <vector>

#include "TabBase.h"

class PersonalInfoTab : public TabBase
{
    
public:
    PersonalInfoTab(MainWindow *inParent);
    
    void refreshTab();
    
protected:
    QVBoxLayout     *mPriorWorkExperienceLayout;
    
};

#endif /* PersonalInfoTab_hpp */
