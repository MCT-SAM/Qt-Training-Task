#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include <QObject>
#include <QDebug>
#include <QQuickView>
#include "database.h"
#include <QQmlEngine>

class loginWindow : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name NOTIFY nameChanged)


public:
    explicit loginWindow(QObject *parent = nullptr);
    ~loginWindow();


    typedef enum responsd
    {
        confirmLogin,
        wrongLogin,
        userEmailFound,
        passwordMiss,
        dataEmpty,
        passwordSmall,
        correctSign
    }respond;

    bool signFound = false;
    dataBase employees;
    QString name;
    QString email;

    QQuickView response;
    QString confirmSource = "qrc:///successful.qml";
    QString wrongSource = "qrc:///wrong.qml";
    QString passMissPath = "qrc:///passwordMiss.qml";
    QString passSmallPath = "qrc:///passwordSmall.qml";
    QString dataEmptyPath = "qrc:///dataEmpty.qml";
    QString userEmailFoundPath = "qrc:///userEmailFound.qml";
    QString confirmSignPath = "qrc:///successfulSign.qml";

    void displayResponse(QString);
    Q_INVOKABLE void loginButton(QString name, QString pass);
    Q_INVOKABLE void signUpButton(QString name, QString email,QString pass);
    Q_INVOKABLE void qmlResponse(loginWindow::respond);

    bool isOpen = true;

signals:
    void nameChanged();
    void isOpenChanged();
    void signFoundChanged();
    void loginConfirm(QStringList user);

private:

};

#endif // LOGINWINDOW_H
