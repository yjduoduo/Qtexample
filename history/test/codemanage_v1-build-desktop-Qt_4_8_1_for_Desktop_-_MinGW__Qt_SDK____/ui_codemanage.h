/********************************************************************************
** Form generated from reading UI file 'codemanage.ui'
**
** Created: Mon Apr 14 11:16:59 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODEMANAGE_H
#define UI_CODEMANAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CodeManage
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CodeManage)
    {
        if (CodeManage->objectName().isEmpty())
            CodeManage->setObjectName(QString::fromUtf8("CodeManage"));
        CodeManage->resize(400, 300);
        menuBar = new QMenuBar(CodeManage);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        CodeManage->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CodeManage);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CodeManage->addToolBar(mainToolBar);
        centralWidget = new QWidget(CodeManage);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        CodeManage->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CodeManage);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CodeManage->setStatusBar(statusBar);

        retranslateUi(CodeManage);

        QMetaObject::connectSlotsByName(CodeManage);
    } // setupUi

    void retranslateUi(QMainWindow *CodeManage)
    {
        CodeManage->setWindowTitle(QApplication::translate("CodeManage", "CodeManage", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CodeManage: public Ui_CodeManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODEMANAGE_H
