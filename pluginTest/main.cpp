#include "mainwindow.h"

#include <QApplication>
#include <QDir>
#include <QFileInfo>
#include <QLibrary>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //寻找插件路径
    QDir dir(qApp->applicationDirPath());
    foreach (QFileInfo info, dir.entryInfoList(QDir::Files | QDir::NoDotAndDotDot)) {
        QString absoluteFilePath=info.absoluteFilePath();
        if(QLibrary::isLibrary(absoluteFilePath))  //判断文件是否是共享库
        {
             w.loadPlugin(absoluteFilePath);
        }
    }

    return a.exec();
}
