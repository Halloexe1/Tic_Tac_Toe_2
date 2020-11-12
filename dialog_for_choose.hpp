#ifndef DIALOG_FOR_CHOOSE_HPP
#define DIALOG_FOR_CHOOSE_HPP

#include <QDialog>

namespace Ui {
class Dialog_for_choose;
}

class Dialog_for_choose : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_for_choose(QWidget *parent = nullptr);
    ~Dialog_for_choose();

private slots:
    void on_button_moeglich_clicked();

    void on_button_unmoeglich_clicked();

private:
    Ui::Dialog_for_choose *ui;
};

#endif // DIALOG_FOR_CHOOSE_HPP
