#include <QtTest>

class FileHelperTest : public QObject
{
    Q_OBJECT

private slots:
    void toUpper();

};

void FileHelperTest::toUpper() {
    QString str = "Hello";
    QVERIFY(str.toUpper() == "HELLO");
}
