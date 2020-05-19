/********************************************************************************
** Form generated from reading UI file 'ItemTest.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMTEST_H
#define UI_ITEMTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemTestClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ItemTestClass)
    {
        if (ItemTestClass->objectName().isEmpty())
            ItemTestClass->setObjectName(QString::fromUtf8("ItemTestClass"));
        ItemTestClass->resize(600, 400);
        menuBar = new QMenuBar(ItemTestClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        ItemTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ItemTestClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ItemTestClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ItemTestClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ItemTestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ItemTestClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ItemTestClass->setStatusBar(statusBar);

        retranslateUi(ItemTestClass);

        QMetaObject::connectSlotsByName(ItemTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *ItemTestClass)
    {
        ItemTestClass->setWindowTitle(QApplication::translate("ItemTestClass", "ItemTest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemTestClass: public Ui_ItemTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMTEST_H
