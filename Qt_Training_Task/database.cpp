#include <QFile>
#include <QDebug>
#include "database.h"

dataBase::dataBase(QObject *parent)
    : QObject{parent}
{

}

// read csv file
void dataBase::readCSV()
{
    QFile file(dbpath);
    // opening file and checking for errors while opening
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << file.errorString();
        file.close();
        return;
    }

    // parsing through the file
    while (!file.atEnd())
    {
        QByteArray line = file.readLine();
        line = line.sliced(0,line.count()-2);
        db.append(line.split(',').first());
        db.append(line.split(',')[1]);
        db.append(line.split(',')[2]);
        qDebug() << line;
    }

    // closing file after reading
    file.close();
}


// writing on csv file
void dataBase::writeCSV(QString name, QString email, QString pass)
{
    QFile file(dbpath);
    // opening file in write mode and check for errors
    if (!file.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        qDebug() << file.errorString();
        return;
    }

    // write data
    QByteArray data = (name+","+email+","+pass+"\r\n").toUtf8();
    file.write(data);

    // closing file after writing
    file.close();
    readCSV();
}

// adding data to the database from signup
bool dataBase::addDB(QString name, QString email, QString pass)
{

    if((db.indexOf(name)== -1) && (db.indexOf(email) == -1))
    {
        // no names duplication in database
        qDebug() << "no names or email duplication in database";
        writeCSV(name,email,pass);
        return true;

    }
    else
    {

        // name is found in database
        qDebug() << "names or email duplication in database";
        return false;
    }

}
