/*Attached: button.h, button.cpp
***********************************************************************
Project: Group Project
***********************************************************************
Programmers: Chris Carney, Kevin Cabe
***********************************************************************/
#include "button.h"
#include "label.h"
#include <QtGui>
#include <string>

 int main(int argc, char *argv[]){
     QApplication app(argc, argv);
     QWidget window;

     //new buttons declared
     QPushButton *button1 = new QPushButton("Savings Account", &window);
     QPushButton *button2 = new QPushButton("Transfer Funds", &window);
     QPushButton *button3 = new QPushButton("Checking Account", &window);
     QPushButton *button4 = new QPushButton("Check Transaction History", &window);

    //new labels declared
     QLabel *Label = new QLabel(" Savings Account Balance ", &window);
     QLabel *Label2 = new QLabel(" Checking Account Balance ", &window);

    //labeles and buttons passed to Classes
     LABEL L1(Label,100,100);
     LABEL L2(Label2,500,100);
     BUTTON b1(button1,0,0);
     BUTTON b2(button2,190,0);
     BUTTON b3(button3,380,0);
     BUTTON b4(button4,570,0);

     window.setWindowTitle(QApplication::translate("toplevel", "ACCOUNTS"));
     window.resize(770,800);
     window.show();


     return app.exec();
 }
