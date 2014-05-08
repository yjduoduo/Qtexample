#include "codemanage.h"
#include "ui_codemanage.h"
#include "incall.h"

CodeManage::CodeManage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CodeManage)
{
    ui->setupUi(this);

}

CodeManage::~CodeManage()
{
    delete ui;
}
