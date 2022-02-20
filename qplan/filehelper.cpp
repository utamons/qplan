/* qPlan
 * Copyright (C) 2022  Cornknight
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "filehelper.h"
#include <QStandardPaths>
#include <QDir>

FileHelper::FileHelper(QObject *parent)
    : QObject(parent),
      dataDirPath {QStandardPaths::writableLocation(QStandardPaths::AppDataLocation)},
      dataFilePath {dataDirPath+QDir::separator()+MAIN_FILE_NAME} {

    if (!QDir(dataDirPath).exists()) {
        if (!QDir().mkdir(dataDirPath)) {
            qDebug() << "Cannot create " << dataDirPath;
        } else {
            qDebug() << "Created " << dataDirPath;
        }
    } else {
        qDebug() << "Found " << dataDirPath;
    }
}

void FileHelper::save(const QByteArray &data) const {
    QFile file(dataFilePath);
    if(!file.open(QIODevice::ReadWrite)) {
        qDebug() << "Data file open error";
        return;
    } else {
        qDebug() <<"Data file open!";
    }

    file.resize(0);

    file.write(data);
    file.close();
    qDebug() << "Write data to file";
}

QString FileHelper::read() const {
    if (!QStandardPaths::locate(QStandardPaths::AppDataLocation, MAIN_FILE_NAME).isEmpty()) {
        QString val;
        QFile file(dataFilePath);
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        val = file.readAll();
        file.close();
        return val;
    }
    return QString();
}
