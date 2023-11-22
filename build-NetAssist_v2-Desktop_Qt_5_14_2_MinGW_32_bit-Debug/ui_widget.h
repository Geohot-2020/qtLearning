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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveRecvButton;
    QPushButton *openRecvButton;
    QPushButton *clearRecvButton;
    QTextEdit *recvTextEdit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sendClearButton;
    QPushButton *sendButton;
    QTextEdit *sendTextEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *ipLineEdit;
    QLabel *label_2;
    QLineEdit *portLineEdit;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *singleRB;
    QRadioButton *mulRB;
    QRadioButton *boardRB;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QCheckBox *recCheckBox;
    QLineEdit *recvPortLineEdit;
    QLabel *label_6;
    QLineEdit *recvMulIpLineEdit;
    QPushButton *recvJoinMulBt;
    QPushButton *recvQuitMulBt;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(811, 643);
        Widget->setAutoFillBackground(false);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 40, 481, 391));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        saveRecvButton = new QPushButton(layoutWidget);
        saveRecvButton->setObjectName(QString::fromUtf8("saveRecvButton"));

        horizontalLayout_2->addWidget(saveRecvButton);

        openRecvButton = new QPushButton(layoutWidget);
        openRecvButton->setObjectName(QString::fromUtf8("openRecvButton"));

        horizontalLayout_2->addWidget(openRecvButton);

        clearRecvButton = new QPushButton(layoutWidget);
        clearRecvButton->setObjectName(QString::fromUtf8("clearRecvButton"));

        horizontalLayout_2->addWidget(clearRecvButton);


        verticalLayout_4->addLayout(horizontalLayout_2);

        recvTextEdit = new QTextEdit(layoutWidget);
        recvTextEdit->setObjectName(QString::fromUtf8("recvTextEdit"));

        verticalLayout_4->addWidget(recvTextEdit);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(260, 450, 481, 141));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        sendClearButton = new QPushButton(layoutWidget1);
        sendClearButton->setObjectName(QString::fromUtf8("sendClearButton"));

        horizontalLayout_3->addWidget(sendClearButton);

        sendButton = new QPushButton(layoutWidget1);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));

        horizontalLayout_3->addWidget(sendButton);


        verticalLayout_5->addLayout(horizontalLayout_3);

        sendTextEdit = new QTextEdit(layoutWidget1);
        sendTextEdit->setObjectName(QString::fromUtf8("sendTextEdit"));

        verticalLayout_5->addWidget(sendTextEdit);

        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 40, 148, 551));
        verticalLayout_7 = new QVBoxLayout(widget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        ipLineEdit = new QLineEdit(widget);
        ipLineEdit->setObjectName(QString::fromUtf8("ipLineEdit"));

        verticalLayout_2->addWidget(ipLineEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        portLineEdit = new QLineEdit(widget);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));

        verticalLayout_2->addWidget(portLineEdit);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        singleRB = new QRadioButton(widget);
        singleRB->setObjectName(QString::fromUtf8("singleRB"));

        verticalLayout->addWidget(singleRB);

        mulRB = new QRadioButton(widget);
        mulRB->setObjectName(QString::fromUtf8("mulRB"));

        verticalLayout->addWidget(mulRB);

        boardRB = new QRadioButton(widget);
        boardRB->setObjectName(QString::fromUtf8("boardRB"));

        verticalLayout->addWidget(boardRB);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        recCheckBox = new QCheckBox(widget);
        recCheckBox->setObjectName(QString::fromUtf8("recCheckBox"));

        horizontalLayout_4->addWidget(recCheckBox);


        verticalLayout_6->addLayout(horizontalLayout_4);

        recvPortLineEdit = new QLineEdit(widget);
        recvPortLineEdit->setObjectName(QString::fromUtf8("recvPortLineEdit"));

        verticalLayout_6->addWidget(recvPortLineEdit);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);

        recvMulIpLineEdit = new QLineEdit(widget);
        recvMulIpLineEdit->setObjectName(QString::fromUtf8("recvMulIpLineEdit"));

        verticalLayout_6->addWidget(recvMulIpLineEdit);

        recvJoinMulBt = new QPushButton(widget);
        recvJoinMulBt->setObjectName(QString::fromUtf8("recvJoinMulBt"));

        verticalLayout_6->addWidget(recvJoinMulBt);

        recvQuitMulBt = new QPushButton(widget);
        recvQuitMulBt->setObjectName(QString::fromUtf8("recvQuitMulBt"));

        verticalLayout_6->addWidget(recvQuitMulBt);


        verticalLayout_7->addLayout(verticalLayout_6);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\346\225\260\346\215\256\346\227\245\345\277\227</p></body></html>", nullptr));
        saveRecvButton->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230", nullptr));
        openRecvButton->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200", nullptr));
        clearRecvButton->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\346\225\260\346\215\256\345\217\221\351\200\201</p></body></html>", nullptr));
        sendClearButton->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        sendButton->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\234\260\345\235\200</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\347\253\257\345\217\243\345\217\267</span></p></body></html>", nullptr));
        singleRB->setText(QCoreApplication::translate("Widget", "\345\215\225\346\222\255", nullptr));
        mulRB->setText(QCoreApplication::translate("Widget", "\347\273\204\346\222\255", nullptr));
        boardRB->setText(QCoreApplication::translate("Widget", "\345\271\277\346\222\255", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\347\253\257\345\217\243\345\217\267</p></body></html>", nullptr));
        recCheckBox->setText(QCoreApplication::translate("Widget", "\346\216\245\346\224\266", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\347\273\204\346\222\255\345\234\260\345\235\200</p></body></html>", nullptr));
        recvJoinMulBt->setText(QCoreApplication::translate("Widget", "\345\212\240\345\205\245", nullptr));
        recvQuitMulBt->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
