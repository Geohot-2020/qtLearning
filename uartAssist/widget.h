#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSerialPortInfo>
#include <QSerialPort>
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QTimer *timSend;

private slots:
    void on_openPortButton_clicked();

    void on_closePortButton_clicked();

    void on_sendClearButton_clicked();

    void on_recvClearButton_clicked();

    void serialPortRecv();

    void on_sendButton_clicked();

    void on_saveFileButton_clicked();

    void on_openFileButton_clicked();

    void on_clearCountButton_clicked();

    void on_circulateSendCB_stateChanged(int arg1);

private:
    Ui::Widget *ui;

    QSerialPort *serialPort;

    long recvSizeNum, sendSizeNum;  //字节数
    int recvNum, sendNum;   //帧数
};
#endif // WIDGET_H
