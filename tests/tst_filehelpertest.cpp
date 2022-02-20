#include <QtTest>
#include "../app/filehelper.h"

// add necessary includes here

class FileHelperTest : public QObject
{
    Q_OBJECT

private slots:
    void simpleTest();

};

void FileHelperTest::simpleTest() {
    FileHelper file;
    QString str = "Hello";
    QVERIFY(str.toUpper() == "HELLO");
}



















QTEST_APPLESS_MAIN(FileHelperTest)

#include "tst_filehelpertest.moc"
