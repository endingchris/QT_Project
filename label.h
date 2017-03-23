#ifndef LAYOUT_H
#define LAYOUT_H
#include <QApplication>
#include <QLabel>

class LABEL :public QWidget {
    Q_OBJECT
public:
    LABEL(QLabel *,int ,int );
    ~LABEL(){};
   void New_Label(QLabel *label, int x, int y);
};
#endif // LAYOUT_H
