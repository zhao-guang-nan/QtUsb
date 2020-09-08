#ifndef USBEXAMPLE_H
#define USBEXAMPLE_H

#include <QObject>
#include <QUsbDevice>
#include <QUsbInfo>

class UsbExample : public QObject
{
    Q_OBJECT
public:
    explicit UsbExample(QObject *parent = Q_NULLPTR);
    ~UsbExample(void);

signals:

public slots:
    void onDevInserted(QUsbInfo::Id id);
    void onDevRemoved(QUsbInfo::Id id);

private:
    QUsbInfo m_usb_info;
};

#endif // USBEXAMPLE_H
