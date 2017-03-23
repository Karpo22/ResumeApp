//
//  ContactInfoTab.h
//  ResumeApp
//
//  Created by Mike Karpowich on 3/22/17.
//
//

#ifndef ContactInfoTab_h
#define ContactInfoTab_h

#include <stdio.h>
#include <QtWidgets>
#include <vector>

#include "TabBase.h"

class ContactInfoTab : public TabBase
{
    
public:
    ContactInfoTab(MainWindow *inParent);
    
    void refreshTab();
    
protected:
    QVBoxLayout     *mContactInfoLayout;
    
};


#endif /* ContactInfoTab_hpp */
