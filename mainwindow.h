#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore/QTime>
#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include <QtCore/QDebug>
#include <QtCore/QTimer>
#include <QtCore/QList>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <linux/i2c-dev.h>
#include <unistd.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QTimer *tmr;
    Ui::MainWindow *ui;
    QList<QString> myList, s_values_l;
    QList<int> values_l, values_r;

    void readI2C();
    void readTemp();
    void readFiles();
    void leftCell_read();
    void rightCell_read();

private slots:
    void updateInfo();
    void newF();

};

#endif // MAINWINDOW_H
