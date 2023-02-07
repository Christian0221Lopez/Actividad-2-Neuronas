#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<iostream>
#include<stdio.h>
#include<fstream>
#include <string>
#include <sstream>
#include <QApplication>

using namespace std;


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
    QString id=ui->datoN->text();



}





