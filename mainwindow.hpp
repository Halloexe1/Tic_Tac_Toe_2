#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include "computer.hpp"
#include "feld.hpp"
#include "dialog.hpp"


namespace Ui
{
class Main_Window;
}

class Main_Window : public QMainWindow
{
    Q_OBJECT

public:
    Feld field{};
    void setze_Text(const int button, QString text, QCursor curs=Qt::ForbiddenCursor, bool checkable = false);
    explicit Main_Window(bool unmoeglich=true,QWidget *parent = nullptr);
    ~Main_Window();

private slots:
    void on_A1_clicked();

    void on_A2_clicked();

    void on_A3_clicked();

    void on_B1_clicked();

    void on_B2_clicked();

    void on_B3_clicked();

    void on_C1_clicked();

    void on_C2_clicked();

    void on_C3_clicked();

    int get_column(str zueg);

    char get_row(str zueg);

public slots:

    void on_play_aigan_clicked();

private slots:

    Feld mache_compi_zug(Feld field);

private:
    random_device devic;
    uniform_int_distribution<int> start{0,1};
    Ui::Main_Window *ui;
    str zug;
    char row;
    int column;
    int zoin;
    bool kann_press{true};
    bool moeglich;
    Computer compi;
};

#endif // MAINWINDOW_HPP
