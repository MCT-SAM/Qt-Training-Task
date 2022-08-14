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
            width: parent.width - 30
            wrapMode: Text.WordWrap
            horizontalAlignment: Text.AlignHCenter
            anchors
            {
                top: failIcon.bottom
                horizontalCenter: parent.horizontalCenter
                margins: 30
            }
            text: "Some data boxes are empty, please fill all boxes"
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

//        RoundButton
//        {
//            y: 10
//            anchors
//            {
//                right: parent.right
//                margins: 10
//            }

//            onClicked:
//            {
//                ;
//            }

//            width: 50
//            height: 50
//            radius: 50
//            text: "Exit"
//            palette.button: "#35a2dd"
//        }
    }
}
