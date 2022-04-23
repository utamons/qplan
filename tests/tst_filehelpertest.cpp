#include <QtTest>
#include <QStandardPaths>
#include <QDir>

#include "../qplan/filehelper.h"

// add necessary includes here

class FileHelperTest : public QObject
{
    Q_OBJECT

private:
    QString dataDirPath{QStandardPaths::writableLocation(QStandardPaths::AppDataLocation)};
    QDir dataDir{dataDirPath};
    QString dataFilePath {dataDirPath+QDir::separator()+"main.json"};

private slots:
    void directoryCreationTest();
    void saveTest();
    void readTest();
    void cleanupTestCase();
};

void FileHelperTest::directoryCreationTest() {
    if (dataDir.exists()) {
        dataDir.removeRecursively();
    }

    FileHelper file;

    QVERIFY(dataDir.exists());
}

void FileHelperTest::saveTest() {
    FileHelper file;
    QString testString("Test string");
    QByteArray qb = testString.toUtf8();

    file.save(qb);

    QFile testFile(dataFilePath);
    testFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QString actual = testFile.readAll();

    QCOMPARE(actual, testString);
}

void FileHelperTest::readTest() {
    if (!dataDir.exists()) {
        QDir().mkdir(dataDirPath);
    }

    QString testString("Test string");

    QFile file(dataFilePath);
    file.resize(0);
}



void FileHelperTest::cleanupTestCase() {
    if (dataDir.exists()) {
        dataDir.removeRecursively();
    }
}


















QTEST_MAIN(FileHelperTest)

#include "tst_filehelpertest.moc"
