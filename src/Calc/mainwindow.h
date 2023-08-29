#ifndef CPP3_SMARTCALC_V2_0_CALC_MAINWINDOW_H
#define CPP3_SMARTCALC_V2_0_CALC_MAINWINDOW_H

#include <QMainWindow>
#include <string>

#include "../controller.h"
#include "../model.h"
#include "graphwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit MainWindow(const S21::Controller &controller,
                      QWidget *parent = nullptr);
  ~MainWindow();

 protected:
 private slots:

  void on_actionAdd_new_triggered();
  void EnterSymbol();

  void on_pushButton_equal_clicked();

  void on_pushButton_clear_clicked();

 private:
  Ui::MainWindow *ui;
  S21::Controller controller_;
};
#endif  // CPP3_SMARTCALC_V2_0_CALC_MAINWINDOW_H
