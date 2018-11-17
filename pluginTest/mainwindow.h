#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    /**
     * @brief loadPlugin 加载插件
     * @param pluginpath
     * @return
     */
    bool loadPlugin(const QString pluginpath);

private:
    QWidget* m_Form;
};

#endif // MAINWINDOW_H
