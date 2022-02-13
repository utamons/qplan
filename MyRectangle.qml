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
    id: rect
    width: 100
    height: 100
    color:  "green"

    Text {
        color: "white"
        anchors.centerIn: parent
        text: "A green rectangle"
    }

    ColorAnimation on color {id: toBlue; running: false; to: "blue"; duration: 1000 }
    ColorAnimation on color {id: toGreen; running: false; to: "green"; duration: 1000 }

    TapHandler {
        onTapped:  {
            if (Qt.colorEqual(parent.color, "green")) {
                toBlue.start()
                parent.children[0].text = "A blue rectangle"
            } else {
                toGreen.start()
                parent.children[0].text = "A green rectangle"
            }
            mainWindow.qmlSignal(parent.children[0].text);
        }

    }
}

