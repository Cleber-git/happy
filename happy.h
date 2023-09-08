#ifndef HAPPY_H
#define HAPPY_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Happy; }
QT_END_NAMESPACE

class Happy : public QMainWindow
{
    Q_OBJECT

public:
    Happy(QWidget *parent = nullptr);
    ~Happy();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Happy *ui;
};
#endif // HAPPY_H
