#include <QApplication>
#include "mainwindow.hpp"
#include "dialog.hpp"
#include "main_window.hpp"
#include "dialog_for_choose.hpp"

int dia_exec{0};
bool schwierigkeit;

int main(int argc, char **argv) {
    QApplication app{argc,argv};
    Dialog dialog;
    dialog.show();
    dia_exec = dialog.exec();
    if (dia_exec == 1) {
        dialog.close();
        Dialog_for_choose dia{};
        dia_exec = dia.exec();
        if (dia_exec == 1) {
            schwierigkeit = true;
        }
        else if (dia_exec == 2) {
            schwierigkeit = false;
        }
        else if (dia_exec == 0) {
            return 0;
        }
        Main_Window window{schwierigkeit};
        window.show();
        window.setVisible(true);
        return app.exec();
    }
    else if (dia_exec == 10) {
        dialog.close();
        Dialog_for_choose dia{};
        dia_exec = dia.exec();
        if (dia_exec == 1) {
            schwierigkeit = false;
        }
        else if (dia_exec == 2) {
            schwierigkeit = true;
        }
        else if (dia_exec == 0) {
            return 0;
        }
        MainWindow window{};
        window.show();
        window.setVisible(true);
        return app.exec();
    }
    else if (dia_exec == 0) {
        return 0;
    }
    else {
        cerr << "Ein Fehler ist aufgetreten";
        return dia_exec;
    }
    return app.exec();
}
/***
 *
 *              ca. 2435 Zeilen insgesamt(ohne zusätzlichen Dateien(nur cpp/hpp))
 *              ca. 4869 Zeilen insgesamt(mit zusätzlichen Dateien(alle Dateien))
 *
***/
