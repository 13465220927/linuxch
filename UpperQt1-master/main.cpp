#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Logindia logindia;

    if(logindia.exec() == QDialog::Accepted){
        MainWindow w;
        w.setWindowTitle(QString::fromLocal8Bit("ZigBee实训上位机"));
        w.show();
        w.InitUI();
        return a.exec();
    }

    return a.exec();
}
