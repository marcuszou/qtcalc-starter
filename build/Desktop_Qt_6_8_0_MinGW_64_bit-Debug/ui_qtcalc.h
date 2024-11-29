/********************************************************************************
** Form generated from reading UI file 'qtcalc.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCALC_H
#define UI_QTCALC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtCalc
{
public:
    QAction *actionFile;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionAbout_QtCalc;
    QWidget *centralwidget;
    QLabel *label_1;
    QLabel *label_2;
    QLineEdit *txtFirstNum;
    QLineEdit *txtSecondNum;
    QPushButton *btnAdd;
    QPushButton *btnSubtract;
    QPushButton *btnDivide;
    QPushButton *btnMultiply;
    QLabel *label_3;
    QLineEdit *txtResult;

    void setupUi(QMainWindow *QtCalc)
    {
        if (QtCalc->objectName().isEmpty())
            QtCalc->setObjectName("QtCalc");
        QtCalc->resize(408, 297);
        actionFile = new QAction(QtCalc);
        actionFile->setObjectName("actionFile");
        actionSave = new QAction(QtCalc);
        actionSave->setObjectName("actionSave");
        actionExit = new QAction(QtCalc);
        actionExit->setObjectName("actionExit");
        actionAbout = new QAction(QtCalc);
        actionAbout->setObjectName("actionAbout");
        actionAbout_QtCalc = new QAction(QtCalc);
        actionAbout_QtCalc->setObjectName("actionAbout_QtCalc");
        centralwidget = new QWidget(QtCalc);
        centralwidget->setObjectName("centralwidget");
        label_1 = new QLabel(centralwidget);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(80, 46, 91, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 86, 91, 31));
        txtFirstNum = new QLineEdit(centralwidget);
        txtFirstNum->setObjectName("txtFirstNum");
        txtFirstNum->setGeometry(QRect(190, 50, 113, 24));
        txtSecondNum = new QLineEdit(centralwidget);
        txtSecondNum->setObjectName("txtSecondNum");
        txtSecondNum->setGeometry(QRect(190, 90, 113, 24));
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(80, 160, 41, 24));
        btnSubtract = new QPushButton(centralwidget);
        btnSubtract->setObjectName("btnSubtract");
        btnSubtract->setGeometry(QRect(140, 160, 41, 24));
        btnDivide = new QPushButton(centralwidget);
        btnDivide->setObjectName("btnDivide");
        btnDivide->setGeometry(QRect(200, 160, 41, 24));
        btnMultiply = new QPushButton(centralwidget);
        btnMultiply->setObjectName("btnMultiply");
        btnMultiply->setGeometry(QRect(260, 160, 41, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 207, 91, 31));
        txtResult = new QLineEdit(centralwidget);
        txtResult->setObjectName("txtResult");
        txtResult->setGeometry(QRect(190, 210, 113, 24));
        txtResult->setReadOnly(true);
        QtCalc->setCentralWidget(centralwidget);

        retranslateUi(QtCalc);

        QMetaObject::connectSlotsByName(QtCalc);
    } // setupUi

    void retranslateUi(QMainWindow *QtCalc)
    {
        QtCalc->setWindowTitle(QCoreApplication::translate("QtCalc", "QtCalc by EzDone Studio", nullptr));
        actionFile->setText(QCoreApplication::translate("QtCalc", "File", nullptr));
        actionSave->setText(QCoreApplication::translate("QtCalc", "Save", nullptr));
        actionExit->setText(QCoreApplication::translate("QtCalc", "Exit", nullptr));
        actionAbout->setText(QCoreApplication::translate("QtCalc", "About", nullptr));
        actionAbout_QtCalc->setText(QCoreApplication::translate("QtCalc", "About QtCalc", nullptr));
        label_1->setText(QCoreApplication::translate("QtCalc", "First Number", nullptr));
        label_2->setText(QCoreApplication::translate("QtCalc", "Second Number", nullptr));
        btnAdd->setText(QCoreApplication::translate("QtCalc", "+", nullptr));
        btnSubtract->setText(QCoreApplication::translate("QtCalc", "-", nullptr));
        btnDivide->setText(QCoreApplication::translate("QtCalc", "/", nullptr));
        btnMultiply->setText(QCoreApplication::translate("QtCalc", "*", nullptr));
        label_3->setText(QCoreApplication::translate("QtCalc", "The Result is:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtCalc: public Ui_QtCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCALC_H
