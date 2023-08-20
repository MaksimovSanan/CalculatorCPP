#include "graphwindow.h"
#include "ui_graphwindow.h"


GraphWindow::GraphWindow(Controller controller, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GraphWindow)
    , controller(controller)
{
    ui->setupUi(this);
}

GraphWindow::~GraphWindow()
{
    delete ui;
}

void GraphWindow::on_pushButton_clicked()
{
    if (ui->lineEdit_StartX->text().isEmpty())
        ui->lineEdit_StartX->setText("" + QString::number(-20));
//      xBegin = ui->value_to_start_x->text().toDouble();
      if (ui->lineEdit_EndX ->text().isEmpty())
        ui->lineEdit_EndX->setText("" + QString::number(20));
//      xEnd = ui->value_to_end_x->text().toDouble() + h;
      if (ui->lineEdit_MinY->text().isEmpty())
        ui->lineEdit_MinY->setText("" + QString::number(-10));
//      yBegin = ui->value_to_start_y->text().toDouble();
      if (ui->lineEdit_MaxY->text().isEmpty())
        ui->lineEdit_MaxY->setText("" + QString::number(10));
//      yEnd = ui->value_to_end_y->text().toDouble();
      if (ui->lineEdit_step->text().isEmpty())
        ui->lineEdit_step->setText("" + QString::number(0.1));

      double xEnd = ui->lineEdit_EndX->text().toDouble();
      double xBegin = ui->lineEdit_StartX->text().toDouble();
      double MaxY = ui->lineEdit_MaxY->text().toDouble();
      double MinY = ui->lineEdit_MinY->text().toDouble();
      double step = ui->lineEdit_step->text().toDouble();

      if (xEnd > xBegin && MaxY > MinY) {
          ui->widget->xAxis->setRange(xBegin, xEnd);
          ui->widget->yAxis->setRange(MinY, MaxY);
     }

    std::vector<std::pair<double, double>> tmp;
    controller.GiveData(tmp, ui->lineEdit_func->text().toStdString(), xBegin, xEnd, step);

    QVector<QVector<double>> jopa;
    QVector<QVector<double>> jopa2;
    QVector<double> x, y;
    for(const auto [X, Y] : tmp){
        x.push_back(X);
        y.push_back((Y < MaxY && Y > MinY) ? Y : NAN);
    }

    ui->widget->clearGraphs();

//    while(y.indexOf(NAN) != -1) {
////        jopa.insert(jopa.end(), y.begin(), y.begin()+y.indexOf(NAN));
////        jopa.end()->resize(y.indexOf(NAN));
//        QVector<double> temporary(y.indexOf(NAN));
//        std::memcpy(temporary.data(), y.data(), y.indexOf(NAN));
//        jopa.push_back(temporary);
//        std::memcpy(temporary.data(), x.data(), y.indexOf(NAN));
//        jopa2.push_back(temporary);
//        y.erase(y.begin(), y.begin()+y.indexOf(NAN));
//        x.erase(x.begin(), x.begin()+y.indexOf(NAN));
//    }
//    QVector<double> temporary(y.indexOf(NAN));
//    std::memcpy(temporary.data(), y.data(), y.size());
//    jopa.push_back(temporary);
//    std::memcpy(temporary.data(), x.data(), y.size());
//    jopa2.push_back(temporary);
//    auto iter2 = jopa2.begin();
//    for(const auto & val : jopa){
//        ui->widget->addGraph();
//        ui->widget->graph(0)->addData(*(iter2++), val);
//        ui->widget->replot();
//    }




    ui->widget->addGraph();
    /*if (!status) */ui->widget->graph(0)->addData(x, y);
    ui->widget->replot();


}
