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
#ifndef ITEM_H
#define ITEM_H

#include <QObject>

enum ItemState {
    TODO, DONE, PROGRESS
};

class Item {
public:
    explicit Item(QString name, QString list, ItemState state);
    const QString getName() const;
    const QString getList() const;
    ItemState getState() const;

    Item &operator=(const Item &other);

private:
    const QString name;
    const QString list;
    const ItemState state;
};

#endif // ITEM_H
