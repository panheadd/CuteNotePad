#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->mainText);
    setMainWindowStyle("NotePad","252525");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::log(std::string message){
    std::cout<<message<<std::endl;
}

void MainWindow::on_actionNew_triggered()
{
    currentFile.clear();
    ui->mainText->setText(QString());
}


void MainWindow::on_actionOpen_triggered()
{
    QString userFile = QFileDialog::getOpenFileName(this,"Open File");
    QFile file(userFile);
    currentFile = userFile;

    if(!file.open(QIODevice::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"Warning","Can not open file.");
    }

    setWindowTitle(currentFile);

    QTextStream in(&file);
    QString text = in.readAll();
    ui->mainText->setText(text);
    file.close();
}


void MainWindow::on_actionSave_as_triggered()
{
    QString userFile = QFileDialog::getSaveFileName(this,"Save as");
    QFile file(userFile);

    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"Warning","Can not save file.");
    }

    currentFile = userFile;
    setWindowTitle(currentFile);

    QTextStream out(&file);
    QString text = ui->mainText->toPlainText();
    out<< text;
    file.close();
}


void MainWindow::on_actionPrint_triggered()
{
    QPrinter printer;
    printer.setPrinterName("Printer Name");
    QPrintDialog pDialog(&printer,this);
    if(pDialog.exec() == QDialog::Rejected){
        QMessageBox::warning(this,"Warning","Can not acces printer.");
        return;
    }
    ui->mainText->print(&printer);

}


void MainWindow::on_actionCopy_triggered()
{
    ui->mainText->copy();
}


void MainWindow::on_actionPaste_triggered()
{
    ui->mainText->paste();
}


void MainWindow::on_actionCut_triggered()
{
    ui->mainText->cut();
}


void MainWindow::on_actionUndo_triggered()
{
    ui->mainText->undo();
}


void MainWindow::on_actionRedo_triggered()
{
    ui->mainText->redo();
}

void MainWindow::setMainWindowStyle(QString title, QString RGB){
    ui->mainText->setStyleSheet("background-color:#"+RGB+";");
    MainWindow::setWindowTitle(title);
}


void MainWindow::on_actionExit_2_triggered()
{
    QApplication::quit();
}

