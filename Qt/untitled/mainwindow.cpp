#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(Controller controller, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , controller(controller)
{
    ui->setupUi(this);

    connect(ui->pushButton_nine, SIGNAL(clicked(bool)), this, SLOT(enter_symbol()));
    connect(ui->pushButton_eight, SIGNAL(clicked(bool)), this, SLOT(enter_symbol()));
    connect(ui->pushButton_seven, SIGNAL(clicked(bool)), this, SLOT(enter_symbol()));
    connect(ui->pushButton_six, SIGNAL(clicked(bool)), this, SLOT(enter_symbol()));
    connect(ui->pushButton_five, SIGNAL(clicked(bool)), this, SLOT(enter_symbol()));
    connect(ui->pushButton_four, SIGNAL(clicked(bool)), this, SLOT(enter_symbol()));
    connect(ui->pushButton_three, SIGNAL(clicked(bool)), this, SLOT(enter_symbol()));
    connect(ui->pushButton_two, SIGNAL(clicked(bool)), this, SLOT(enter_symbol()));
    connect(ui->pushButton_one, SIGNAL(clicked(bool)), this, SLOT(enter_symbol()));
    connect(ui->pushButton_zero, SIGNAL(clicked(bool)), this, SLOT(enter_symbol()));


}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_actionAdd_new_triggered()
{
    ui->statusbar->showMessage("Sozdanie graphika");
}

void MainWindow::enter_symbol() {
  ui->lineEdit_func->setText(ui->lineEdit_func->text() +
                        qobject_cast<QPushButton *>(sender())->text());
}


