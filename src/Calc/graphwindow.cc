#include "graphwindow.h"

#include "ui_graphwindow.h"

GraphWindow::GraphWindow(const S21::Controller &controller, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::GraphWindow), controller_(controller) {
  ui->setupUi(this);
  setAttribute(Qt::WA_DeleteOnClose);

  connect(ui->pushButton_draw, SIGNAL(clicked(bool)), this, SLOT(Render()));
}

GraphWindow::~GraphWindow() { delete ui; }

void GraphWindow::Render() {
  double xEnd = ui->doubleSpinBox_EndX->value();
  double xBegin = ui->doubleSpinBox_StartX->value();
  double MaxY = ui->doubleSpinBox_MaxY->value();
  double MinY = ui->doubleSpinBox_MInY->value();
  double step = ui->doubleSpinBox_step->value();

  if (xEnd > xBegin && MaxY > MinY && xEnd <= 1000000 && xBegin >= -1000000 &&
      MaxY <= 1000000 && MinY >= -1000000) {
    ui->widget->xAxis->setRange(xBegin, xEnd);
    ui->widget->yAxis->setRange(MinY, MaxY);

    step = ((xEnd - xBegin) / step > 200000) ? (xEnd - xBegin) / 20000 : step;
    std::vector<std::pair<double, double>> data;
    controller_.GiveData(data, ui->lineEdit_func->text().toStdString(),
                         xBegin * 2, xEnd * 2, step);
    QVector<double> x, y;
    for (const auto [X, Y] : data) {
      x.push_back(X);
      y.push_back((Y < MaxY && Y > MinY) ? Y : NAN);
    }

    ui->widget->clearGraphs();
    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x, y, true);
    ui->widget->replot();
  }
}
