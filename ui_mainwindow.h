/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Capacity;
    QLCDNumber *LCD_CAPACITY_L;
    QLabel *Voltage;
    QLCDNumber *LCD_VOLTAGE_L;
    QLabel *Current;
    QLCDNumber *LCD_CURRENT_L;
    QLabel *Temperature;
    QLCDNumber *LCD_TEMPERATURE_L;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *Capacity_2;
    QLCDNumber *LCD_CAPACITY_R;
    QLabel *Voltage_2;
    QLCDNumber *LCD_VOLTAGE_R;
    QLabel *Current_2;
    QLCDNumber *LCD_CURRENT_R;
    QLabel *Temperature_2;
    QLCDNumber *LCD_TEMPERATURE_R;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *CELL_L_1;
    QLCDNumber *LCD_CELL_L_1;
    QLabel *CELL_L_2;
    QLCDNumber *LCD_CELL_L_2;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *CELL_R_1;
    QLCDNumber *LCD_CELL_R_1;
    QLabel *CELL_R_2;
    QLCDNumber *LCD_CELL_R_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(702, 427);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 163, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Capacity = new QLabel(verticalLayoutWidget);
        Capacity->setObjectName(QString::fromUtf8("Capacity"));
        Capacity->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Capacity->sizePolicy().hasHeightForWidth());
        Capacity->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        Capacity->setFont(font);
        Capacity->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Capacity->setFrameShape(QFrame::WinPanel);
        Capacity->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Capacity);

        LCD_CAPACITY_L = new QLCDNumber(verticalLayoutWidget);
        LCD_CAPACITY_L->setObjectName(QString::fromUtf8("LCD_CAPACITY_L"));
        LCD_CAPACITY_L->setDigitCount(8);

        verticalLayout->addWidget(LCD_CAPACITY_L);

        Voltage = new QLabel(verticalLayoutWidget);
        Voltage->setObjectName(QString::fromUtf8("Voltage"));
        Voltage->setFont(font);
        Voltage->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Voltage->setFrameShape(QFrame::WinPanel);
        Voltage->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Voltage);

        LCD_VOLTAGE_L = new QLCDNumber(verticalLayoutWidget);
        LCD_VOLTAGE_L->setObjectName(QString::fromUtf8("LCD_VOLTAGE_L"));
        LCD_VOLTAGE_L->setDigitCount(8);

        verticalLayout->addWidget(LCD_VOLTAGE_L);

        Current = new QLabel(verticalLayoutWidget);
        Current->setObjectName(QString::fromUtf8("Current"));
        Current->setFont(font);
        Current->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Current->setFrameShape(QFrame::WinPanel);
        Current->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Current);

        LCD_CURRENT_L = new QLCDNumber(verticalLayoutWidget);
        LCD_CURRENT_L->setObjectName(QString::fromUtf8("LCD_CURRENT_L"));
        LCD_CURRENT_L->setDigitCount(8);

        verticalLayout->addWidget(LCD_CURRENT_L);

        Temperature = new QLabel(verticalLayoutWidget);
        Temperature->setObjectName(QString::fromUtf8("Temperature"));
        Temperature->setFont(font);
        Temperature->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Temperature->setFrameShape(QFrame::WinPanel);
        Temperature->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Temperature);

        LCD_TEMPERATURE_L = new QLCDNumber(verticalLayoutWidget);
        LCD_TEMPERATURE_L->setObjectName(QString::fromUtf8("LCD_TEMPERATURE_L"));
        LCD_TEMPERATURE_L->setDigitCount(8);

        verticalLayout->addWidget(LCD_TEMPERATURE_L);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(360, 10, 163, 351));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Capacity_2 = new QLabel(verticalLayoutWidget_2);
        Capacity_2->setObjectName(QString::fromUtf8("Capacity_2"));
        Capacity_2->setEnabled(true);
        sizePolicy.setHeightForWidth(Capacity_2->sizePolicy().hasHeightForWidth());
        Capacity_2->setSizePolicy(sizePolicy);
        Capacity_2->setFont(font);
        Capacity_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Capacity_2->setFrameShape(QFrame::WinPanel);
        Capacity_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Capacity_2);

        LCD_CAPACITY_R = new QLCDNumber(verticalLayoutWidget_2);
        LCD_CAPACITY_R->setObjectName(QString::fromUtf8("LCD_CAPACITY_R"));
        LCD_CAPACITY_R->setDigitCount(8);

        verticalLayout_2->addWidget(LCD_CAPACITY_R);

        Voltage_2 = new QLabel(verticalLayoutWidget_2);
        Voltage_2->setObjectName(QString::fromUtf8("Voltage_2"));
        Voltage_2->setFont(font);
        Voltage_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Voltage_2->setFrameShape(QFrame::WinPanel);
        Voltage_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Voltage_2);

        LCD_VOLTAGE_R = new QLCDNumber(verticalLayoutWidget_2);
        LCD_VOLTAGE_R->setObjectName(QString::fromUtf8("LCD_VOLTAGE_R"));
        LCD_VOLTAGE_R->setDigitCount(8);

        verticalLayout_2->addWidget(LCD_VOLTAGE_R);

        Current_2 = new QLabel(verticalLayoutWidget_2);
        Current_2->setObjectName(QString::fromUtf8("Current_2"));
        Current_2->setFont(font);
        Current_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Current_2->setFrameShape(QFrame::WinPanel);
        Current_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Current_2);

        LCD_CURRENT_R = new QLCDNumber(verticalLayoutWidget_2);
        LCD_CURRENT_R->setObjectName(QString::fromUtf8("LCD_CURRENT_R"));
        LCD_CURRENT_R->setDigitCount(8);

        verticalLayout_2->addWidget(LCD_CURRENT_R);

        Temperature_2 = new QLabel(verticalLayoutWidget_2);
        Temperature_2->setObjectName(QString::fromUtf8("Temperature_2"));
        Temperature_2->setFont(font);
        Temperature_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Temperature_2->setFrameShape(QFrame::WinPanel);
        Temperature_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Temperature_2);

        LCD_TEMPERATURE_R = new QLCDNumber(verticalLayoutWidget_2);
        LCD_TEMPERATURE_R->setObjectName(QString::fromUtf8("LCD_TEMPERATURE_R"));
        LCD_TEMPERATURE_R->setDigitCount(8);

        verticalLayout_2->addWidget(LCD_TEMPERATURE_R);

        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(180, 10, 161, 171));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        CELL_L_1 = new QLabel(verticalLayoutWidget_3);
        CELL_L_1->setObjectName(QString::fromUtf8("CELL_L_1"));
        CELL_L_1->setEnabled(true);
        sizePolicy.setHeightForWidth(CELL_L_1->sizePolicy().hasHeightForWidth());
        CELL_L_1->setSizePolicy(sizePolicy);
        CELL_L_1->setFont(font);
        CELL_L_1->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        CELL_L_1->setFrameShape(QFrame::WinPanel);
        CELL_L_1->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(CELL_L_1);

        LCD_CELL_L_1 = new QLCDNumber(verticalLayoutWidget_3);
        LCD_CELL_L_1->setObjectName(QString::fromUtf8("LCD_CELL_L_1"));
        LCD_CELL_L_1->setDigitCount(8);

        verticalLayout_3->addWidget(LCD_CELL_L_1);

        CELL_L_2 = new QLabel(verticalLayoutWidget_3);
        CELL_L_2->setObjectName(QString::fromUtf8("CELL_L_2"));
        CELL_L_2->setFont(font);
        CELL_L_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        CELL_L_2->setFrameShape(QFrame::WinPanel);
        CELL_L_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(CELL_L_2);

        LCD_CELL_L_2 = new QLCDNumber(verticalLayoutWidget_3);
        LCD_CELL_L_2->setObjectName(QString::fromUtf8("LCD_CELL_L_2"));
        LCD_CELL_L_2->setDigitCount(8);

        verticalLayout_3->addWidget(LCD_CELL_L_2);

        verticalLayoutWidget_4 = new QWidget(centralWidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(530, 10, 161, 171));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        CELL_R_1 = new QLabel(verticalLayoutWidget_4);
        CELL_R_1->setObjectName(QString::fromUtf8("CELL_R_1"));
        CELL_R_1->setEnabled(true);
        sizePolicy.setHeightForWidth(CELL_R_1->sizePolicy().hasHeightForWidth());
        CELL_R_1->setSizePolicy(sizePolicy);
        CELL_R_1->setFont(font);
        CELL_R_1->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        CELL_R_1->setFrameShape(QFrame::WinPanel);
        CELL_R_1->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(CELL_R_1);

        LCD_CELL_R_1 = new QLCDNumber(verticalLayoutWidget_4);
        LCD_CELL_R_1->setObjectName(QString::fromUtf8("LCD_CELL_R_1"));
        LCD_CELL_R_1->setDigitCount(8);

        verticalLayout_4->addWidget(LCD_CELL_R_1);

        CELL_R_2 = new QLabel(verticalLayoutWidget_4);
        CELL_R_2->setObjectName(QString::fromUtf8("CELL_R_2"));
        CELL_R_2->setFont(font);
        CELL_R_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        CELL_R_2->setFrameShape(QFrame::WinPanel);
        CELL_R_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(CELL_R_2);

        LCD_CELL_R_2 = new QLCDNumber(verticalLayoutWidget_4);
        LCD_CELL_R_2->setObjectName(QString::fromUtf8("LCD_CELL_R_2"));
        LCD_CELL_R_2->setDigitCount(8);

        verticalLayout_4->addWidget(LCD_CELL_R_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setEnabled(false);
        menuBar->setGeometry(QRect(0, 0, 702, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setEnabled(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setEnabled(false);
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        Capacity->setText(QApplication::translate("MainWindow", "\320\225\320\274\320\272\320\276\321\201\321\202\321\214 (%)", 0, QApplication::UnicodeUTF8));
        Voltage->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\202\321\200\320\265\320\261\320\273\320\265\320\275\320\270\320\265 (A)", 0, QApplication::UnicodeUTF8));
        Current->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265 (V)", 0, QApplication::UnicodeUTF8));
        Temperature->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", 0, QApplication::UnicodeUTF8));
        Capacity_2->setText(QApplication::translate("MainWindow", "\320\225\320\274\320\272\320\276\321\201\321\202\321\214 (%)", 0, QApplication::UnicodeUTF8));
        Voltage_2->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\202\321\200\320\265\320\261\320\273\320\265\320\275\320\270\320\265 (A)", 0, QApplication::UnicodeUTF8));
        Current_2->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265 (V)", 0, QApplication::UnicodeUTF8));
        Temperature_2->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", 0, QApplication::UnicodeUTF8));
        CELL_L_1->setText(QApplication::translate("MainWindow", "\320\257\321\207\320\265\320\271\320\272\320\260 1 (V)", 0, QApplication::UnicodeUTF8));
        CELL_L_2->setText(QApplication::translate("MainWindow", "\320\257\321\207\320\265\320\271\320\272\320\260 2 (V)", 0, QApplication::UnicodeUTF8));
        CELL_R_1->setText(QApplication::translate("MainWindow", "\320\257\321\207\320\265\320\271\320\272\320\260 1 (V)", 0, QApplication::UnicodeUTF8));
        CELL_R_2->setText(QApplication::translate("MainWindow", "\320\257\321\207\320\265\320\271\320\272\320\260 2 (V)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
