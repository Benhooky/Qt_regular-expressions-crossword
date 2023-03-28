#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    this->close();
}


void MainWindow::StringCreator(QLineEdit* a1,QLineEdit* a2,QLineEdit* a3,QLineEdit* a4,QString& q)
{
    q.append(a1->text());
    q.append(a2->text());
    q.append(a3->text());
    q.append(a4->text());
}
void MainWindow::FirstGorizont()
{
    QString q;
    this->StringCreator(ui->lineEdit,ui->lineEdit_2,ui->lineEdit_3,ui->lineEdit_4,q);
    QRegExp rx("^a+\\D+2$");
    if(rx.indexIn(q)==0)
    {
        ui->lineEdit->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_2->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_3->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_4->setStyleSheet("QLineEdit {background-color: green;}");
        ui->label->setStyleSheet("color: green");
    }
    else
    {
        ui->lineEdit->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_2->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_3->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_4->setStyleSheet("QLineEdit {background-color: red;}");
        ui->label->setStyleSheet("color: red");
    }
}
void MainWindow::FirstVerical()
{
    QString q;
    this->StringCreator(ui->lineEdit,ui->lineEdit_5,ui->lineEdit_9,ui->lineEdit_13,q);
    QRegExp rx("\\D+\\D+\\d+c$");
    if(rx.indexIn(q)==0)
    {
        ui->lineEdit->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_5->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_9->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_13->setStyleSheet("QLineEdit {background-color: green;}");
        ui->label_5->setStyleSheet("color: green");
    }
    else
    {
        ui->lineEdit->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_5->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_9->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_13->setStyleSheet("QLineEdit {background-color: red;}");
        ui->label_5->setStyleSheet("color: red");
    }
}
void MainWindow::SecondGorizont()
{
    QString q;
    this->StringCreator(ui->lineEdit_5,ui->lineEdit_6,ui->lineEdit_7,ui->lineEdit_8,q);
    QRegExp rx("3*\\D+\\s$");
    if(rx.indexIn(q)==0)
    {
        ui->lineEdit_5->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_6->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_7->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_8->setStyleSheet("QLineEdit {background-color: green;}");
        ui->label_2->setStyleSheet("color: green");
    }
    else
    {
        ui->lineEdit_5->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_6->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_7->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_8->setStyleSheet("QLineEdit {background-color: red;}");
        ui->label_2->setStyleSheet("color: red");
    }
}
void MainWindow::ThirdGorizont()
{
    QString q;
    this->StringCreator(ui->lineEdit_9,ui->lineEdit_10,ui->lineEdit_11,ui->lineEdit_12,q);
    QRegExp rx("\\D*3+[A-Z]$");
    if(rx.indexIn(q)==0)
    {
        ui->lineEdit_9->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_10->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_11->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_12->setStyleSheet("QLineEdit {background-color: green;}");
        ui->label_3->setStyleSheet("color: green");
    }
    else
    {
        ui->lineEdit_9->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_10->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_11->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_12->setStyleSheet("QLineEdit {background-color: red;}");
        ui->label_3->setStyleSheet("color: red");
    }
}
void MainWindow::FourthGorizont()
{
    QString q;
    this->StringCreator(ui->lineEdit_13,ui->lineEdit_14,ui->lineEdit_15,ui->lineEdit_16,q);
    QRegExp rx("3*\\D*\\s+\\s+$");
    if(rx.indexIn(q)==0)
    {
        ui->lineEdit_13->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_14->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_15->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_16->setStyleSheet("QLineEdit {background-color: green;}");
        ui->label_4->setStyleSheet("color: green");
    }
    else
    {
        ui->lineEdit_13->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_14->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_15->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_16->setStyleSheet("QLineEdit {background-color: red;}");
        ui->label_4->setStyleSheet("color: red");
    }
}
void MainWindow::SecondVertical()
{
    QString q;
    this->StringCreator(ui->lineEdit_2,ui->lineEdit_6,ui->lineEdit_10,ui->lineEdit_14,q);
    QRegExp rx("\\D*\\d+\\S+$");
    if(rx.indexIn(q)==0)
    {
        ui->lineEdit_2->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_6->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_10->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_14->setStyleSheet("QLineEdit {background-color: green;}");
        ui->label_6->setStyleSheet("color: green");
    }
    else
    {
        ui->lineEdit_2->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_6->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_10->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_14->setStyleSheet("QLineEdit {background-color: red;}");
        ui->label_6->setStyleSheet("color: red");
    }
}
void MainWindow::ThirdVertical()
{
    QString q;
    this->StringCreator(ui->lineEdit_3,ui->lineEdit_7,ui->lineEdit_11,ui->lineEdit_15,q);
    QRegExp rx("\\D+\\s+\\D*$");
    if(rx.indexIn(q)==0)
    {
        ui->lineEdit_3->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_7->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_11->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_15->setStyleSheet("QLineEdit {background-color: green;}");
        ui->label_7->setStyleSheet("color: green");
    }
    else
    {
        ui->lineEdit_3->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_7->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_11->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_15->setStyleSheet("QLineEdit {background-color: red;}");
        ui->label_7->setStyleSheet("color: red");
    }
}
void MainWindow::FourthVertical()
{
    QString q;
    this->StringCreator(ui->lineEdit_4,ui->lineEdit_8,ui->lineEdit_12,ui->lineEdit_16,q);
    QRegExp rx("^\\D*\\d*\\D+\\D+$");
    if(rx.indexIn(q)==0)
    {
        ui->lineEdit_4->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_8->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_12->setStyleSheet("QLineEdit {background-color: green;}");
        ui->lineEdit_16->setStyleSheet("QLineEdit {background-color: green;}");
        ui->label_8->setStyleSheet("color: green");
    }
    else
    {
        ui->lineEdit_4->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_8->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_12->setStyleSheet("QLineEdit {background-color: red;}");
        ui->lineEdit_16->setStyleSheet("QLineEdit {background-color: red;}");
        ui->label_8->setStyleSheet("color: red");
    }
}
void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    FirstGorizont();
    FirstVerical();
}
void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
    FirstGorizont();
    SecondVertical();
}


void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)
{
    ThirdVertical();
    FirstGorizont();
}

void MainWindow::on_lineEdit_4_textChanged(const QString &arg1)
{
    FirstGorizont();
    FourthVertical();
}
void MainWindow::on_lineEdit_5_textChanged(const QString &arg1)
{
    FirstVerical();
    SecondGorizont();
}

void MainWindow::on_lineEdit_9_textChanged(const QString &arg1)
{
    ThirdGorizont();
    FirstVerical();
}

void MainWindow::on_lineEdit_13_textChanged(const QString &arg1)
{
    FourthGorizont();
    FirstVerical();
}

void MainWindow::on_lineEdit_6_textChanged(const QString &arg1)
{
    SecondVertical();
    SecondGorizont();
}

void MainWindow::on_lineEdit_7_textChanged(const QString &arg1)
{
    ThirdVertical();
    SecondGorizont();
}

void MainWindow::on_lineEdit_8_textChanged(const QString &arg1)
{
    FourthVertical();
    SecondGorizont();
}

void MainWindow::on_lineEdit_10_textChanged(const QString &arg1)
{
    SecondVertical();
    ThirdGorizont();
}

void MainWindow::on_lineEdit_11_textChanged(const QString &arg1)
{
    ThirdVertical();
    ThirdGorizont();
}

void MainWindow::on_lineEdit_12_textChanged(const QString &arg1)
{
    FourthVertical();
    ThirdGorizont();
}

void MainWindow::on_lineEdit_14_textChanged(const QString &arg1)
{
    SecondVertical();
    FourthGorizont();
}

void MainWindow::on_lineEdit_15_textChanged(const QString &arg1)
{
    ThirdVertical();
    FourthGorizont();
}

void MainWindow::on_lineEdit_16_textChanged(const QString &arg1)
{
    FourthVertical();
    FourthGorizont();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    ui->lineEdit_8->clear();
    ui->lineEdit_9->clear();
    ui->lineEdit_10->clear();
    ui->lineEdit_11->clear();
    ui->lineEdit_12->clear();
    ui->lineEdit_13->clear();
    ui->lineEdit_14->clear();
    ui->lineEdit_15->clear();
    ui->lineEdit_16->clear();
    ui->lineEdit->setStyleSheet("QLineEdit {background-color: white;}");
    ui->lineEdit_2->setStyleSheet("QLineEdit {background-color: white;}");
    ui->lineEdit_3->setStyleSheet("QLineEdit {background-color: white;}");
    ui->lineEdit_4->setStyleSheet("QLineEdit {background-color: white;}");
    ui->lineEdit_5->setStyleSheet("QLineEdit {background-color: white;}");
    ui->lineEdit_6->setStyleSheet("QLineEdit {background-color: white;}");
    ui->lineEdit_7->setStyleSheet("QLineEdit {background-color: white;}");
    ui->lineEdit_8->setStyleSheet("QLineEdit {background-color: white;}");
    ui->lineEdit_9->setStyleSheet("QLineEdit {background-color: white;}");
    ui->lineEdit_10->setStyleSheet("QLineEdit {background-color: white;}");
    ui->lineEdit_11->setStyleSheet("QLineEdit {background-color: white;}");
    ui->lineEdit_12->setStyleSheet("QLineEdit {background-color: white;}");
    ui->lineEdit_13->setStyleSheet("QLineEdit {background-color: white;}");
    ui->lineEdit_14->setStyleSheet("QLineEdit {background-color: white;}");
    ui->lineEdit_15->setStyleSheet("QLineEdit {background-color: white;}");
    ui->lineEdit_16->setStyleSheet("QLineEdit {background-color: white;}");
    ui->label->setStyleSheet("QLineEdit {background-color: white;}");
    ui->label_2->setStyleSheet("QLineEdit {background-color: white;}");
    ui->label_3->setStyleSheet("QLineEdit {background-color: white;}");
    ui->label_4->setStyleSheet("QLineEdit {background-color: white;}");
    ui->label_5->setStyleSheet("QLineEdit {background-color: white;}");
    ui->label_6->setStyleSheet("QLineEdit {background-color: white;}");
    ui->label_7->setStyleSheet("QLineEdit {background-color: white;}");
    ui->label_8->setStyleSheet("QLineEdit {background-color: white;}");
}
