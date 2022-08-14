#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include "smtp.h"
#include <QPrinter>
#include <QPainter>
#include <QDate>
#include <QMessageBox>

#define MIN 600000
#define DEBUG 100
#define TEST 1
#define TIME DEBUG

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}

// when login is confirmed in qml this slot is triggered to set name and email
void Widget::loginConfirmed(QStringList user)
{
    name = user[0];
    email = user[1];

    ui->userLabel->setText(name);
    ui->emailLabel->setText(email);
//    delete login;
    show();
}

// displaying data in LCD displays triggered every minute by timer
void Widget::timeDisplay()
{
    int minutes = ui->minutesLCD->value();
    if(minutes<59)
    {
        ui->minutesLCD->display(minutes+1);
    }
    else
    {
        ui->minutesLCD->display(0);
        ui->hoursLCD->display(ui->hoursLCD->value()+1);
    }
}

// start working time button
void Widget::on_startButton_clicked()
{
    // works only if you weren't working before
    if(!working)
    {
        ui->pauseButton->setChecked(false);
        ui->resumeButton->setChecked(false);
        ui->stopButton->setChecked(false);

        // initializes the values
        pause = false;
        working = true;

        ui->minutesLCD->display(0);
        ui->hoursLCD->display(0);

        startTime = QTime::currentTime();
        countMinutes = new QTimer(this);

        connect(countMinutes,SIGNAL(timeout()),this,SLOT(timeDisplay()));
        countMinutes->start(TIME);
    }
    else
    {
        ui->startButton->setChecked(false);
    }
}

// stops timer to pause lcd display
void Widget::on_pauseButton_clicked()
{
    // works only if you started work
    if(working)
    {
        if(!pause)
        {
            ui->startButton->setChecked(false);
            ui->resumeButton->setChecked(false);
            ui->stopButton->setChecked(false);
            countMinutes->stop();
            pause = true;
        }
        else
        {
            ui->pauseButton->setChecked(false);
        }
    }
    else
    {
        ui->pauseButton->setChecked(false);
    }
}

// resuming work after pausing
void Widget::on_resumeButton_clicked()
{
    // works only if working and pausing
    if(working)
    {
        if(pause)
        {
            ui->pauseButton->setChecked(false);
            ui->startButton->setChecked(false);
            ui->stopButton->setChecked(false);
            countMinutes->start(TIME);
            pause = false;
        }
        else
        {
            ui->resumeButton->setChecked(false);
        }
    }
    else
    {
        ui->resumeButton->setChecked(false);
    }
}

// stops time counting
void Widget::on_stopButton_clicked()
{
    // works only if you started working before
    if(working)
    {
        ui->pauseButton->setChecked(false);
        ui->resumeButton->setChecked(false);
        ui->startButton->setChecked(false);
        countMinutes->stop();
        working = false;
        stopTime = QTime::currentTime();
    }
    else
    {
        ui->stopButton->setChecked(false);
    }
}

// stops work if working, write pdf and send email
void Widget::on_logOutButton_clicked()
{
    // stopping work
    countMinutes->stop();
    working = false;
    stopTime = QTime::currentTime();

    ui->pauseButton->setChecked(false);
    ui->resumeButton->setChecked(false);
    ui->startButton->setChecked(false);
    ui->stopButton->setChecked(false);

    // initializing email settings
    Smtp* smtp_login = new Smtp(USERNAME , PASSWORD , HOST , PORT);

    connect(smtp_login, &Smtp::status , this, [=](QString state)
    {
        if(state == "Message sent")
        {
            qDebug() << "email sent successfully";
        }
        else
        {
            qDebug() << "email sending failed";
        }
    });

    // writing pdf file
    pdf(pdfpath);

    // send the mail
    smtp_login->sendMail(USERNAME, "seif.mhmed@zohomail.com",SUBJECT ,"Working Hours", pdfpath);
    connect(smtp_login, &Smtp::status , this, [=](QString state)
    {
    if(state == "Message sent")
    {
        QMessageBox::information(
                this,
                tr("MIT Attendance"),
                tr("Email Sent Successfully.") );
     }
    });
}

// function for writing pdf
void Widget::pdf(QString filename)
{
    QPrinter printer;
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(filename);
    QPainter painter;
    if (! painter.begin(&printer)) { // failed to open file
        qWarning("failed to open file, is it writable?");
        return;
    }
    painter.drawText(10, 10, "username: "+name);
    painter.drawText(10, 20, "email: "+email);
    painter.drawText(10, 30, "date: "+QDate::currentDate().toString("dd/MM/yyyy"));
    painter.drawText(10, 40, "start time: "+startTime.toString("hh:mm"));
    int hours = ui->hoursLCD->intValue();
    int minutes = ui->minutesLCD->intValue();
    painter.drawText(10,50, "working time: "+QString::number(hours)+" hours and "+QString::number(minutes)+" minutes");
}
