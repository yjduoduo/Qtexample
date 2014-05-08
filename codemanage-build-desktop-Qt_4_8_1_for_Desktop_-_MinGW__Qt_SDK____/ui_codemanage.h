/********************************************************************************
** Form generated from reading UI file 'codemanage.ui'
**
** Created: Mon Apr 14 11:29:16 2014
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
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CodeManage)
    {
        if (CodeManage->objectName().isEmpty())
            CodeManage->setObjectName(QString::fromUtf8("CodeManage"));
        CodeManage->resize(754, 520);
        centralWidget = new QWidget(CodeManage);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        CodeManage->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CodeManage);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 754, 23));
        CodeManage->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CodeManage);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CodeManage->addToolBar(Qt::TopToolBarArea, mainToolBar);
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
