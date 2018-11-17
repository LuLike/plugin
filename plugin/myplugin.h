#ifndef MYPLUGIN_H
#define MYPLUGIN_H

#include <QtPlugin>
#include "myinterface.h"

class MyPlugin : public QObject,public MyInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "pers.chunzhi.plugin.myplugin" FILE "plugin.json")
    Q_INTERFACES(MyInterface);
public:
    MyPlugin();
    virtual ~MyPlugin();
    virtual QWidget *CreateWidget(QWidget *parent) override;
    virtual int add(int a,int b) override;
};

#endif // MYPLUGIN_H
