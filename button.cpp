#include "button.h"

BUTTON::BUTTON(QPushButton *button,int x, int y){
    New_Button(button,x,y);
}

void BUTTON::New_Button(QPushButton *button,int x,int y){
   button->setGeometry(x,y,200,100);

}

