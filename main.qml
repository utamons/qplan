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
import QtQuick 2.15
import QtQuick.Controls 2.15
import 'utils.js' as Utils



ApplicationWindow {
    id: mainWindow
    objectName: mainWindow
    width: 640
    height: 480
    visible: true
    title: qsTr("QtPlan - testing Qt Quick")
    property list<MyRectangle> rectangles

    //menu containing two menu items
    menuBar: MenuBar {
        Menu {
            title: qsTr("File")
            MenuItem {
                text: qsTr("&Rectangle - QML")
                onTriggered: ()=>Utils.createRectangle();
            }
            MenuItem {
                text: qsTr("&Fetch")
                onTriggered: ()=>Utils.getHello();
            }
            MenuItem {
                text: qsTr("Exit")
                onTriggered: Qt.quit();
            }
        }
    }
}
