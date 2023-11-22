#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    socket = new QUdpSocket;    //创建套接字

    ui->recvQuitMulBt->setEnabled(false);

}

Widget::~Widget()
{
    delete ui;
}

/**
 * @brief Widget::on_sendButton_clicked
 * 获取发送地址和端口号，发送数据
 */
void Widget::on_sendButton_clicked()
{
    // 获取发送地址和端口号
    QString ip = ui->ipLineEdit->text();
    QString port = ui->portLineEdit->text();

    // 发送
    socket->writeDatagram(ui->sendTextEdit->toPlainText().toUtf8(), QHostAddress(ip), port.toShort());

    qDebug() << "send" << ui->sendTextEdit->toPlainText().toUtf8();
}

/**
 * @brief Widget::on_sendClearButton_clicked
 * 清空发送区
 */
void Widget::on_sendClearButton_clicked()
{
    ui->sendTextEdit->clear();
}

/**
 * @brief Widget::on_recCheckBox_clicked
 * 接收数据，绑定ip和端口号
 * @param checked 是否选中接收
 */
void Widget::on_recCheckBox_clicked(bool checked)
{
    // 检查是否有端口号
    if(ui->recvPortLineEdit->text().isEmpty())
    {
        QMessageBox::critical(this, "错误", "请输入端口号");
        ui->recCheckBox->setChecked(false);
        return;
    }
    if(checked)
    {
        QString port = ui->recvPortLineEdit->text();

        // 绑定ip和端口号
        socket->bind(QHostAddress::AnyIPv4, port.toShort());

        // 连接
        connect(socket, &QUdpSocket::readyRead, this, &Widget::readData);
    }
    else
    {
        socket->close();
    }
}

/**
 * @brief Widget::readData
 * 读取接收到的数据
 */
void Widget::readData()
{
    QByteArray ba;
    ba.resize(socket->bytesAvailable());
    QHostAddress recIp;
    quint16 recPort;
    socket->readDatagram(ba.data(), ba.size(), &recIp, &recPort);
    ui->recvTextEdit->append(ba);

    qDebug() << "recv" << ba;
}

/**
 * @brief Widget::on_clearRecvButton_clicked
 * 清空接收区
 */
void Widget::on_clearRecvButton_clicked()
{
    ui->recvTextEdit->clear();
}

/**
 * @brief Widget::on_saveRecvButton_clicked
 * 保存接收区数据
 */
void Widget::on_saveRecvButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "保存文件", ".", "文本文件(*.txt)");
    if(!fileName.isEmpty())
    {
        QFile file(fileName);
        if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QMessageBox::critical(this, "错误", "打开文件失败");
            return;
        }

        QTextStream out(&file);
        out << ui->recvTextEdit->toPlainText();
        file.close();
    }
}

/**
 * @brief Widget::on_openSendButton_clicked
 * 打开历史文件
 */
void Widget::on_openRecvButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "打开文件", ".", "文本文件(*.txt)");
    if(!fileName.isEmpty())
    {
        QFile file(fileName);
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox::critical(this, "错误", "打开文件失败");
            return;
        }

        QTextStream in(&file);
        ui->recvTextEdit->setText(in.readAll());
        file.close();
    }
}

/**
 * @brief Widget::on_recvJoinMulBt_clicked
 * 加入多播组
 */
void Widget::on_recvJoinMulBt_clicked()
{
    QString ip = ui->recvMulIpLineEdit->text();
    socket->joinMulticastGroup(QHostAddress(ip));
    ui->recvJoinMulBt->setEnabled(false);
    ui->recvQuitMulBt->setEnabled(true);
}

/**
 * @brief Widget::on_recvQuitMulBt_clicked
 * 退出多播组
 */
void Widget::on_recvQuitMulBt_clicked()
{
    QString ip = ui->recvMulIpLineEdit->text();
    socket->leaveMulticastGroup(QHostAddress(ip));
    ui->recvJoinMulBt->setEnabled(true);
    ui->recvQuitMulBt->setEnabled(false);
}
