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

#include <QString>
#include "abstractitem.h"

enum ItemState {
    TODO, DONE, PROGRESS
};

class Item : public AbstractItem {
public:
    Item(QString name, QTime* activeFor, QString* cron, QDateTime* at, QString list, ItemState state);

    static ItemState toState(int value) {
        return static_cast<ItemState>(value);
    }

    static QString toStateStr(int value);

    const QString &getList() const;
    void setList(const QString &newList);
    ItemState getState() const;
    void setState(ItemState newState);

private:
    QString list;
    ItemState state;
};

#endif // ITEM_H
