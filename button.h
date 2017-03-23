#ifndef BUTTON_H
#define BUTTON_H
#include <QApplication>
#include <QPushButton>
class QPushButton;

class BUTTON :public QWidget {
    Q_OBJECT
public:
    BUTTON(QPushButton*,int ,int );
    ~BUTTON(){};
   void New_Button(QPushButton *button, int x, int y);
};

#endif // BUTTON_H
