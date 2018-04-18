#include "mainwindow.h"
//#include "ui_mainwindow.h"
#include "ui_mainwindow_new.h"
#include "myclass.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tmr = new QTimer(this);
    connect(tmr,SIGNAL(timeout()),this,SLOT(updateInfo()));
    //connect(tmr,SIGNAL(timeout()),this,SLOT(newF()));
    tmr->setInterval(5000);
    tmr->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete tmr;
}

void MainWindow::updateInfo()
{
    //readFiles();
    //readI2C();
    readTemp();
    leftCell_read();
    rightCell_read();
}

void MainWindow::readFiles(){
    QString s1, s2, fil, fileName, v1_l, v2_l, volt_l, curr_l, t1_l, t2_l, temp_l, val;
    QString v1_r, v2_r, volt_r, curr_r, t1_r, t2_r, temp_r;
    //s1 = "/home/nzhdanov/work/bat/";
    //s2 = "/home/nzhdanov/work/bat1/";
    s2 = "/sys/devices/pci0000:00/0000:00:1f.3/i2c-9/i2c-10/10-000b/power_supply/bq20z655-right/";
    s1 = "/sys/devices/pci0000:00/0000:00:1f.3/i2c-9/i2c-11/11-000b/power_supply/bq20z655-left/";
    myList << "current_now" << "voltage_now" << "capacity" << "temp";

    foreach (fil, myList) {
        fileName = s1 + fil;
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly)){
            qDebug() << QString("Can't get file") << fileName;
            exit(-1);
        }
        QTextStream in(&file);
        val = in.readLine();
        file.close();
        fileName.clear();
        values_l.append(val.toInt());
    }
    if (values_l[0] != 0){
        v1_l = QString::number(values_l[0] / 100000000);
        v2_l = QString::number(values_l[0] % 100000000);
        v2_l.remove("-");
        volt_l = v1_l + "." + v2_l;
        while (volt_l.endsWith("0"))
            volt_l.chop(1);
        ui->LCD_VOLTAGE_L->display(volt_l);
    }
    else
        ui->LCD_VOLTAGE_L->display(values_l[0]);

    curr_l = (QString::number(values_l[1] / 1000000)) + "." + (QString::number(values_l[1] % 1000000));
    while (curr_l.endsWith("0"))
        curr_l.chop(1);

    if ((values_l[3] %100) != 0){
        t1_l = QString::number(values_l[3] / 100);
        t2_l = QString::number(values_l[3] % 100);
        if (t2_l.startsWith("-"))
            t2_l.remove("-");
        temp_l = t1_l + "." + t2_l;
        while (temp_l.endsWith("0"))
            temp_l.chop(1);
    }
    else
        temp_l = QString::number(values_l[3] / 100);

    //qDebug() << QString("Левая батарея ") << QString("Потребление: ") << volt_l << QString("Вольтаж: ") << curr_l << QString("Емкость: ") << values_l[2] << QString("Температура: ") << temp_l;

    ui->LCD_CAPACITY_L->display(values_l[2]);
    ui->LCD_CURRENT_L->display(curr_l);

    ui->LCD_TEMPERATURE_L->display(temp_l);
    values_l.clear();

    foreach (fil, myList) {
        fileName = s2 + fil;
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly)){
            qDebug() << QString("Can't get file") << fileName;
            exit(-1);
        }
        QTextStream in(&file);
        val = in.readLine();
        file.close();
        fileName.clear();
        values_r.append(val.toInt());
    }

    if (values_r[0] != 0){
        v1_r = QString::number(values_r[0] / 100000000);
        v2_r = QString::number(values_r[0] % 100000000);
        v2_r.remove("-");
        volt_r = v1_r + "." + v2_r;
        while (volt_r.endsWith("0"))
            volt_r.chop(1);
        ui->LCD_VOLTAGE_R->display(volt_r);
    }
    else
        ui->LCD_CURRENT_R->display(values_r[0]);

    curr_r = (QString::number(values_r[1] / 1000000)) + "." + (QString::number(values_r[1] % 1000000));
    while (curr_r.endsWith("0"))
        curr_r.chop(1);

    if ((values_r[3] %100) != 0){
        t1_r = QString::number(values_r[3] / 100);
        t2_r = QString::number(values_r[3] % 100);
        if (t2_r.startsWith("-"))
            t2_r.remove("-");
        temp_r = t1_r + "." + t2_r;
        while (temp_r.endsWith("0"))
            temp_r.chop(1);
    }
    else
        temp_r = QString::number(values_r[3] / 100);

    //qDebug() << QString("Правая батарея ") << QString("Потребление: ") << volt << QString("Вольтаж: ") << curr << QString("Емкость: ") << values_r[2] << QString("Температура: ") << temp;

    ui->LCD_CAPACITY_R->display(values_r[2]);
    ui->LCD_CURRENT_R->display(curr_r);
    ui->LCD_TEMPERATURE_R->display(temp_r);
    values_r.clear();
}

void MainWindow::readI2C(){
    int i2c_l, i2c_r, cell1_l, cell2_l, cell1_r, cell2_r;
    QString curr_l1, curr_l2, curr_r1, curr_r2;
    if ((i2c_l = open("/dev/i2c-10",O_RDWR))<0){
        qDebug() << QString("Can't open channel 10");
        exit(-1);
    }
    ioctl(i2c_l ,I2C_SLAVE, 0x0b);
    cell1_l = i2c_smbus_read_word_data(i2c_l, 0x3e);
    cell2_l = i2c_smbus_read_word_data(i2c_l, 0x3f);

    curr_l1 = (QString::number(cell1_l / 1000)) + "." +(QString::number(cell1_l % 1000));
    while (curr_l1.endsWith("0"))
        curr_l1.chop(1);

    curr_l2 = (QString::number(cell2_l / 1000)) + "." + (QString::number(cell2_l % 1000));
    while (curr_l2.endsWith("0"))
        curr_l2.chop(1);

    ui->LCD_CELL_L_1->display(curr_l1);
    ui->LCD_CELL_L_2->display(curr_l2);

    if ((i2c_r = open("/dev/i2c-11",O_RDWR))<0){
        qDebug() << QString("Can't open channel 11");
        exit(-1);
    }
    ioctl(i2c_r ,I2C_SLAVE, 0x0b);
    cell1_r = i2c_smbus_read_word_data(i2c_r, 0x3e);
    cell2_r = i2c_smbus_read_word_data(i2c_r, 0x3f);

    curr_r1 = (QString::number(cell1_r / 1000)) + "." + (QString::number(cell1_r % 1000));
    while (curr_r1.endsWith("0"))
        curr_r1.chop(1);

    curr_r2 = (QString::number(cell2_r / 1000)) + "." + (QString::number(cell2_r % 1000));
    while (curr_r2.endsWith("0"))
        curr_r2.chop(1);

    ui->LCD_CELL_R_1->display(curr_r1);
    ui->LCD_CELL_R_2->display(curr_r2);
}

void MainWindow::readTemp(){
    QString temp_cpu1, cpu1_temperature, temp_cpu2, cpu2_temperature;
    int temp_c1_int, temp_c2_int;

    QFile cpu_temp1("/sys/class/hwmon/hwmon2/temp2_input");
    //QFile cpu_temp1("/sys/class/hwmon/hwmon1/temp1_input");
    QFile cpu_temp2("/sys/class/hwmon/hwmon2/temp4_input");
    //QFile cpu_temp2("/sys/class/hwmon/hwmon1/temp2_input");

    if (!cpu_temp1.open(QIODevice::ReadOnly)){
        qDebug() << QString("Can't get temp 1");
        //exit(-1);
    }
    QTextStream cpu1_read(&cpu_temp1);
    temp_cpu1 = cpu1_read.readLine();
    cpu_temp1.close();
    if ((temp_cpu1.toInt()%1000) != 0){
        cpu1_temperature = (QString::number(temp_cpu1.toInt()/1000)) + "." + (QString::number(temp_cpu1.toInt()%1000));
        while (cpu1_temperature.endsWith("0"))
            cpu1_temperature.chop(1);
        ui->LCD_TEMP_C_1->display(cpu1_temperature);
    }
    else{
        temp_c1_int = temp_cpu1.toInt()/1000;
        ui->LCD_TEMP_C_1->display(temp_c1_int);
    }
    cpu_temp1.close();

    if (!cpu_temp2.open(QIODevice::ReadOnly)){
        qDebug() << QString("Can't get temp 2");
        //exit(-1);
    }
    QTextStream cpu2_read(&cpu_temp2);
    temp_cpu2 = cpu2_read.readLine();
    cpu_temp2.close();
    if ((temp_cpu2.toInt()%1000) != 0){
        cpu2_temperature = (QString::number(temp_cpu2.toInt()/1000)) + "." + (QString::number(temp_cpu2.toInt()%1000));
        while (cpu2_temperature.endsWith("0"))
            cpu2_temperature.chop(1);
        ui->LCD_TEMP_C_2->display(cpu2_temperature);
    }
    else{
        temp_c2_int = temp_cpu2.toInt()/1000;
        ui->LCD_TEMP_C_2->display(temp_c2_int);
    }
    cpu_temp2.close();
}

void MainWindow::leftCell_read(){
    int left_chan = open("/dev/i2c-10",O_RDWR);
    if ((left_chan)<0){
        qDebug() << QString("Can't open channel 10") << QTime::currentTime();
        //exit(-1);
    }else{
        ioctl(left_chan ,I2C_SLAVE, 0x0b);
    }

    unsigned short int capacity = i2c_smbus_read_word_data(left_chan, 0x0e);
    unsigned short int voltage = i2c_smbus_read_word_data(left_chan, 0x09);
    unsigned short temperature = i2c_smbus_read_word_data(left_chan, 0x08);
    short int current = i2c_smbus_read_word_data(left_chan, 0x0a);
    unsigned short cell1_l = i2c_smbus_read_word_data(left_chan, 0x3e);
    unsigned short cell2_l = i2c_smbus_read_word_data(left_chan, 0x3f);

    QString temp = (QString::number(temperature/100)) + "." + (QString::number(temperature%100));

    ui->LCD_CAPACITY_L->display(capacity);
    ui->LCD_VOLTAGE_L->display(current);
    ui->LCD_TEMPERATURE_L->display(temp);
    ui->LCD_CURRENT_L->display(voltage);
    ui->LCD_CELL_L_1->display(cell1_l);
    ui->LCD_CELL_L_2->display(cell2_l);

    //qDebug() << capacity << voltage << temperature << current;

    ::close(left_chan);
}

void MainWindow::rightCell_read()
{
    int right_chan = open("/dev/i2c-11",O_RDWR);
    if ((right_chan)<0){
        qDebug() << QString("Can't open channel 11") << QTime::currentTime();
        //exit(-1);
    }else{
        ioctl(right_chan ,I2C_SLAVE, 0x0b);
    }

    unsigned short int capacity = i2c_smbus_read_word_data(right_chan, 0x0e);
    unsigned short int voltage = i2c_smbus_read_word_data(right_chan, 0x09);
    unsigned short temperature = i2c_smbus_read_word_data(right_chan, 0x08);
    short int current = i2c_smbus_read_word_data(right_chan, 0x0a);
    unsigned short cell1_r = i2c_smbus_read_word_data(right_chan, 0x3e);
    unsigned short cell2_r = i2c_smbus_read_word_data(right_chan, 0x3f);

    QString temp = (QString::number(temperature/100)) + "." + (QString::number(temperature%100));

    ui->LCD_CAPACITY_R->display(capacity);
    ui->LCD_VOLTAGE_R->display(current);
    ui->LCD_TEMPERATURE_R->display(temp);
    ui->LCD_CURRENT_R->display(voltage);
    ui->LCD_CELL_R_1->display(cell1_r);
    ui->LCD_CELL_R_2->display(cell2_r);

    //qDebug() << capacity << voltage << temperature << current;
    ::close(right_chan);
}

void MainWindow::newF()
{
    MyClass newClass;
    newClass.open_file("/dev/i2c-11");
    newClass.open_bus(0x0b);
    int ret = newClass.read_smbus(0x0b,0x09);
    newClass.close_file();
    qDebug() << ret;
}


