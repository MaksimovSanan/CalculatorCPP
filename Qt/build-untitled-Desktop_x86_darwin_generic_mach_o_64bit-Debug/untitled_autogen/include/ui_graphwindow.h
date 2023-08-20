/********************************************************************************
** Form generated from reading UI file 'graphwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHWINDOW_H
#define UI_GRAPHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_GraphWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QCustomPlot *widget;
    QGridLayout *gridLayout_5;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_func;
    QLabel *label;
    QLineEdit *lineEdit_StartX;
    QLabel *label_3;
    QLineEdit *lineEdit_EndX;
    QLabel *label_4;
    QLineEdit *lineEdit_MaxY;
    QLabel *label_5;
    QLineEdit *lineEdit_MinY;
    QLabel *label_7;
    QLineEdit *lineEdit_step;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GraphWindow)
    {
        if (GraphWindow->objectName().isEmpty())
            GraphWindow->setObjectName(QString::fromUtf8("GraphWindow"));
        GraphWindow->resize(800, 600);
        centralwidget = new QWidget(GraphWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(widget);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit_func = new QLineEdit(centralwidget);
        lineEdit_func->setObjectName(QString::fromUtf8("lineEdit_func"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_func);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lineEdit_StartX = new QLineEdit(centralwidget);
        lineEdit_StartX->setObjectName(QString::fromUtf8("lineEdit_StartX"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_StartX);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_EndX = new QLineEdit(centralwidget);
        lineEdit_EndX->setObjectName(QString::fromUtf8("lineEdit_EndX"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_EndX);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_MaxY = new QLineEdit(centralwidget);
        lineEdit_MaxY->setObjectName(QString::fromUtf8("lineEdit_MaxY"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_MaxY);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_MinY = new QLineEdit(centralwidget);
        lineEdit_MinY->setObjectName(QString::fromUtf8("lineEdit_MinY"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_MinY);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        lineEdit_step = new QLineEdit(centralwidget);
        lineEdit_step->setObjectName(QString::fromUtf8("lineEdit_step"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_step);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        formLayout->setWidget(6, QFormLayout::FieldRole, pushButton);


        gridLayout_5->addLayout(formLayout, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_5);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        GraphWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GraphWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        GraphWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(GraphWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GraphWindow->setStatusBar(statusbar);

        retranslateUi(GraphWindow);

        QMetaObject::connectSlotsByName(GraphWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GraphWindow)
    {
        GraphWindow->setWindowTitle(QCoreApplication::translate("GraphWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("GraphWindow", "f(x)", nullptr));
        lineEdit_func->setText(QCoreApplication::translate("GraphWindow", "tan(x)", nullptr));
        label->setText(QCoreApplication::translate("GraphWindow", "Start x", nullptr));
        lineEdit_StartX->setText(QCoreApplication::translate("GraphWindow", "-10", nullptr));
        label_3->setText(QCoreApplication::translate("GraphWindow", "End x", nullptr));
        lineEdit_EndX->setText(QCoreApplication::translate("GraphWindow", "10", nullptr));
        label_4->setText(QCoreApplication::translate("GraphWindow", "Max y", nullptr));
        lineEdit_MaxY->setText(QCoreApplication::translate("GraphWindow", "10", nullptr));
        label_5->setText(QCoreApplication::translate("GraphWindow", "Min y", nullptr));
        lineEdit_MinY->setText(QCoreApplication::translate("GraphWindow", "-10", nullptr));
        label_7->setText(QCoreApplication::translate("GraphWindow", "Step", nullptr));
        lineEdit_step->setText(QCoreApplication::translate("GraphWindow", "0.1", nullptr));
        pushButton->setText(QCoreApplication::translate("GraphWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphWindow: public Ui_GraphWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHWINDOW_H
