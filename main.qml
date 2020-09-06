import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
import Qt.labs.calendar 1.0

Window {
    visible: true
    width: 640
    height: 480
    visibility: "FullScreen"
    color: "#ffffff"
    title: qsTr("Hello, World!")



    Text {
        id: ui_time
        x: 27
        y: 103
        width: 170
        height: 71
        text: testObj.getTime()
        font.pixelSize: 12
    }

    Text {
        id: ui_date
        x: 27
        y: 26
        width: 170
        height: 71
        text: testObj.getDate()
        font.pixelSize: 12
    }


}
