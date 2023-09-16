#include "movies.h"
#include "ui_movies.h"
#include <QProcess>
#include <QDebug>
#include <sound/asound.h>



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
    QString path_Html = "/home/cleber/Documentos/movie/arthur.html";

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


void movies::on_pushButton_3_clicked()
{
    QString path_Html = "/home/cleber/Documentos/movie/Sandra&Ju.html";

    QProcess process;
    process.startDetached("xdg-open", QStringList() << path_Html);
    qDebug()<< "checkando o qDebug do qt";
}


void movies::on_pushButton_8_clicked()
{
    QString path_Html = "/home/cleber/Documentos/movie/cleber.html";

    QProcess process;
    process.startDetached("xdg-open", QStringList() << path_Html);
    qDebug()<< "checkando o qDebug do qt";
}


void movies::on_pushButton_4_clicked()
{
    QString path_Html = "/home/cleber/Documentos/movie/betania.html";

    QProcess process;
    process.startDetached("xdg-open", QStringList() << path_Html);
    qDebug()<< "checkando o qDebug do qt";
}


void movies::on_pushButton_5_clicked()
{
    QString path_Html = "/home/cleber/Documentos/movie/gu&graze.html";

    QProcess process;
    process.startDetached("xdg-open", QStringList() << path_Html);
    qDebug()<< "checkando o qDebug do qt";

}


void movies::on_pushButton_2_clicked()
{
    QString path_Html = "/home/cleber/Documentos/movie/louize.html";

    QProcess process;
    process.startDetached("xdg-open", QStringList() << path_Html);
    qDebug()<< "Process: " << process.arguments() ;
}


void movies::on_pushButton_6_clicked()
{
    QString path_Html = "/home/cleber/Documentos/movie/jack.html";

    QProcess process;
    process.startDetached("xdg-open", QStringList() << path_Html);
    qDebug()<< "checkando o qDebug do qt";
}

