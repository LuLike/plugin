#include "mainwindow.h"
#include "myinterface.h"

#include <QFile>
#include <QMessageBox>
#include <QPluginLoader>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
}

MainWindow::~MainWindow()
{

}

bool MainWindow::loadPlugin(const QString pluginpath)
{
  QPluginLoader loader(pluginpath);
  QObject *instance = loader.instance();
  if (instance!= NULL)
      {
           qDebug()<<pluginpath+" is loaded";
           MyInterface *avc = qobject_cast<MyInterface *>(instance);
           m_Form = avc->CreateWidget(this);
           m_Form->show();
           QMessageBox::information(this,"success to load plugin",NULL);
           return true;
      }
  else {
      QMessageBox::information(this,"failed to load plugin",loader.errorString());
  }
    // 需要手动释放
    delete instance;
    return false;
}
