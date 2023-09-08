#include "happy.h"
#include "./ui_happy.h"
#include "movies.h"

Happy::Happy(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Happy)
{
    ui->setupUi(this);
}

Happy::~Happy()
{
    delete ui;
}


void Happy::on_pushButton_clicked()
{

    hide();
    movies mv;
    mv.exec();

}
