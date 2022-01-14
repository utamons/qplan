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
#include "settings.h"
#include <QStandardPaths>
#include <QFile>
#include <QDebug>
#include <QDir>

Settings::Settings(QObject *parent)
    : QObject{parent}
{
    QString settings;
    //QFile file;
    QString path = QStandardPaths::locate(QStandardPaths::AppDataLocation, MAIN_FILE_NAME);
    if (path.isEmpty()) {
        qDebug() << "File not found, path" << QStandardPaths::writableLocation(QStandardPaths::AppDataLocation).append(QDir::separator()).append(MAIN_FILE_NAME);

    } else
        qDebug() << "File found";
    /*file.setFileName(QStandardPaths::AppDataLocation);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    settings = file.readAll();
    file.close();*/
}
