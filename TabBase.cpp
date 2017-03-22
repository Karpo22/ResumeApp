//
//  TabBase.cpp
//  ResumeApp
//
//  Created by Mike Karpowich on 3/22/17.
//
//

#include "TabBase.h"
#include "MainWindow.h"

TabBase::TabBase(MainWindow *inParent) : QWidget()
, mMainWindow(inParent)
{
    
}

TabBase::~TabBase()
{
    
}

void TabBase::reset()
{
    // children should override this method to reset after new model is set
}

void clearLayout(QLayout *layout)
{
    QLayoutItem *item;
    while(layout->count() > 0) {
        item = layout->takeAt(0);
        if (item->layout()) {
            clearLayout(item->layout());
            delete item->layout();
        }
        
        if (item->widget()) {
            delete item->widget();
        }
        delete item;
    }
}