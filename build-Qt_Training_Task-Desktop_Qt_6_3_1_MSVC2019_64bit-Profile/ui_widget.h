/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *startButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pauseButton;
    QPushButton *resumeButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *logOutButton;
    QPushButton *stopButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *employeeGroupBox;
    QVBoxLayout *verticalLayout;
    QGroupBox *usernameGroupBox;
    QVBoxLayout *verticalLayout_7;
    QLabel *userLabel;
    QGroupBox *emailGroupBox;
    QVBoxLayout *verticalLayout_6;
    QLabel *emailLabel;
    QTabWidget *tasksGroupBox;
    QWidget *Tasks;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *tasksInput;
    QGroupBox *hoursGroupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLCDNumber *hoursLCD;
    QLabel *hoursLabel;
    QVBoxLayout *verticalLayout_3;
    QLCDNumber *minutesLCD;
    QLabel *minutesLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(736, 305);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_5 = new QGroupBox(Widget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy1);
        groupBox_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(2, 2, 2, 2);
        pushButton = new QPushButton(groupBox_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setSizeIncrement(QSize(1, 0));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/buildings.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setFlat(true);

        horizontalLayout_3->addWidget(pushButton);

        startButton = new QPushButton(groupBox_5);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        sizePolicy2.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy2);
        startButton->setSizeIncrement(QSize(1, 0));
        startButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        startButton->setIcon(icon2);
        startButton->setCheckable(true);
        startButton->setFlat(true);

        horizontalLayout_3->addWidget(startButton);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pauseButton = new QPushButton(groupBox_5);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        sizePolicy2.setHeightForWidth(pauseButton->sizePolicy().hasHeightForWidth());
        pauseButton->setSizePolicy(sizePolicy2);
        pauseButton->setSizeIncrement(QSize(1, 0));
        pauseButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Images/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pauseButton->setIcon(icon3);
        pauseButton->setCheckable(true);
        pauseButton->setFlat(true);

        horizontalLayout_3->addWidget(pauseButton);

        resumeButton = new QPushButton(groupBox_5);
        resumeButton->setObjectName(QString::fromUtf8("resumeButton"));
        sizePolicy2.setHeightForWidth(resumeButton->sizePolicy().hasHeightForWidth());
        resumeButton->setSizePolicy(sizePolicy2);
        resumeButton->setSizeIncrement(QSize(1, 0));
        resumeButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Images/pause-play.png"), QSize(), QIcon::Normal, QIcon::Off);
        resumeButton->setIcon(icon4);
        resumeButton->setCheckable(true);
        resumeButton->setFlat(true);

        horizontalLayout_3->addWidget(resumeButton);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        logOutButton = new QPushButton(groupBox_5);
        logOutButton->setObjectName(QString::fromUtf8("logOutButton"));
        sizePolicy2.setHeightForWidth(logOutButton->sizePolicy().hasHeightForWidth());
        logOutButton->setSizePolicy(sizePolicy2);
        logOutButton->setSizeIncrement(QSize(1, 0));
        logOutButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Images/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        logOutButton->setIcon(icon5);
        logOutButton->setCheckable(false);
        logOutButton->setFlat(true);

        horizontalLayout_3->addWidget(logOutButton);

        stopButton = new QPushButton(groupBox_5);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        sizePolicy2.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy2);
        stopButton->setSizeIncrement(QSize(1, 0));
        stopButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon6);
        stopButton->setCheckable(true);
        stopButton->setFlat(true);

        horizontalLayout_3->addWidget(stopButton);

        horizontalSpacer = new QSpacerItem(400, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(groupBox_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        employeeGroupBox = new QGroupBox(Widget);
        employeeGroupBox->setObjectName(QString::fromUtf8("employeeGroupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(employeeGroupBox->sizePolicy().hasHeightForWidth());
        employeeGroupBox->setSizePolicy(sizePolicy3);
        employeeGroupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(employeeGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        usernameGroupBox = new QGroupBox(employeeGroupBox);
        usernameGroupBox->setObjectName(QString::fromUtf8("usernameGroupBox"));
        verticalLayout_7 = new QVBoxLayout(usernameGroupBox);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        userLabel = new QLabel(usernameGroupBox);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        userLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(userLabel);


        verticalLayout->addWidget(usernameGroupBox);

        emailGroupBox = new QGroupBox(employeeGroupBox);
        emailGroupBox->setObjectName(QString::fromUtf8("emailGroupBox"));
        verticalLayout_6 = new QVBoxLayout(emailGroupBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        emailLabel = new QLabel(emailGroupBox);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));
        emailLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(emailLabel);


        verticalLayout->addWidget(emailGroupBox);


        horizontalLayout_2->addWidget(employeeGroupBox);

        tasksGroupBox = new QTabWidget(Widget);
        tasksGroupBox->setObjectName(QString::fromUtf8("tasksGroupBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tasksGroupBox->sizePolicy().hasHeightForWidth());
        tasksGroupBox->setSizePolicy(sizePolicy4);
        tasksGroupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(159, 159, 159);\n"
"border-color: rgb(159, 159, 159);"));
        Tasks = new QWidget();
        Tasks->setObjectName(QString::fromUtf8("Tasks"));
        verticalLayout_5 = new QVBoxLayout(Tasks);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        tasksInput = new QTextEdit(Tasks);
        tasksInput->setObjectName(QString::fromUtf8("tasksInput"));

        verticalLayout_5->addWidget(tasksInput);

        tasksGroupBox->addTab(Tasks, QString());

        horizontalLayout_2->addWidget(tasksGroupBox);

        hoursGroupBox = new QGroupBox(Widget);
        hoursGroupBox->setObjectName(QString::fromUtf8("hoursGroupBox"));
        sizePolicy3.setHeightForWidth(hoursGroupBox->sizePolicy().hasHeightForWidth());
        hoursGroupBox->setSizePolicy(sizePolicy3);
        hoursGroupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout = new QHBoxLayout(hoursGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        hoursLCD = new QLCDNumber(hoursGroupBox);
        hoursLCD->setObjectName(QString::fromUtf8("hoursLCD"));
        hoursLCD->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 127);\n"
"background-color: rgb(195, 195, 195);"));
        hoursLCD->setFrameShape(QFrame::Box);
        hoursLCD->setFrameShadow(QFrame::Plain);
        hoursLCD->setSegmentStyle(QLCDNumber::Filled);

        verticalLayout_2->addWidget(hoursLCD);

        hoursLabel = new QLabel(hoursGroupBox);
        hoursLabel->setObjectName(QString::fromUtf8("hoursLabel"));
        sizePolicy1.setHeightForWidth(hoursLabel->sizePolicy().hasHeightForWidth());
        hoursLabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(12);
        hoursLabel->setFont(font);
        hoursLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 127);\n"
"border-color:  rgb(0, 85, 127);\n"
"border-radius: 5;\n"
"border: 10\n"
""));

        verticalLayout_2->addWidget(hoursLabel);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        minutesLCD = new QLCDNumber(hoursGroupBox);
        minutesLCD->setObjectName(QString::fromUtf8("minutesLCD"));
        minutesLCD->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 127);\n"
"background-color: rgb(195, 195, 195);"));
        minutesLCD->setFrameShape(QFrame::Box);
        minutesLCD->setFrameShadow(QFrame::Plain);
        minutesLCD->setSegmentStyle(QLCDNumber::Filled);

        verticalLayout_3->addWidget(minutesLCD);

        minutesLabel = new QLabel(hoursGroupBox);
        minutesLabel->setObjectName(QString::fromUtf8("minutesLabel"));
        sizePolicy1.setHeightForWidth(minutesLabel->sizePolicy().hasHeightForWidth());
        minutesLabel->setSizePolicy(sizePolicy1);
        minutesLabel->setFont(font);
        minutesLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 127);\n"
"border-color:  rgb(0, 85, 127);\n"
"border-radius: 5;\n"
"border: 10\n"
""));

        verticalLayout_3->addWidget(minutesLabel);


        horizontalLayout->addLayout(verticalLayout_3);


        horizontalLayout_2->addWidget(hoursGroupBox);


        verticalLayout_4->addLayout(horizontalLayout_2);


        retranslateUi(Widget);

        tasksGroupBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "MIT Attendance", nullptr));
        groupBox_5->setTitle(QString());
        pushButton->setText(QString());
        startButton->setText(QString());
        pauseButton->setText(QString());
        resumeButton->setText(QString());
        logOutButton->setText(QString());
        stopButton->setText(QString());
        employeeGroupBox->setTitle(QCoreApplication::translate("Widget", "Employee Information", nullptr));
        usernameGroupBox->setTitle(QCoreApplication::translate("Widget", "Username", nullptr));
        userLabel->setText(QCoreApplication::translate("Widget", "user", nullptr));
        emailGroupBox->setTitle(QCoreApplication::translate("Widget", "Email", nullptr));
        emailLabel->setText(QCoreApplication::translate("Widget", "email", nullptr));
        tasksGroupBox->setTabText(tasksGroupBox->indexOf(Tasks), QCoreApplication::translate("Widget", "Today's Tasks", nullptr));
        hoursGroupBox->setTitle(QCoreApplication::translate("Widget", "Today's working hours", nullptr));
        hoursLabel->setText(QCoreApplication::translate("Widget", "Hours", nullptr));
        minutesLabel->setText(QCoreApplication::translate("Widget", "Minutes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
