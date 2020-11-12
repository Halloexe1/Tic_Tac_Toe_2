#ifndef DIALOG_HPP
#define DIALOG_HPP

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:

    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:

    void on_monitor_clicked();

    void on_no_monitor_clicked();

private:

    Ui::Dialog *ui;

    bool is_res_ok{false};
    int res{0};
};

#endif // DIALOG_HPP
