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


Rectangle {
    color: mouseArea.containsMouse?"lightgray":"white"
    property string text: qsTr("Agenda")

    MouseArea {
        id: mouseArea
        anchors.fill: parent
        hoverEnabled: true
        onClicked: console.log("clicked "+parent.text)
    }

    Text {
        color: "black"
        text: parent.text
        padding: 10
        font.pointSize: 11
    }

    Behavior on color {
        ColorAnimation{
            duration: 200
            easing.type: Easing.InOutQuad
        }
    }
    width: mainWindow.width/3
    height: 40
}
