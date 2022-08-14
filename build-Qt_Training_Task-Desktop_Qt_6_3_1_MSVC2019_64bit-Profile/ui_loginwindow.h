/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QQuickWidget *quickWidget;

    void setupUi(QWidget *loginWindow)
    {
        if (loginWindow->objectName().isEmpty())
            loginWindow->setObjectName(QString::fromUtf8("loginWindow"));
        loginWindow->resize(414, 736);
        loginWindow->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        horizontalLayout = new QHBoxLayout(loginWindow);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        quickWidget = new QQuickWidget(loginWindow);
        quickWidget->setObjectName(QString::fromUtf8("quickWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(quickWidget->sizePolicy().hasHeightForWidth());
        quickWidget->setSizePolicy(sizePolicy);
        quickWidget->setFocusPolicy(Qt::StrongFocus);
        quickWidget->setAutoFillBackground(false);
        quickWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
""));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
        quickWidget->setSource(QUrl(QString::fromUtf8("qrc:/loginScreen.qml")));

        horizontalLayout->addWidget(quickWidget);


        retranslateUi(loginWindow);

        QMetaObject::connectSlotsByName(loginWindow);
    } // setupUi

    void retranslateUi(QWidget *loginWindow)
    {
        loginWindow->setWindowTitle(QCoreApplication::translate("loginWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginWindow: public Ui_loginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
