#ifndef MAIN_WINDOW_HPP
#define MAIN_WINDOW_HPP

#include <QMainWindow>
#include "computer.hpp"
#include "feld.hpp"
#include "dialog.hpp"

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Feld field{};
    void setze_Text(const int button, QString text, QCursor curs=Qt::ForbiddenCursor, bool checkable = false);
    explicit MainWindow(bool unmoeglich=true,QWidget *parent = nullptr);
    ~MainWindow();

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
    Ui::MainWindow *ui;
    str zug;
    char row;
    int column;
    int zoin;
    bool kann_press{true};
    bool moeglich;
    Computer compi;
};

#endif // MAIN_WINDOW_HPP
