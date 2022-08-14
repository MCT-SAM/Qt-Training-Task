#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <QFile>

using namespace std;



class dataBase : public QObject
{
    Q_OBJECT
public:
    explicit dataBase(QObject *parent = nullptr);

    QString dbpath = "dataBase.csv";


    QStringList db;

    void readCSV();
    void writeCSV(QString name, QString email, QString pass);
    bool addDB(QString,QString,QString);
    void closeFile();
signals:

};

#endif // DATABASE_H
