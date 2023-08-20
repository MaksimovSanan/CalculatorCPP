/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_new;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_func;
    QGridLayout *gridLayout;
    QPushButton *pushButton_two;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_nine;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_zero;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_four;
    QPushButton *pushButton_one;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_five;
    QPushButton *pushButton_eight;
    QPushButton *pushButton_4;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_3;
    QPushButton *pushButton_seven;
    QPushButton *pushButton_three;
    QPushButton *pushButton_six;
    QMenuBar *menubar;
    QMenu *menuTools;
    QMenu *menuExit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionAdd_new = new QAction(MainWindow);
        actionAdd_new->setObjectName(QString::fromUtf8("actionAdd_new"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_func = new QLineEdit(centralwidget);
        lineEdit_func->setObjectName(QString::fromUtf8("lineEdit_func"));
        lineEdit_func->setMinimumSize(QSize(0, 100));

        verticalLayout_2->addWidget(lineEdit_func);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_two = new QPushButton(centralwidget);
        pushButton_two->setObjectName(QString::fromUtf8("pushButton_two"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_two->sizePolicy().hasHeightForWidth());
        pushButton_two->setSizePolicy(sizePolicy1);
        pushButton_two->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 5px;\n"
"    border: 1px solid #000000;\n"
"	background-color: rgb(126, 125, 128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));

        gridLayout->addWidget(pushButton_two, 3, 1, 1, 1);

        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        sizePolicy1.setHeightForWidth(pushButton_mod->sizePolicy().hasHeightForWidth());
        pushButton_mod->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_mod, 0, 2, 1, 1);

        pushButton_nine = new QPushButton(centralwidget);
        pushButton_nine->setObjectName(QString::fromUtf8("pushButton_nine"));
        sizePolicy1.setHeightForWidth(pushButton_nine->sizePolicy().hasHeightForWidth());
        pushButton_nine->setSizePolicy(sizePolicy1);
        pushButton_nine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 5px;\n"
"    border: 1px solid #000000;\n"
"	background-color: rgb(126, 125, 128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));

        gridLayout->addWidget(pushButton_nine, 1, 2, 1, 1);

        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        sizePolicy1.setHeightForWidth(pushButton_minus->sizePolicy().hasHeightForWidth());
        pushButton_minus->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_minus, 2, 3, 1, 1);

        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        sizePolicy1.setHeightForWidth(pushButton_dot->sizePolicy().hasHeightForWidth());
        pushButton_dot->setSizePolicy(sizePolicy1);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 5px;\n"
"    border: 1px solid #000000;\n"
"	background-color: rgb(126, 125, 128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));

        gridLayout->addWidget(pushButton_dot, 4, 2, 1, 1);

        pushButton_zero = new QPushButton(centralwidget);
        pushButton_zero->setObjectName(QString::fromUtf8("pushButton_zero"));
        sizePolicy1.setHeightForWidth(pushButton_zero->sizePolicy().hasHeightForWidth());
        pushButton_zero->setSizePolicy(sizePolicy1);
        pushButton_zero->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 5px;\n"
"    border: 1px solid #000000;\n"
"	background-color: rgb(126, 125, 128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));

        gridLayout->addWidget(pushButton_zero, 4, 0, 1, 2);

        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        sizePolicy1.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_plus, 3, 3, 1, 1);

        pushButton_multiply = new QPushButton(centralwidget);
        pushButton_multiply->setObjectName(QString::fromUtf8("pushButton_multiply"));
        sizePolicy1.setHeightForWidth(pushButton_multiply->sizePolicy().hasHeightForWidth());
        pushButton_multiply->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_multiply, 1, 3, 1, 1);

        pushButton_four = new QPushButton(centralwidget);
        pushButton_four->setObjectName(QString::fromUtf8("pushButton_four"));
        sizePolicy1.setHeightForWidth(pushButton_four->sizePolicy().hasHeightForWidth());
        pushButton_four->setSizePolicy(sizePolicy1);
        pushButton_four->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 5px;\n"
"    border: 1px solid #000000;\n"
"	background-color: rgb(126, 125, 128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));

        gridLayout->addWidget(pushButton_four, 2, 0, 1, 1);

        pushButton_one = new QPushButton(centralwidget);
        pushButton_one->setObjectName(QString::fromUtf8("pushButton_one"));
        sizePolicy1.setHeightForWidth(pushButton_one->sizePolicy().hasHeightForWidth());
        pushButton_one->setSizePolicy(sizePolicy1);
        pushButton_one->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 5px;\n"
"    border: 1px solid #000000;\n"
"	background-color: rgb(126, 125, 128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));

        gridLayout->addWidget(pushButton_one, 3, 0, 1, 1);

        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        sizePolicy1.setHeightForWidth(pushButton_equal->sizePolicy().hasHeightForWidth());
        pushButton_equal->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_equal, 4, 3, 1, 1);

        pushButton_five = new QPushButton(centralwidget);
        pushButton_five->setObjectName(QString::fromUtf8("pushButton_five"));
        sizePolicy1.setHeightForWidth(pushButton_five->sizePolicy().hasHeightForWidth());
        pushButton_five->setSizePolicy(sizePolicy1);
        pushButton_five->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 5px;\n"
"    border: 1px solid #000000;\n"
"	background-color: rgb(126, 125, 128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));

        gridLayout->addWidget(pushButton_five, 2, 1, 1, 1);

        pushButton_eight = new QPushButton(centralwidget);
        pushButton_eight->setObjectName(QString::fromUtf8("pushButton_eight"));
        sizePolicy1.setHeightForWidth(pushButton_eight->sizePolicy().hasHeightForWidth());
        pushButton_eight->setSizePolicy(sizePolicy1);
        pushButton_eight->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_eight {\n"
"	border-radius: 5px;\n"
"    border: 1px solid #000000;\n"
"	background-color: rgb(126, 125, 128);\n"
"}\n"
"\n"
"QPushButton#pushButton_eight:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));

        gridLayout->addWidget(pushButton_eight, 1, 1, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_4, 0, 0, 1, 1);

        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName(QString::fromUtf8("pushButton_divide"));
        sizePolicy1.setHeightForWidth(pushButton_divide->sizePolicy().hasHeightForWidth());
        pushButton_divide->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_divide, 0, 3, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton_seven = new QPushButton(centralwidget);
        pushButton_seven->setObjectName(QString::fromUtf8("pushButton_seven"));
        sizePolicy1.setHeightForWidth(pushButton_seven->sizePolicy().hasHeightForWidth());
        pushButton_seven->setSizePolicy(sizePolicy1);
        pushButton_seven->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 5px;\n"
"    border: 1px solid #000000;\n"
"	background-color: rgb(126, 125, 128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));

        gridLayout->addWidget(pushButton_seven, 1, 0, 1, 1);

        pushButton_three = new QPushButton(centralwidget);
        pushButton_three->setObjectName(QString::fromUtf8("pushButton_three"));
        sizePolicy1.setHeightForWidth(pushButton_three->sizePolicy().hasHeightForWidth());
        pushButton_three->setSizePolicy(sizePolicy1);
        pushButton_three->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 5px;\n"
"    border: 1px solid #000000;\n"
"	background-color: rgb(126, 125, 128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));

        gridLayout->addWidget(pushButton_three, 3, 2, 1, 1);

        pushButton_six = new QPushButton(centralwidget);
        pushButton_six->setObjectName(QString::fromUtf8("pushButton_six"));
        sizePolicy1.setHeightForWidth(pushButton_six->sizePolicy().hasHeightForWidth());
        pushButton_six->setSizePolicy(sizePolicy1);
        pushButton_six->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 5px;\n"
"    border: 1px solid #000000;\n"
"	background-color: rgb(126, 125, 128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));

        gridLayout->addWidget(pushButton_six, 2, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuExit = new QMenu(menubar);
        menuExit->setObjectName(QString::fromUtf8("menuExit"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuExit->menuAction());
        menuTools->addAction(actionAdd_new);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdd_new->setText(QCoreApplication::translate("MainWindow", "Make graph", nullptr));
        pushButton_two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "q", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "t", nullptr));
        pushButton_seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuExit->setTitle(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
