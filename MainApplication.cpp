//
//  MainApplication.cpp
//  ResumeApp
//
//  Created by Mike Karpowich on 3/22/17.
//
//

#include "MainApplication.h"

MainApplication::MainApplication(int & argc, char *argv[])
:   QApplication(argc, argv)
, mMainWindow()
{
    QSurfaceFormat format;
    format.setDepthBufferSize(24);
}

int MainApplication::run()
{
    mMainWindow.show();
    int retVal = this->exec();
    return retVal;
}