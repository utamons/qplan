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
#include "item.h"

Item::Item(QString name, QTime* activeFor, QString* cron, QDateTime* at, QString list, ItemState state) :
    AbstractItem(name, activeFor, cron, at),
    list(list),
    state(state) {}

QString Item::toStateStr(int value) {
    ItemState state = static_cast<ItemState>(value);

    if (state == TODO)
        return "TODO";
    if (state == DONE)
        return "DONE";
    if (state == PROGRESS)
        return "PROGRESS";

    return "UNKNOWN";
}

const QString &Item::getList() const {
    return list;
}

void Item::setList(const QString &newList) {
    list = newList;
}

ItemState Item::getState() const {
    return state;
}

void Item::setState(ItemState newState) {
    state = newState;
}
