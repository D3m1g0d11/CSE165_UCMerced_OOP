#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "my_gl.h"
#include <QDebug>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    lastX = event->x();
    lastY = event->y();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    float xAtRelease = event->x();
    float yAtRelease = event->y();

    float dx = xAtRelease - lastX;
    float dy = yAtRelease - lastY;

    float x = ui->openGLWidget->x_mov;
    float y = ui->openGLWidget->y_mov;

    ui->openGLWidget->setTranslationMouse(x + (dx / 100), y - (dy / 100));

    lastX = event->x();
    lastY = event->y();

}

void MainWindow::keyPressEvent(QKeyEvent* event){
    float x_m = ui->openGLWidget->x_mov;
    float y_m = ui->openGLWidget->y_mov;
    float x_r = ui->openGLWidget->xrot;
    float y_r = ui->openGLWidget->yrot;
    float z_r = ui->openGLWidget->zrot;
    float x_mov = 0.0, y_mov = 0.0, x_rot = 0.0, y_rot = 0.0, z_rot = 0.0;

    if (event->key() == Qt::Key_Up) {
        y_mov = +0.05f;
    }

    if (event->key() == Qt::Key_Down) {
        y_mov = -0.05f;
    }

    if(event->key() == Qt::Key_Left){
        x_mov = -0.05f;
    }

    if(event->key() == Qt::Key_Right){
        x_mov = +0.05f;
    }

    if(event->key() == Qt::Key_W){
        x_rot = +5.0f;
    }

    if(event->key() == Qt::Key_S){
        x_rot = -5.0f;
    }

    if(event->key() == Qt::Key_A){
        y_rot = -5.0f;
    }

    if(event->key() == Qt::Key_D){
        y_rot = +5.0f;
    }

    if(event->key() == Qt::Key_Q){
        z_rot = -5.0f;
    }

    if(event->key() == Qt::Key_E){
        z_rot = +5.0f;
    }
    ui->openGLWidget->setTranslation(x_m + x_mov, y_m + y_mov);
    ui->openGLWidget->setRotation(x_r + x_rot, y_r + y_rot, z_r + z_rot);
    qDebug() << "x_mov is : " << x_m + x_mov << "; y_mov is : " << y_m + y_mov << '\n';
    qDebug() << "x_rot is : " << x_r + x_rot << "; y_rot is : " << y_r + y_rot << "; z_rot is : " << z_r + z_rot;
}

