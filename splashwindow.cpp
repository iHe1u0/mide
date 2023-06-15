#include "splashwindow.h"
#include "./ui_splashwindow.h"

SplashWindow::SplashWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SplashWindow)
{
    ui->setupUi(this);
}

SplashWindow::~SplashWindow()
{
    delete ui;
}

