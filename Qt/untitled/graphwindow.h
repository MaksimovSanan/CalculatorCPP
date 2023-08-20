#ifndef GRAPHWINDOW_H
#define GRAPHWINDOW_H

#include <QMainWindow>
#include "../../model.h"
#include "../../controller.h"

namespace Ui {
class GraphWindow;
}

class GraphWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GraphWindow(Controller controller, QWidget *parent = nullptr);
    ~GraphWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GraphWindow *ui;
    Controller controller;
};

#endif // GRAPHWINDOW_H
