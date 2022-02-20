#include <QtTest>
#include <QStandardPaths>
#include <QDir>

#include "../qplan/filehelper.h"

// add necessary includes here

class FileHelperTest : public QObject
{
    Q_OBJECT

private:
    QDir dataDir{QStandardPaths::writableLocation(QStandardPaths::AppDataLocation)};

private slots:
    void directoryCreationTest();
    void cleanupTestCase();
};

void FileHelperTest::directoryCreationTest() {
    if (dataDir.exists()) {
        dataDir.removeRecursively();
    }

    FileHelper file;

    QVERIFY(dataDir.exists());
}

void FileHelperTest::cleanupTestCase() {
    if (dataDir.exists()) {
        dataDir.removeRecursively();
    }
}


















QTEST_MAIN(FileHelperTest)

#include "tst_filehelpertest.moc"
