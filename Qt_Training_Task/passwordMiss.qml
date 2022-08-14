import QtQuick 2.12
import QtQuick.Controls 2.15

Item {
    id: root
    Rectangle
    {
        anchors.fill: parent
        color: "white"

        Image
        {
            id: failIcon
            source: "../Images/cancel.png"
            height: parent.height/2
            width: height/sourceSize.height*sourceSize.width
            y: 10
            anchors
            {
                horizontalCenter: parent.horizontalCenter
            }
        }

        Text
        {
            id: message
            anchors
            {
                top: failIcon.bottom
                horizontalCenter: parent.horizontalCenter
                margins: 30
            }
            text: "Passwords doesn't match"
            font.pixelSize: 25
            color: "green"
        }

        Rectangle
        {
            radius:20
            anchors.fill: parent
            color: "transparent"
            border.color: "#35a2dd"
            border.width: 5
        }


    }
}
