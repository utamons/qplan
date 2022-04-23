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
#include "abstractitem.h"

AbstractItem::AbstractItem(QString name, QTime* activeFor, QString* cron, QDateTime* at) :
    name(name),
    activeFor(activeFor),
    cron(cron),
    at(at) {}

const QString &AbstractItem::getName() const {
    return name;
}

void AbstractItem::setName(const QString &newName) {
    name = newName;
}

QTime *AbstractItem::getActiveFor() const
{
    return activeFor;
}

void AbstractItem::setActiveFor(QTime *newActiveFor)
{
    activeFor = newActiveFor;
}

QString *AbstractItem::getCron() const
{
    return cron;
}

void AbstractItem::setCron(QString *newCron)
{
    cron = newCron;
}

QDateTime *AbstractItem::getAt() const
{
    return at;
}

void AbstractItem::setAt(QDateTime *newAt)
{
    at = newAt;
}


