#ifndef QMLSIGNALS_H
#define QMLSIGNALS_H

#include <QObject>
#include <QDebug>
#include <QQuickItem>

class QmlSignals : public QObject
{
    Q_OBJECT
public:
    explicit QmlSignals(QObject* mainWindow, QObject *parent = nullptr);

public slots:
    void cppSlot(const QString  msg) {
        qDebug() << "Called the C++ slot with message:" << msg;
        QString returnedValue;
        QMetaObject::invokeMethod(mainWindow, "myQmlFunction",
                Q_RETURN_ARG(QString, returnedValue),
                Q_ARG(QString, "Hello from C++"));
        qDebug() << "Got from QML:" << returnedValue;
    }

signals:

private:
    QObject* mainWindow;

};

#endif // QMLSIGNALS_H
