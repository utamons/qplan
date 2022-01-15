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
#ifndef MAINDATA_H
#define MAINDATA_H

#include "qobject.h"
#include "model/item.h"

using std::shared_ptr;
using std::make_shared;
using std::vector;



class MainData : public QObject {

public:
    explicit MainData(QObject *parent = nullptr);

    vector<shared_ptr<Item>> getItems() {
        return items;
    }

private:
    const QString MAIN_FILE_NAME = "main.json";
    const QString dataDirPath;
    const QString dataFilePath;


    void initData();
    void saveJson();
    void readJson();

    vector<shared_ptr<Item>> items;
};

#endif // MAINDATA_H
