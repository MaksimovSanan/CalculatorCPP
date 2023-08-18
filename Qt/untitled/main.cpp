#include "mainwindow.h"
#include "../../model.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    model model;
    Controller controller(model);
    MainWindow w(controller);
    w.show();
    return a.exec();
}
