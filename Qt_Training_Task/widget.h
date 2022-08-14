#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTime>
#include <QTimer>
#include "loginwindow.h"
#include <QTextDocument>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void pdf(QString filename);

    loginWindow* login;
    QTimer *countMinutes;
    QTime startTime;
    QTime stopTime;
    QString name;
    QString email;
    QString pdfpath = "working hours.pdf";
    bool working = false;
    bool pause = false;

private slots:
    void timeDisplay();
    void loginConfirmed(QStringList);

    void on_startButton_clicked();
    void on_pauseButton_clicked();
    void on_resumeButton_clicked();
    void on_stopButton_clicked();
    void on_logOutButton_clicked();


private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
