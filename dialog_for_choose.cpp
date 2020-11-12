#include "dialog_for_choose.hpp"
#include "ui_dialog_for_choose.h"

Dialog_for_choose::Dialog_for_choose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_for_choose)
{
    ui->setupUi(this);
    QObject::connect(ui->button_moeglich,&QPushButton::clicked,this,&Dialog_for_choose::on_button_moeglich_clicked);
    QObject::connect(ui->button_unmoeglich,&QPushButton::clicked,this,&Dialog_for_choose::on_button_unmoeglich_clicked);
    setFixedSize(571, 268);
}

Dialog_for_choose::~Dialog_for_choose()
{
    delete ui;
}

void Dialog_for_choose::on_button_moeglich_clicked()
{
    emit done(1);
}

void Dialog_for_choose::on_button_unmoeglich_clicked()
{
    emit done(2);
}
