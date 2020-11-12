#include "dialog.hpp"
#include "ui_dialog.h"
#include <QThread>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QObject::connect(ui->monitor,&QPushButton::clicked,this,&Dialog::on_monitor_clicked);
    setFixedSize(599,200);
}

Dialog::~Dialog() {
        delete ui;
}

void Dialog::on_monitor_clicked()
{
    emit done(1);
}

void Dialog::on_no_monitor_clicked()
{
    emit done(10);
}
