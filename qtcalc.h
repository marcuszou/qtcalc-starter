#ifndef QTCALC_H
#define QTCALC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class QtCalc;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAdd_clicked();

    void on_btnSubtract_clicked();

    void on_btnDivide_clicked();

    void on_btnMultiply_clicked();

private:
    Ui::QtCalc *ui;
};
#endif // QTCALC_H
