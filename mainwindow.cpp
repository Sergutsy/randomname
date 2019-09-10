#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bmimodule.h"
using namespace keka;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_BMI->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_calc_clicked()
{
    float hgt, wgt, BMI;

    hgt = ui->doubleSpinBox_Height->value();
    wgt = ui->DSB_weight->value();

    hgt = hgt / 100;

    BMI = BMIproc(hgt,wgt);//wgt / (hgt*hgt);
    ui->label_BMI->show();

    ui->label_BMI->setText(QString::number(BMI));
    //ИСПРАВЛЕННЫЙ КОММЕНТАРИЙ КАПСОМ АААААА
}
