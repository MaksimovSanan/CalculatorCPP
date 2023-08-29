#ifndef CPP3_SMARTCALC_V2_0_CALC_GRAPHWINDOW_H
#define CPP3_SMARTCALC_V2_0_CALC_GRAPHWINDOW_H

#include <QMainWindow>
#include <utility>
#include <vector>

#include "../controller.h"
#include "../model.h"

namespace Ui {
class GraphWindow;
}

class GraphWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit GraphWindow(const S21::Controller &controller,
                       QWidget *parent = nullptr);
  ~GraphWindow();

 private slots:
  void Render();

 private:
  Ui::GraphWindow *ui;
  S21::Controller controller_;
};

#endif  // CPP3_SMARTCALC_V2_0_CALC_GRAPHWINDOW_H
