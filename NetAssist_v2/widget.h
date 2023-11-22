#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QUdpSocket>
#include <QHostAddress>
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void on_sendButton_clicked();

    void on_sendClearButton_clicked();

    void on_recCheckBox_clicked(bool checked);

    void readData();

    void on_clearRecvButton_clicked();

    void on_saveRecvButton_clicked();

    void on_openRecvButton_clicked();

    void on_recvJoinMulBt_clicked();

    void on_recvQuitMulBt_clicked();

private:
    Ui::Widget *ui;
    QUdpSocket *socket;

};
#endif // WIDGET_H
