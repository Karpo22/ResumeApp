//
//  mainApplication.hpp
//  ResumeApp
//
//  Created by Mike Karpowich on 3/22/17.
//
//

#ifndef MainApplication_hpp
#define MainApplication_hpp

#include <QApplication>
#include "MainWindow.h"

class MainApplication : public QApplication
{
    
public:
    MainApplication(int & argc, char *argv[]);
    
    int run();
    
protected:
    MainWindow mMainWindow;
    
};

#endif /* mainApplication_hpp */
