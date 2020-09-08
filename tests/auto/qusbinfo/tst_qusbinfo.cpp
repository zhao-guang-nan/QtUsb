#include <QtTest/QtTest>
#include <QtUsb/QUsbInfo>

class tst_QUsbInfo : public QObject
{
    Q_OBJECT
private slots:
    void constructors();
    void assignment();
    void features();
    void staticFunctions();

private:
};

void tst_QUsbInfo::constructors()
{
    QUsbInfo info;

    QCOMPARE(info.logLevel(), QUsbInfo::logInfo);
}

void tst_QUsbInfo::assignment()
{
    QUsbInfo info;

    info.setLogLevel(QUsbInfo::logDebug);
    QCOMPARE(info.logLevel(), QUsbInfo::logDebug);

    info.setLogLevel(QUsbInfo::logNone);
    QCOMPARE(info.logLevel(), QUsbInfo::logNone);
}

void tst_QUsbInfo::features()
{
    QUsbInfo info;
    info.devices();
}

void tst_QUsbInfo::staticFunctions()
{
    QUsbInfo::devices();
}

QTEST_MAIN(tst_QUsbInfo)
#include "tst_qusbinfo.moc"
