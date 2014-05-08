#ifndef CODEMANAGE_H
#define CODEMANAGE_H

#include <QMainWindow>

namespace Ui {
class CodeManage;
}

class CodeManage : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit CodeManage(QWidget *parent = 0);
    ~CodeManage();
    
private:
    Ui::CodeManage *ui;
};

#endif // CODEMANAGE_H
