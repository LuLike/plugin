#include "myplugin.h"

MyPlugin::MyPlugin()
{

}

MyPlugin::~MyPlugin()
{

}

QWidget* MyPlugin::CreateWidget(QWidget *parent)
{
    return new QWidget(parent);
}

int MyPlugin::add(int a,int b)
{
     return a+b;
}
