#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->webView->setContent();
    ui->webView->load(QUrl("http://qtsoftware.com/"));   //²½Öè2
    ui->webView->show();  //²½Öè3
    QString path = "./00.png";
    ui->textEdit->append("<img src='"+path+"'>");
}

MainWindow::~MainWindow()
{
    delete ui;
}
