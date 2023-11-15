/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLineEdit *ipLineEdit;
    QLabel *label_2;
    QLineEdit *portLineEdit;
    QPushButton *singleButton;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *sendButton;
    QPushButton *clearRecButton;
    QPushButton *clearSendButton;
    QPushButton *cancelButton;
    QTextEdit *sendTextEdit;
    QListWidget *recList;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 90, 81, 16));
        ipLineEdit = new QLineEdit(Widget);
        ipLineEdit->setObjectName(QString::fromUtf8("ipLineEdit"));
        ipLineEdit->setGeometry(QRect(40, 110, 131, 21));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 160, 91, 16));
        portLineEdit = new QLineEdit(Widget);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
        portLineEdit->setGeometry(QRect(40, 190, 131, 21));
        singleButton = new QPushButton(Widget);
        singleButton->setObjectName(QString::fromUtf8("singleButton"));
        singleButton->setGeometry(QRect(60, 230, 89, 24));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 40, 72, 15));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 470, 72, 15));
        sendButton = new QPushButton(Widget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(710, 490, 81, 61));
        clearRecButton = new QPushButton(Widget);
        clearRecButton->setObjectName(QString::fromUtf8("clearRecButton"));
        clearRecButton->setGeometry(QRect(720, 30, 71, 31));
        clearSendButton = new QPushButton(Widget);
        clearSendButton->setObjectName(QString::fromUtf8("clearSendButton"));
        clearSendButton->setGeometry(QRect(710, 460, 81, 31));
        cancelButton = new QPushButton(Widget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(60, 260, 89, 24));
        sendTextEdit = new QTextEdit(Widget);
        sendTextEdit->setObjectName(QString::fromUtf8("sendTextEdit"));
        sendTextEdit->setGeometry(QRect(230, 490, 481, 61));
        recList = new QListWidget(Widget);
        recList->setObjectName(QString::fromUtf8("recList"));
        recList->setGeometry(QRect(230, 60, 561, 391));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\345\217\267", nullptr));
        singleButton->setText(QCoreApplication::translate("Widget", "\345\215\225\346\222\255", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\346\227\245\345\277\227", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\345\217\221\351\200\201", nullptr));
        sendButton->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        clearRecButton->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244", nullptr));
        clearSendButton->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244", nullptr));
        cancelButton->setText(QCoreApplication::translate("Widget", "\346\216\245\346\224\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
