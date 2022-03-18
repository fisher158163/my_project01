#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QWidget"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // QPushButton *button = new  QPushButton
    // button->setparent(this)

    ui->setupUi(this);
    // 设置Title
    setWindowTitle("第一个Qt程序");
    // 设置固定大小
    setFixedSize(600, 400);
    // QPushButton *button = new QPushButton;
    // button->setparent(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

