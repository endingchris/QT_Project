#include "label.h"

LABEL::LABEL(QLabel *label,int x ,int y ){
    New_Label(label,x,y);
}

void LABEL::New_Label(QLabel *label, int x, int y){
            label->setGeometry(x,y,200,100);
            label->painters();
}
