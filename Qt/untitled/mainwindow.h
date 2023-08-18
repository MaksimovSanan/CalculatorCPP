#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../../model.h"
#include "../../controller.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Controller controller, QWidget *parent = nullptr);
    ~MainWindow();


protected:


private slots:

    void on_actionAdd_new_triggered();
    void enter_symbol();


private:
    Ui::MainWindow *ui;
    Controller controller;
};
#endif // MAINWINDOW_H
