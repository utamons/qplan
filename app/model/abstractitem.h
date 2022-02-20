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
#ifndef ABSTRACTITEM_H
#define ABSTRACTITEM_H

#include <QString>
#include <QTime>


class AbstractItem {
public:
    AbstractItem(QString name, QTime activeFor, QString cron, QDateTime at);

    const QString &getName() const;
    void setName(const QString &newName);

    const QTime &getActiveFor() const;
    void setActiveFor(const QTime &newActiveFor);

    const QString &getCron() const;
    void setCron(const QString &newCron);

    const QDateTime &getAt() const;
    void setAt(const QDateTime &newAt);

private:
    QString   name;
    QTime     activeFor;
    QString   cron;
    QDateTime at;
};

#endif // ABSTRACTITEM_H
