#include "movies.h"
#include "ui_movies.h"
#include <QProcess>
#include <QDebug>
movies::movies(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::movies)
{
    ui->setupUi(this);
}

movies::~movies()
{
    delete ui;
}

void movies::on_pushButton_clicked()
{
    QString path_Html = "/home/cleber/Documentos/movie/cleber.html";

    QProcess process;
    process.startDetached("xdg-open", QStringList() << path_Html);
    qDebug()<< "checkando o qDebug do qt";

}


void movies::on_pushButton_9_clicked()
{
    QString path_Html = "/home/cleber/Documentos/movie/Seu_Otávio.html";

    QProcess process;
    process.startDetached("xdg-open", QStringList() << path_Html);
    qDebug()<< "checkando o qDebug do qt";

}

