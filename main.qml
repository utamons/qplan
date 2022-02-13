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
    width: 640
    height: 480
    visible: true
    title: qsTr("QtPlan - testing Qt Quick")
    color: 'white'

    Text {
        color: "black"
        x: 5
        y: 5
        text: "Sidebar"
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
                y: parent.height - 25
                x: 5
                border.color: "white"
                border.width: 2
                radius: 5
                color: 'transparent'

                TapHandler {
                    onTapped:  {
                        mainArea.expanded = !mainArea.expanded
                    }

                }
            }
        }
    }
