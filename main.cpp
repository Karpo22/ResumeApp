#include <QApplication>
#include "MainApplication.h"

int main(int argc, char *argv[])
{
    int retVal = 0;
    try {
        MainApplication app(argc, argv);
        retVal = app.run();
    } catch (...) {
        std::cout << "Program Error with Exit!"  << std::endl;
    }
    
    return retVal;
}
