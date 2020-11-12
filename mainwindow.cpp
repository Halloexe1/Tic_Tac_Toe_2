#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include <QCursor>
#include <QKeySequence>
#include <QShortcut>

int Main_Window::get_column(str zueg)
{
    if (zueg == "1A")
    {
        return 1;
    }
    else if (zueg == "2A")
    {
        return 2;
    }
    else if (zueg == "3A")
    {
        return 3;
    }
    else if (zueg == "1B")
    {
        return 1;
    }
    else if (zueg == "2B")
    {
        return 2;
    }
    else if (zueg == "3B")
    {
        return 3;
    }
    else if (zueg == "1C")
    {
        return 1;
    }
    else if (zueg == "2C")
    {
        return 2;
    }
    else if (zueg == "3C")
    {
        return 3;
    }
    return -1;
}

char Main_Window::get_row(str zueg)
{
    if (zueg == "1A")
    {
        return 'A';
    }
    else if (zueg == "2A")
    {
        return 'A';
    }
    else if (zueg == "3A")
    {
        return 'A';
    }
    else if (zueg == "1B")
    {
        return 'B';
    }
    else if (zueg == "2B")
    {
        return 'B';
    }
    else if (zueg == "3B")
    {
        return 'B';
    }
    else if (zueg == "1C")
    {
        return 'C';
    }
    else if (zueg == "2C")
    {
        return 'C';
    }
    else if (zueg == "3C")
    {
        return 'C';
    }
    return '\0';}

Main_Window::Main_Window(bool unmoeglich, QWidget *parent) : QMainWindow(parent),
    ui(new Ui::Main_Window),
    moeglich{unmoeglich},
    compi(moeglich,field)
{
    ui->setupUi(this);
    QObject::connect(ui->A1,&QPushButton::clicked,this,&Main_Window::on_A1_clicked);
    QObject::connect(ui->A2,&QPushButton::clicked,this,&Main_Window::on_A2_clicked);
    QObject::connect(ui->A3,&QPushButton::clicked,this,&Main_Window::on_A3_clicked);
    QObject::connect(ui->B1,&QPushButton::clicked,this,&Main_Window::on_B1_clicked);
    QObject::connect(ui->B2,&QPushButton::clicked,this,&Main_Window::on_B2_clicked);
    QObject::connect(ui->B3,&QPushButton::clicked,this,&Main_Window::on_B3_clicked);
    QObject::connect(ui->C1,&QPushButton::clicked,this,&Main_Window::on_C1_clicked);
    QObject::connect(ui->C2,&QPushButton::clicked,this,&Main_Window::on_C2_clicked);
    QObject::connect(ui->C3,&QPushButton::clicked,this,&Main_Window::on_C3_clicked);
    QObject::connect(ui->play_aigan,&QPushButton::clicked,this,&Main_Window::on_play_aigan_clicked);
    QObject::connect(ui->exit,&QPushButton::clicked,qApp,&QApplication::quit);
    //ui->exit->setShortcut(tr("Alt+F4"));
    //ui->play_aigan->setShortcut(tr("Ctrl+Alt+Shift+N"));
    //ui->A1->setShortcut(tr("Alt+7"));
    //ui->A2->setShortcut(tr("Alt+8"));
    //ui->A3->setShortcut(tr("Alt+9"));
    //ui->B1->setShortcut(tr("Alt+4"));
    //ui->B2->setShortcut(tr("Alt+5"));
    //ui->B3->setShortcut(tr("Alt+6"));
    //ui->C1->setShortcut(tr("Alt+1"));
    //ui->C2->setShortcut(tr("Alt+2"));
    //ui->C2->setShortcut(tr("Alt+3"));
    setFixedSize(1391,720);
}

Main_Window::~Main_Window()
{
    delete ui;
}

void Main_Window::on_A1_clicked()
{
    if ((field.is_valid_zug(1,'A')) && (kann_press)) {
        field.setzte('A',1,'X');
        setze_Text(1,"X");
        if (!field.is_full()) {
            if (!field.did_somebody_win()) {
                field = mache_compi_zug(field);
            }
            else {
                if (field.get_field("A1") == ' ') {
                    setze_Text(1," ");
                }
                if (field.get_field("A2") == ' ') {
                    setze_Text(2," ");
                }
                if (field.get_field("A3") == ' ') {
                    setze_Text(3," ");
                }
                if (field.get_field("B1") == ' ') {
                    setze_Text(4," ");
                }
                if (field.get_field("B2") == ' ') {
                    setze_Text(5," ");
                }
                if (field.get_field("B3") == ' ') {
                    setze_Text(6," ");
                }
                if (field.get_field("C1") == ' ') {
                    setze_Text(7," ");
                }
                if (field.get_field("C2") == ' ') {
                    setze_Text(8," ");
                }
                if (field.get_field("C3") == ' ') {
                    setze_Text(9," ");
                }
                kann_press = false;
            }
        }
    }
}

void Main_Window::on_A2_clicked()
{
    if ((field.is_valid_zug(2,'A')) && (kann_press)) {
        field.setzte('A',2,'X');
        setze_Text(2,"X");
        if (!field.is_full()) {
            if (!field.did_somebody_win()) {
                field = mache_compi_zug(field);
            }
            else {
                if (field.get_field("A1") == ' ') {
                    setze_Text(1," ");
                }
                if (field.get_field("A2") == ' ') {
                    setze_Text(2," ");
                }
                if (field.get_field("A3") == ' ') {
                    setze_Text(3," ");
                }
                if (field.get_field("B1") == ' ') {
                    setze_Text(4," ");
                }
                if (field.get_field("B2") == ' ') {
                    setze_Text(5," ");
                }
                if (field.get_field("B3") == ' ') {
                    setze_Text(6," ");
                }
                if (field.get_field("C1") == ' ') {
                    setze_Text(7," ");
                }
                if (field.get_field("C2") == ' ') {
                    setze_Text(8," ");
                }
                if (field.get_field("C3") == ' ') {
                    setze_Text(9," ");
                }
                kann_press = false;
            }
        }
    }
}

void Main_Window::on_A3_clicked()
{
    if ((field.is_valid_zug(3,'A')) && (kann_press)) {
        field.setzte('A',3,'X');
        setze_Text(3,"X");
        if (!field.is_full()) {
            if (!field.did_somebody_win()) {
                field = mache_compi_zug(field);
            }
            else {
                if (field.get_field("A1") == ' ') {
                    setze_Text(1," ");
                }
                if (field.get_field("A2") == ' ') {
                    setze_Text(2," ");
                }
                if (field.get_field("A3") == ' ') {
                    setze_Text(3," ");
                }
                if (field.get_field("B1") == ' ') {
                    setze_Text(4," ");
                }
                if (field.get_field("B2") == ' ') {
                    setze_Text(5," ");
                }
                if (field.get_field("B3") == ' ') {
                    setze_Text(6," ");
                }
                if (field.get_field("C1") == ' ') {
                    setze_Text(7," ");
                }
                if (field.get_field("C2") == ' ') {
                    setze_Text(8," ");
                }
                if (field.get_field("C3") == ' ') {
                    setze_Text(9," ");
                }
                kann_press = false;
            }
        }
    }
}

void Main_Window::on_B1_clicked()
{
    if ((field.is_valid_zug(1,'B')) && (kann_press)) {
        field.setzte('B',1,'X');
        setze_Text(4,"X");
        if (!field.is_full()) {
            if (!field.did_somebody_win()) {
                field = mache_compi_zug(field);
            }
            else {
                if (field.get_field("A1") == ' ') {
                    setze_Text(1," ");
                }
                if (field.get_field("A2") == ' ') {
                    setze_Text(2," ");
                }
                if (field.get_field("A3") == ' ') {
                    setze_Text(3," ");
                }
                if (field.get_field("B1") == ' ') {
                    setze_Text(4," ");
                }
                if (field.get_field("B2") == ' ') {
                    setze_Text(5," ");
                }
                if (field.get_field("B3") == ' ') {
                    setze_Text(6," ");
                }
                if (field.get_field("C1") == ' ') {
                    setze_Text(7," ");
                }
                if (field.get_field("C2") == ' ') {
                    setze_Text(8," ");
                }
                if (field.get_field("C3") == ' ') {
                    setze_Text(9," ");
                }
                kann_press = false;
            }
        }
    }
}

void Main_Window::on_B2_clicked()
{
    if ((field.is_valid_zug(2,'B')) && (kann_press)) {
        field.setzte('B',2,'X');
        setze_Text(5,"X");
        if (!field.is_full()) {
            if (!field.did_somebody_win()) {
                field = mache_compi_zug(field);
            }
            else {
                if (field.get_field("A1") == ' ') {
                    setze_Text(1," ");
                }
                if (field.get_field("A2") == ' ') {
                    setze_Text(2," ");
                }
                if (field.get_field("A3") == ' ') {
                    setze_Text(3," ");
                }
                if (field.get_field("B1") == ' ') {
                    setze_Text(4," ");
                }
                if (field.get_field("B2") == ' ') {
                    setze_Text(5," ");
                }
                if (field.get_field("B3") == ' ') {
                    setze_Text(6," ");
                }
                if (field.get_field("C1") == ' ') {
                    setze_Text(7," ");
                }
                if (field.get_field("C2") == ' ') {
                    setze_Text(8," ");
                }
                if (field.get_field("C3") == ' ') {
                    setze_Text(9," ");
                }
                kann_press = false;
            }
        }
    }
}

void Main_Window::on_B3_clicked()
{
    if ((field.is_valid_zug(3,'B')) && (kann_press)) {
        field.setzte('B',3,'X');
        setze_Text(6,"X");
        if (!field.is_full()) {
            if (!field.did_somebody_win()) {
                field = mache_compi_zug(field);
            }
            else {
                if (field.get_field("A1") == ' ') {
                    setze_Text(1," ");
                }
                if (field.get_field("A2") == ' ') {
                    setze_Text(2," ");
                }
                if (field.get_field("A3") == ' ') {
                    setze_Text(3," ");
                }
                if (field.get_field("B1") == ' ') {
                    setze_Text(4," ");
                }
                if (field.get_field("B2") == ' ') {
                    setze_Text(5," ");
                }
                if (field.get_field("B3") == ' ') {
                    setze_Text(6," ");
                }
                if (field.get_field("C1") == ' ') {
                    setze_Text(7," ");
                }
                if (field.get_field("C2") == ' ') {
                    setze_Text(8," ");
                }
                if (field.get_field("C3") == ' ') {
                    setze_Text(9," ");
                }
                kann_press = false;
            }
        }
    }
}

void Main_Window::on_C1_clicked()
{
    if ((field.is_valid_zug(1,'C')) && (kann_press)) {
        field.setzte('C',1,'X');
        setze_Text(7,"X");
        if (!field.is_full()) {
            if (!field.did_somebody_win()) {
                field = mache_compi_zug(field);
            }
            else {
                if (field.get_field("A1") == ' ') {
                    setze_Text(1," ");
                }
                if (field.get_field("A2") == ' ') {
                    setze_Text(2," ");
                }
                if (field.get_field("A3") == ' ') {
                    setze_Text(3," ");
                }
                if (field.get_field("B1") == ' ') {
                    setze_Text(4," ");
                }
                if (field.get_field("B2") == ' ') {
                    setze_Text(5," ");
                }
                if (field.get_field("B3") == ' ') {
                    setze_Text(6," ");
                }
                if (field.get_field("C1") == ' ') {
                    setze_Text(7," ");
                }
                if (field.get_field("C2") == ' ') {
                    setze_Text(8," ");
                }
                if (field.get_field("C3") == ' ') {
                    setze_Text(9," ");
                }
                kann_press = false;
            }
        }
    }
}

void Main_Window::on_C2_clicked()
{
    if ((field.is_valid_zug(2,'C')) && (kann_press)) {
        field.setzte('C',2,'X');
        setze_Text(8,"X");
        if (!field.is_full()) {
            if (!field.did_somebody_win()) {
                field = mache_compi_zug(field);
            }
            else {
                if (field.get_field("A1") == ' ') {
                    setze_Text(1," ");
                }
                if (field.get_field("A2") == ' ') {
                    setze_Text(2," ");
                }
                if (field.get_field("A3") == ' ') {
                    setze_Text(3," ");
                }
                if (field.get_field("B1") == ' ') {
                    setze_Text(4," ");
                }
                if (field.get_field("B2") == ' ') {
                    setze_Text(5," ");
                }
                if (field.get_field("B3") == ' ') {
                    setze_Text(6," ");
                }
                if (field.get_field("C1") == ' ') {
                    setze_Text(7," ");
                }
                if (field.get_field("C2") == ' ') {
                    setze_Text(8," ");
                }
                if (field.get_field("C3") == ' ') {
                    setze_Text(9," ");
                }
                kann_press = false;
            }
        }
    }
}

void Main_Window::on_C3_clicked()
{
    if ((field.is_valid_zug(3,'C')) && (kann_press)) {
        field.setzte('C',3,'X');
        setze_Text(9,"X");
        if (!field.is_full()) {
            if (!field.did_somebody_win()) {
                field = mache_compi_zug(field);
            }
            else {
                if (field.get_field("A1") == ' ') {
                    setze_Text(1," ");
                }
                if (field.get_field("A2") == ' ') {
                    setze_Text(2," ");
                }
                if (field.get_field("A3") == ' ') {
                    setze_Text(3," ");
                }
                if (field.get_field("B1") == ' ') {
                    setze_Text(4," ");
                }
                if (field.get_field("B2") == ' ') {
                    setze_Text(5," ");
                }
                if (field.get_field("B3") == ' ') {
                    setze_Text(6," ");
                }
                if (field.get_field("C1") == ' ') {
                    setze_Text(7," ");
                }
                if (field.get_field("C2") == ' ') {
                    setze_Text(8," ");
                }
                if (field.get_field("C3") == ' ') {
                    setze_Text(9," ");
                }
                kann_press = false;
            }
        }
    }
}

void Main_Window::setze_Text(const int button, QString text, QCursor curs, bool checkabel)
{
    switch (button)
    {
    case 1:
        ui->A1->setText(text);
        ui->A1->setCursor(curs);
        ui->A1->setCheckable(checkabel);
        break;
    case 2:
        ui->A2->setText(text);
        ui->A2->setCursor(curs);
        ui->A2->setCheckable(checkabel);
        break;
    case 3:
        ui->A3->setText(text);
        ui->A3->setCursor(curs);
        ui->A3->setCheckable(checkabel);
        break;
    case 4:
        ui->B1->setText(text);
        ui->B1->setCursor(curs);
        ui->B1->setCheckable(checkabel);
        break;
    case 5:
        ui->B2->setText(text);
        ui->B2->setCursor(curs);
        ui->B2->setCheckable(checkabel);
        break;
    case 6:
        ui->B3->setText(text);
        ui->B3->setCursor(curs);
        ui->B3->setCheckable(checkabel);
        break;
    case 7:
        ui->C1->setText(text);
        ui->C1->setCursor(curs);
        ui->C1->setCheckable(checkabel);
        break;
    case 8:
        ui->C2->setText(text);
        ui->C2->setCursor(curs);
        ui->C2->setCheckable(checkabel);
        break;
    case 9:
        ui->C3->setText(text);
        ui->C3->setCursor(curs);
        ui->C3->setCheckable(checkabel);
        break;
    }
}

Feld Main_Window::mache_compi_zug(Feld field)
{
    zug = compi.get_best_zug(field);
    column = get_column(zug);
    row = get_row(zug);
    field.setzte(row,column,'O');
    if (zug == "1A") {
        zoin = 1;
    }
    else if (zug == "2A") {
        zoin = 2;
    }
    else if (zug == "3A") {
        zoin = 3;
    }
    else if (zug == "1B") {
        zoin = 4;
    }
    else if (zug == "2B") {
        zoin = 5;
    }
    else if (zug == "3B") {
        zoin = 6;
    }
    else if (zug == "1C") {
        zoin = 7;
    }
    else if (zug == "2C") {
        zoin = 8;
    }
    else if (zug == "3C") {
        zoin = 9;
    }
    setze_Text(zoin,"O");
    if (field.did_somebody_win()) {
        kann_press = false;
        if (field.get_field("A1") == ' ') {
            setze_Text(1," ");
        }
        if (field.get_field("A2") == ' ') {
            setze_Text(2," ");
        }
        if (field.get_field("A3") == ' ') {
            setze_Text(3," ");
        }
        if (field.get_field("B1") == ' ') {
            setze_Text(4," ");
        }
        if (field.get_field("B2") == ' ') {
            setze_Text(5," ");
        }
        if (field.get_field("B3") == ' ') {
            setze_Text(6," ");
        }
        if (field.get_field("C1") == ' ') {
            setze_Text(7," ");
        }
        if (field.get_field("C2") == ' ') {
            setze_Text(8," ");
        }
        if (field.get_field("C3") == ' ') {
            setze_Text(9," ");
        }
    }
    if (field.is_full())
    {
        kann_press = false;
    }
    return field;
}

void Main_Window::on_play_aigan_clicked()
{
    field.clear();
    ui->exit->setCheckable(false);
    setze_Text(1," ",Qt::PointingHandCursor,true);
    setze_Text(2," ",Qt::PointingHandCursor,true);
    setze_Text(3," ",Qt::PointingHandCursor,true);
    setze_Text(4," ",Qt::PointingHandCursor,true);
    setze_Text(5," ",Qt::PointingHandCursor,true);
    setze_Text(6," ",Qt::PointingHandCursor,true);
    setze_Text(7," ",Qt::PointingHandCursor,true);
    setze_Text(8," ",Qt::PointingHandCursor,true);
    setze_Text(9," ",Qt::PointingHandCursor,true);
    kann_press = true;
    compi.new_time();
    if (start(devic)==1)
    {
        setze_Text(5,"O");
        field.setzte('B',2,'O');
    }
}
