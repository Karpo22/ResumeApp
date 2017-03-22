//
//  TabBase.hpp
//  ResumeApp
//
//  Created by Mike Karpowich on 3/22/17.
//
//

#ifndef TabBase_hpp
#define TabBase_hpp

#include <stdio.h>
#include <QtWidgets>

class MainWindow;

class TabBase : public QWidget
{
    
    // Macro necessary for all classes that define signals or slots
    Q_OBJECT
    
public:
                    TabBase(MainWindow *inParent);
    virtual         ~TabBase();
    
    virtual void    reset();
    virtual void    refreshTab();
    
protected:
    
    MainWindow      *mMainWindow;
};

void clearLayout(QLayout *layout);

#endif /* TabBase_hpp */
