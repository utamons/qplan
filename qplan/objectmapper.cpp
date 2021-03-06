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
#include "objectmapper.h"
#include <QStandardPaths>
#include <QFile>
#include <QDebug>
#include <QDir>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>

ObjectMapper::ObjectMapper(QObject *parent)
    : QObject{parent} {}

/*void ObjectMapper::saveJson() const {
    QFile file(dataFilePath);
    if(!file.open(QIODevice::ReadWrite)) {
        qDebug() << "JSON file open error";
        return;
    } else {
        qDebug() <<"JSON file open!";
    }

    file.resize(0);

    QJsonArray jsonArray;

    for (auto rec = items.begin(); rec != items.end(); ++rec) {
        QJsonObject jsonObject;

        jsonObject.insert("name", rec->get()->getName());
        jsonObject.insert("list", rec->get()->getList());
        jsonObject.insert("state", rec->get()->getState());

        jsonArray.append(jsonObject);
    }

    QJsonObject jsonObject;
    jsonObject.insert("items", jsonArray);

    QJsonDocument jsonDoc;
    jsonDoc.setObject(jsonObject);
    file.write(jsonDoc.toJson());
    file.close();
    qDebug() << "Write JSON to file";
}*/

/*void ObjectMapper::readJson() {
    qDebug() << "Read JSON";
    QString val;
    QFile file(dataFilePath);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    val = file.readAll();
    file.close();
    QJsonDocument doc = QJsonDocument::fromJson(val.toUtf8());
    QJsonObject docObj = doc.object();
    QJsonValue value = docObj.value(QString("items"));
    QJsonArray items = value.toArray();
    for (auto rec = items.begin(); rec != items.end(); ++rec) {
        QJsonObject value = rec->toObject();
        this->items.push_back(make_shared<Item>(Item(value.value("name").toString(),
                                                QTime(), QString(), QDateTime(),
                                                value.value("list").toString(),
                                                static_cast<ItemState>(value.value("state").toInt()))));
    }

}*/
