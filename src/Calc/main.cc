#include <QApplication>

#include "mainwindow.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  S21::Model model;
  S21::Controller controller(model);
  MainWindow w(controller);
  w.show();
  return a.exec();
}
