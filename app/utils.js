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
function createRectangle() {
    const component = Qt.createComponent("qrc:/MyRectangle.qml");
    if (component.status === Component.Ready)
    {
        const rectangle = component.createObject(mainWindow);
        if (mainWindow.rectangles.length>0) {
            rectangle.x = (rectangle.width+10) * mainWindow.rectangles.length
        } else {
            rectangle.x = 5
        }
        rectangle.y = 50

        mainWindow.rectangles.push(rectangle)
    }
}

function getHello() {
    var request = new XMLHttpRequest()
    request.open('GET', 'http://localhost:8080/api/hello')
    request.onreadystatechange = function() {
        if (request.readyState === XMLHttpRequest.DONE) {
            if (request.status && request.status === 200) {
                console.log("response", request.responseText)
            } else {
                console.log("HTTP:", request.status, request.statusText)
            }
        }
    }
    request.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded')
    request.send()

}
