#ifndef MYCLASS_H
#define MYCLASS_H
#include <linux/i2c-dev.h>
#include <QtCore/QString>
#include <QtCore/QFile>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>
#include <QtCore/QTime>

class MyClass
{
public:
    int channel;
    int read_smbus(int address, int cmd);
    void open_file(QString name);
    void open_bus(int address);
    void close_file();
//private:

};

int MyClass::read_smbus(int addr, int cmd)
{
    short int ret;
    ret = i2c_smbus_read_word_data(addr,cmd);
    if (ret<0){
        qDebug() << QString("Can't read bus") << channel;
        return ret;
    }
    return ret;
}

void MyClass::open_bus(int address)
{
    if(ioctl(channel ,I2C_SLAVE, address)<0)
        qDebug() << QString("Can't open bus") << address;

}

void MyClass::open_file(QString name)
{
    const char* ret = name.toLocal8Bit().data();
    channel = open(ret ,O_RDWR);
    if (channel<0)
        qDebug() << QString("Can't open channel 11") << QTime::currentTime();
}

void MyClass::close_file()
{
    close(channel);
}

#endif // MYCLASS_H
