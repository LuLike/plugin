#ifndef MYINTERFACE_H
#define MYINTERFACE_H

#include <QWidget>

class MyInterface {
public:
    MyInterface();
   virtual ~MyInterface();
    virtual QWidget *CreateWidget(QWidget *parent)=0;
    virtual int add(int a,int b)=0;
};

Q_DECLARE_INTERFACE(MyInterface,"sdafasdfsadfsadfsadfsadf");

#endif // MYINTERFACE_H
