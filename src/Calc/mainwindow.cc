#include "mainwindow.h"

#include "./ui_mainwindow.h"

MainWindow::MainWindow(const S21::Controller &controller, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), controller_(controller) {
  ui->setupUi(this);

  connect(ui->pushButton_nine, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_eight, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_seven, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_six, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_five, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_four, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_three, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_two, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_one, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_zero, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_dot, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_minus, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_plus, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_multiply, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_divide, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_open, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_close, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_exp, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_mod, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_pow, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_sin, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_cos, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_tan, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_asin, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_acos, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_atan, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_sqrt, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
  connect(ui->pushButton_ln, SIGNAL(clicked(bool)), this, SLOT(EnterSymbol()));
  connect(ui->pushButton_log, SIGNAL(clicked(bool)), this,
          SLOT(EnterSymbol()));
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_actionAdd_new_triggered() {
  S21::Model graph_model;
  S21::Controller graph_controller(graph_model);
  GraphWindow *graph_window = new GraphWindow(graph_controller, this);
  graph_window->show();
}

void MainWindow::EnterSymbol() {
  ui->lineEdit_func->setText(ui->lineEdit_func->text() +
                             qobject_cast<QPushButton *>(sender())->text());
}

void MainWindow::on_pushButton_equal_clicked() {
  std::string func = ui->lineEdit_func->text().toStdString();
  controller_.Calculate(func, 1);
  ui->lineEdit_func->setText(QString::fromStdString(func));
}

void MainWindow::on_pushButton_clear_clicked() { ui->lineEdit_func->clear(); }
