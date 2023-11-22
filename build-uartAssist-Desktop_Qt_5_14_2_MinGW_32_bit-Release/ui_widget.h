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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
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
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *portComboBox;
    QLabel *label_3;
    QComboBox *baudRateComboBox;
    QLabel *label_4;
    QComboBox *parityComboBox;
    QLabel *label_5;
    QComboBox *dataBitComboBox;
    QLabel *label_6;
    QComboBox *stopComboBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *openPortButton;
    QPushButton *closePortButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *recvASCIIRB;
    QRadioButton *recvHEXRB;
    QPushButton *saveFileButton;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *sendASCIIRB;
    QRadioButton *sendHEXRB;
    QPushButton *openFileButton;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *circulateSendCB;
    QLineEdit *timeLineEdit;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_7;
    QTextEdit *recvTextEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendClearButton;
    QPushButton *recvClearButton;
    QHBoxLayout *horizontalLayout_7;
    QTextEdit *sendTextEdit;
    QPushButton *sendButton;
    QHBoxLayout *horizontalLayout_8;
    QLabel *tipsLabel;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QLabel *r_sCountLabel;
    QSpacerItem *horizontalSpacer_5;
    QLabel *recvCountLabel;
    QSpacerItem *horizontalSpacer_6;
    QLabel *sendCountLabel;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *clearCountButton;
    QButtonGroup *recvButtonGroup;
    QButtonGroup *sendButtonGroup;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(830, 792);
        QIcon icon;
        icon.addFile(QString::fromUtf8("assert/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        Widget->setAutoFillBackground(false);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 20, 771, 764));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setUnderline(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        portComboBox = new QComboBox(widget);
        portComboBox->setObjectName(QString::fromUtf8("portComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, portComboBox);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        baudRateComboBox = new QComboBox(widget);
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->setObjectName(QString::fromUtf8("baudRateComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, baudRateComboBox);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        parityComboBox = new QComboBox(widget);
        parityComboBox->addItem(QString());
        parityComboBox->addItem(QString());
        parityComboBox->addItem(QString());
        parityComboBox->setObjectName(QString::fromUtf8("parityComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, parityComboBox);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        dataBitComboBox = new QComboBox(widget);
        dataBitComboBox->addItem(QString());
        dataBitComboBox->addItem(QString());
        dataBitComboBox->addItem(QString());
        dataBitComboBox->addItem(QString());
        dataBitComboBox->setObjectName(QString::fromUtf8("dataBitComboBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, dataBitComboBox);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        stopComboBox = new QComboBox(widget);
        stopComboBox->addItem(QString());
        stopComboBox->addItem(QString());
        stopComboBox->addItem(QString());
        stopComboBox->setObjectName(QString::fromUtf8("stopComboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, stopComboBox);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        openPortButton = new QPushButton(widget);
        openPortButton->setObjectName(QString::fromUtf8("openPortButton"));

        horizontalLayout_4->addWidget(openPortButton);

        closePortButton = new QPushButton(widget);
        closePortButton->setObjectName(QString::fromUtf8("closePortButton"));

        horizontalLayout_4->addWidget(closePortButton);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        verticalLayout->addWidget(label_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        recvASCIIRB = new QRadioButton(widget);
        recvButtonGroup = new QButtonGroup(Widget);
        recvButtonGroup->setObjectName(QString::fromUtf8("recvButtonGroup"));
        recvButtonGroup->addButton(recvASCIIRB);
        recvASCIIRB->setObjectName(QString::fromUtf8("recvASCIIRB"));

        horizontalLayout_2->addWidget(recvASCIIRB);

        recvHEXRB = new QRadioButton(widget);
        recvButtonGroup->addButton(recvHEXRB);
        recvHEXRB->setObjectName(QString::fromUtf8("recvHEXRB"));

        horizontalLayout_2->addWidget(recvHEXRB);


        verticalLayout->addLayout(horizontalLayout_2);

        saveFileButton = new QPushButton(widget);
        saveFileButton->setObjectName(QString::fromUtf8("saveFileButton"));

        verticalLayout->addWidget(saveFileButton);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        verticalLayout->addWidget(label_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        sendASCIIRB = new QRadioButton(widget);
        sendButtonGroup = new QButtonGroup(Widget);
        sendButtonGroup->setObjectName(QString::fromUtf8("sendButtonGroup"));
        sendButtonGroup->addButton(sendASCIIRB);
        sendASCIIRB->setObjectName(QString::fromUtf8("sendASCIIRB"));

        horizontalLayout_3->addWidget(sendASCIIRB);

        sendHEXRB = new QRadioButton(widget);
        sendButtonGroup->addButton(sendHEXRB);
        sendHEXRB->setObjectName(QString::fromUtf8("sendHEXRB"));

        horizontalLayout_3->addWidget(sendHEXRB);


        verticalLayout->addLayout(horizontalLayout_3);

        openFileButton = new QPushButton(widget);
        openFileButton->setObjectName(QString::fromUtf8("openFileButton"));

        verticalLayout->addWidget(openFileButton);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        circulateSendCB = new QCheckBox(widget);
        circulateSendCB->setObjectName(QString::fromUtf8("circulateSendCB"));

        horizontalLayout_6->addWidget(circulateSendCB);

        timeLineEdit = new QLineEdit(widget);
        timeLineEdit->setObjectName(QString::fromUtf8("timeLineEdit"));

        horizontalLayout_6->addWidget(timeLineEdit);


        verticalLayout->addLayout(horizontalLayout_6);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        horizontalLayout_5->addWidget(label_10);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);


        verticalLayout_2->addLayout(horizontalLayout_5);

        recvTextEdit = new QTextEdit(widget);
        recvTextEdit->setObjectName(QString::fromUtf8("recvTextEdit"));
        recvTextEdit->setMinimumSize(QSize(450, 500));

        verticalLayout_2->addWidget(recvTextEdit);

        verticalSpacer = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        horizontalLayout->addWidget(label_11);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sendClearButton = new QPushButton(widget);
        sendClearButton->setObjectName(QString::fromUtf8("sendClearButton"));

        horizontalLayout->addWidget(sendClearButton);

        recvClearButton = new QPushButton(widget);
        recvClearButton->setObjectName(QString::fromUtf8("recvClearButton"));

        horizontalLayout->addWidget(recvClearButton);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        sendTextEdit = new QTextEdit(widget);
        sendTextEdit->setObjectName(QString::fromUtf8("sendTextEdit"));
        sendTextEdit->setMinimumSize(QSize(0, 80));
        sendTextEdit->setMaximumSize(QSize(16777215, 80));

        horizontalLayout_7->addWidget(sendTextEdit);

        sendButton = new QPushButton(widget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sendButton->sizePolicy().hasHeightForWidth());
        sendButton->setSizePolicy(sizePolicy);
        sendButton->setMinimumSize(QSize(0, 80));
        sendButton->setMaximumSize(QSize(16777215, 100));

        horizontalLayout_7->addWidget(sendButton);


        verticalLayout_3->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout_3, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        tipsLabel = new QLabel(widget);
        tipsLabel->setObjectName(QString::fromUtf8("tipsLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setStrikeOut(true);
        tipsLabel->setFont(font1);

        horizontalLayout_8->addWidget(tipsLabel);

        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        r_sCountLabel = new QLabel(widget);
        r_sCountLabel->setObjectName(QString::fromUtf8("r_sCountLabel"));

        horizontalLayout_8->addWidget(r_sCountLabel);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);

        recvCountLabel = new QLabel(widget);
        recvCountLabel->setObjectName(QString::fromUtf8("recvCountLabel"));

        horizontalLayout_8->addWidget(recvCountLabel);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        sendCountLabel = new QLabel(widget);
        sendCountLabel->setObjectName(QString::fromUtf8("sendCountLabel"));

        horizontalLayout_8->addWidget(sendCountLabel);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        clearCountButton = new QPushButton(widget);
        clearCountButton->setObjectName(QString::fromUtf8("clearCountButton"));

        horizontalLayout_8->addWidget(clearCountButton);


        gridLayout_2->addLayout(horizontalLayout_8, 1, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\350\260\203\350\257\225\345\212\251\346\211\213", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\344\270\262\345\217\243\345\217\267</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\346\263\242\347\211\271\347\216\207</p></body></html>", nullptr));
        baudRateComboBox->setItemText(0, QCoreApplication::translate("Widget", "1200", nullptr));
        baudRateComboBox->setItemText(1, QCoreApplication::translate("Widget", "2400", nullptr));
        baudRateComboBox->setItemText(2, QCoreApplication::translate("Widget", "4800", nullptr));
        baudRateComboBox->setItemText(3, QCoreApplication::translate("Widget", "9600", nullptr));
        baudRateComboBox->setItemText(4, QCoreApplication::translate("Widget", "19200", nullptr));
        baudRateComboBox->setItemText(5, QCoreApplication::translate("Widget", "38400", nullptr));
        baudRateComboBox->setItemText(6, QCoreApplication::translate("Widget", "57600", nullptr));
        baudRateComboBox->setItemText(7, QCoreApplication::translate("Widget", "115200", nullptr));

        baudRateComboBox->setCurrentText(QCoreApplication::translate("Widget", "1200", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\346\240\241\351\252\214\344\275\215</p></body></html>", nullptr));
        parityComboBox->setItemText(0, QCoreApplication::translate("Widget", "NONE", nullptr));
        parityComboBox->setItemText(1, QCoreApplication::translate("Widget", "ODD", nullptr));
        parityComboBox->setItemText(2, QCoreApplication::translate("Widget", "EVEN", nullptr));

        label_5->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\346\225\260\346\215\256\344\275\215</p></body></html>", nullptr));
        dataBitComboBox->setItemText(0, QCoreApplication::translate("Widget", "5", nullptr));
        dataBitComboBox->setItemText(1, QCoreApplication::translate("Widget", "6", nullptr));
        dataBitComboBox->setItemText(2, QCoreApplication::translate("Widget", "7", nullptr));
        dataBitComboBox->setItemText(3, QCoreApplication::translate("Widget", "8", nullptr));

        label_6->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\345\201\234\346\255\242\344\275\215</p></body></html>", nullptr));
        stopComboBox->setItemText(0, QCoreApplication::translate("Widget", "1", nullptr));
        stopComboBox->setItemText(1, QCoreApplication::translate("Widget", "1.5", nullptr));
        stopComboBox->setItemText(2, QCoreApplication::translate("Widget", "2", nullptr));

        openPortButton->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200", nullptr));
        closePortButton->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "\346\216\245\346\224\266\350\256\276\347\275\256", nullptr));
        recvASCIIRB->setText(QCoreApplication::translate("Widget", "ASCII", nullptr));
        recvHEXRB->setText(QCoreApplication::translate("Widget", "HEX", nullptr));
        saveFileButton->setText(QCoreApplication::translate("Widget", "\346\216\245\346\224\266\344\277\235\345\255\230\345\210\260\346\226\207\344\273\266...", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\350\256\276\347\275\256", nullptr));
        sendASCIIRB->setText(QCoreApplication::translate("Widget", "ASCII", nullptr));
        sendHEXRB->setText(QCoreApplication::translate("Widget", "HEX", nullptr));
        openFileButton->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\346\226\207\344\273\266\346\225\260\346\215\256\346\272\220...", nullptr));
        circulateSendCB->setText(QCoreApplication::translate("Widget", "\345\276\252\347\216\257\345\217\221\351\200\201(ms):", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\346\227\245\345\277\227", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><a href=\"https://www.cnblogs.com/ZhengBlogs/\"><span style=\" text-decoration: underline; color:#007af4;\">created by zhengyc</span></a></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\345\217\221\351\200\201", nullptr));
        sendClearButton->setText(QCoreApplication::translate("Widget", "\342\206\223\346\270\205\351\231\244", nullptr));
        recvClearButton->setText(QCoreApplication::translate("Widget", "\342\206\221\346\270\205\351\231\244", nullptr));
        sendButton->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        tipsLabel->setText(QCoreApplication::translate("Widget", "\346\210\221\346\230\257\346\217\220\347\244\272\350\257\215\357\274\214\350\277\230\346\262\241\345\256\214\345\226\204", nullptr));
        r_sCountLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">0/0</p></body></html>", nullptr));
        recvCountLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">RX:0</p></body></html>", nullptr));
        sendCountLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">TX:0</p></body></html>", nullptr));
        clearCountButton->setText(QCoreApplication::translate("Widget", "\345\244\215\344\275\215\350\256\241\346\225\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
