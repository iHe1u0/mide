#include "splashwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SplashWindow w;
    w.show();
    return a.exec();
}
