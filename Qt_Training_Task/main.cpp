#include "widget.h"
#include "loginwindow.h"
#include <QApplication>
#include <QQuickWindow>
#include <QFile>
#include <QQuickView>
#include <QQmlContext>
#include <QQmlEngine>
#include <QObject>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // object for the qml
    loginWindow login;

    Widget w;
    QQuickView view;
    QQmlContext *context = view.engine()->rootContext();

    context->setContextProperty("loginWindow", &login);
    view.setSource(QUrl("qrc:///loginScreen.qml"));
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setWidth(414);
    view.setHeight(736);
    view.setMaximumHeight(736);
    view.setMinimumHeight(736);
    view.setMaximumWidth(414);
    view.setMinimumWidth(414);
    view.setTitle("MIT Attendance");
    view.setIcon(QIcon(":/download.png"));
    view.show();


    QAction::connect(&login,SIGNAL(loginConfirm(QStringList)),&w,SLOT(loginConfirmed(QStringList)));
    QAction::connect(&login,SIGNAL(isOpenChanged()),&view,SLOT(close()));



    return a.exec();
}
