/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave_as;
    QAction *actionPrint;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionExit_2;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *mainText;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(700, 500);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName("actionSave_as");
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName("actionPrint");
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/Downloads/copy.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCopy->setIcon(icon);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/paste.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon1);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Downloads/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/imgs/cut.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCut->setIcon(icon2);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imgs/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon3);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imgs/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon4);
        actionExit_2 = new QAction(MainWindow);
        actionExit_2->setObjectName("actionExit_2");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(40, 40, 521, 361));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainText = new QTextEdit(verticalLayoutWidget);
        mainText->setObjectName("mainText");
        QFont font;
        font.setItalic(false);
        mainText->setFont(font);
        mainText->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));

        verticalLayout->addWidget(mainText);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 700, 37));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionExit_2);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        toolBar->addAction(actionCopy);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionExit_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
