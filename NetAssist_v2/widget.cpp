#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    socket = new QUdpSocket;    //创建套接字

}

Widget::~Widget()
{
    delete ui;
}


//==================发送端======================



void Widget::on_sendButton_clicked()
{
    // 获取发送地址和端口号
    QString ip = ui->ipLineEdit->text();
    QString port = ui->portLineEdit->text();

    // 发送
    socket->writeDatagram(ui->sendTextEdit->toPlainText().toUtf8(), QHostAddress(ip), port.toShort());


}


void Widget::on_sendClearButton_clicked()
{
    ui->sendTextEdit->clear();
}

//=================接收端=======================


void Widget::on_recCheckBox_clicked(bool checked)
{
    if(checked)
    {
        QString ip = ui->ipLineEdit->text();
        QString port = ui->portLineEdit->text();

        // ip和端口绑定
        socket->bind(QHostAddress(ip), port.toShort());

        // 连接
        connect(socket, &QUdpSocket::readyRead, this, &Widget::readData);
    }
    else
    {
        socket->close();
    }
}

// 读数据槽函数
void Widget::readData()
{
    QByteArray ba;
    ba.resize(socket->bytesAvailable());
    QHostAddress recIp;
    quint16 recPort;
    socket->readDatagram(ba.data(), ba.size(), &recIp, &recPort);
    ui->recvTextEdit->append(ba);
}



void Widget::on_clearRecvButton_clicked()
{
    ui->recvTextEdit->clear();
}
