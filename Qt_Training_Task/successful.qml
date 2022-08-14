import QtQuick 2.12

Item {
    id: root

    Rectangle
    {

        anchors.fill: parent
        color: "white"

        Image
        {
            id: successIcon
            source: "../Images/check.png"
            height: parent.height/2
            width: height/sourceSize.height*sourceSize.width
            anchors
            {
                top: parent.top
                horizontalCenter: parent.horizontalCenter
            }
        }

        Text
        {
            anchors
            {
                top: successIcon.bottom
                horizontalCenter: parent.horizontalCenter
                margins: 30
            }

            id: message
            text: "Successful Login .. Please wait"
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
