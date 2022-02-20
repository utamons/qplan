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
import QtQuick.Layouts 1.15
import 'utils.js' as Utils



ApplicationWindow {
    id: mainWindow
    width: 640
    height: 480
    visible: true
    title: qsTr("QtPlan")
    color: 'white'

    ColumnLayout{
        spacing: 1
        SideBarItem {
            text: qsTr("Agenda")
        }
        SideBarItem {
            text: qsTr("Daily stream")
        }
        SideBarItem {
            text: qsTr("List 1")
        }
        SideBarItem {
            text: qsTr("List 2")
        }
    }
    SideBarItem {
        y: parent.height - 40
        text: qsTr("+ New list")
    }

    signal qmlSignal(msg: string)


    function myQmlFunction(msg: string) : string {
        console.log("Got message:", msg)
        rectangles[0].children[0].text = msg
        return "some return value"
    }

        Rectangle {
            id: mainArea
            width: expanded ? parent.width : parent.width - parent.width * 0.3
            height: parent.height
            x: expanded ? 0 : parent.width * 0.3
            y: 0
            color:  "green"
            property bool expanded: true;

            Text {
                color: "white"
                anchors.centerIn: parent
                text: "Main area"
            }

            Rectangle {
                id: toggleButton
                width: 20
                height: 20
                y: parent.height - 30
                x: 7
                color: 'transparent'

                Text {
                    color: "white"
                    anchors.centerIn: parent
                    text: mainArea.expanded? ">>" : "<<"
                    font.pointSize: 11
                }

                TapHandler {
                    onTapped: () => mainArea.expanded = !mainArea.expanded
                }
            }
        }
    }
