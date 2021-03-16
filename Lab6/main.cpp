#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPushButton button;

    button.setText("BUTTON TEST");
    button.setToolTip("TOOLTIP");

    QFont myFont("Courier");
    button.setFont(myFont);

    QIcon myIcon("C:/Users/neonf/Documents/Comp_Sci/Platformer_C++/Platformer_C++/Sprites/Apple.png");
    button.setIcon(myIcon);

    button.show();


    return a.exec();
}
