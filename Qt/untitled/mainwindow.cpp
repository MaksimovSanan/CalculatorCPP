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
    model *graph_model= new model;
    Controller *graph_controller = new Controller(*graph_model);
    GraphWindow *graph_window = new GraphWindow(*graph_controller, this);
    graph_window->show();
}

void MainWindow::enter_symbol() {
  ui->lineEdit_func->setText(ui->lineEdit_func->text() +
                        qobject_cast<QPushButton *>(sender())->text());
}



void MainWindow::on_pushButton_equal_clicked()
{
    std::string func = ui->lineEdit_func->text().toStdString();
    controller.Calculate(func, 0);
    ui->lineEdit_func->setText(QString::fromStdString(func));
}

