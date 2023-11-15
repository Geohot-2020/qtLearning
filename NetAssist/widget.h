#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QMessageBox>
#include <QUdpSocket>
#include <QHostAddress>

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
    void on_connectButton_clicked();

    void on_clearRecButton_clicked();

    void on_clearSendButton_clicked();

    void on_sendButton_clicked();

    void on_cancelButton_clicked();

    void readData();

private:
    Ui::Widget *ui;
    QUdpSocket *socket;
};
#endif // WIDGET_H
