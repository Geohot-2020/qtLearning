#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    socket = new QUdpSocket;    //创建socket对象
}

Widget::~Widget()
{
    delete ui;
}

//=====================================发送端=========================================

void Widget::on_connectButton_clicked()
{


//    socket->writeDatagram()
}

void Widget::on_clearRecButton_clicked()
{
    ui->recList->clear();
}

void Widget::on_clearSendButton_clicked()
{
    ui->sendTextEdit->clear();
}

void Widget::on_sendButton_clicked()
{
    // 获取发送地址和端口号
    QString ip = ui->ipLineEdit->text();
    QString port = ui->portLineEdit->text();

    socket->writeDatagram(ui->sendTextEdit->toPlainText().toUtf8(), QHostAddress(ip), port.toShort());
}

//=======================================接收端===================================


void Widget::on_cancelButton_clicked()
{
    QString ip = ui->ipLineEdit->text();
    QString port = ui->portLineEdit->text();

    // ip和端口绑定
    socket->bind(QHostAddress(ip), port.toShort());

    // 连接
    connect(socket, &QUdpSocket::readyRead, this, &Widget::readData);
}

// 读数据槽函数
void Widget::readData()
{
    QByteArray ba;
    ba.resize(socket->bytesAvailable());
    QHostAddress recIp;
    quint16 recPort;
    socket->readDatagram(ba.data(), ba.size(), &recIp, &recPort);
    ui->recList->addItem(ba);
}

