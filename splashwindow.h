#ifndef SPLASHWINDOW_H
#define SPLASHWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SplashWindow; }
QT_END_NAMESPACE

class SplashWindow : public QMainWindow
{
    Q_OBJECT

public:
    SplashWindow(QWidget *parent = nullptr);
    ~SplashWindow();

private:
    Ui::SplashWindow *ui;
};
#endif // SPLASHWINDOW_H
