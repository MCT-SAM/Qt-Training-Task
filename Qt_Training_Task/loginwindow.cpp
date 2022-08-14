#include "loginwindow.h"
#include <QDebug>
#include <QObject>
#include <QThread>

loginWindow::loginWindow(QObject *parent):
    QObject(parent)
{
    employees.readCSV();

}

loginWindow::~loginWindow()
{

}

void loginWindow::displayResponse(QString source)
{
    response.setSource(QUrl(source));
    response.setWidth(500);
    response.setHeight(250);
    response.setResizeMode(QQuickView::SizeRootObjectToView);
    response.show();
    response.raise();
    qDebug() << "showed";
}



void loginWindow::loginButton(QString name, QString pass)
{
    qDebug() << name << pass;
    int index = employees.
            db.indexOf(name);
    qDebug() << index;
    if(index != -1)
    {
        if(employees.db.at(index+2) == pass){
            qmlResponse(confirmLogin);
            this->name = name;
            email = employees.db.at(index+1);
//            QThread::sleep(3);
            response.close();
            QStringList user;
            user << name;
            user << email;
            emit loginConfirm(user);
            emit isOpenChanged();
            isOpen = false;
        }
        else
        {
            qmlResponse(wrongLogin);
        }
    }
    else
    {
        qmlResponse(wrongLogin);
    }
}

void loginWindow::signUpButton(QString name, QString email,QString pass)
{
    if(employees.addDB(name, email, pass))
    {
        qmlResponse(correctSign);
    }
    else
    {
        qmlResponse(userEmailFound);
    }
}

void loginWindow::qmlResponse(loginWindow::respond res)
{
    switch(res)
    {
        case confirmLogin:
            qDebug() << "confirmlogin";
            displayResponse(confirmSource);
            break;
        case wrongLogin:
            qDebug() << "wronglogin";
            displayResponse(wrongSource);
            break;
        case passwordMiss:
            qDebug() << "passwords doesnot match";
            displayResponse(passMissPath);
            break;
        case passwordSmall:
            qDebug() << "small password";
            displayResponse(passSmallPath);
            break;
        case userEmailFound:
            qDebug() << "found user";
            displayResponse(userEmailFoundPath);
            break;
        case dataEmpty:
            qDebug() << "no data";
            displayResponse(dataEmptyPath);
            break;
        case correctSign:
            qDebug() << "correct sign";
            displayResponse(confirmSignPath);
            break;
    }
}
