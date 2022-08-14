import QtQuick 2.12
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

Rectangle
{
    id: root
    color: "transparent"
    property bool loginstate: true

    Connections
    {
        //--------------------------------------------------------------------------------------------------------------------
        //----------------- This connection is used if we want to pass data from C++ Class to this QML file  -----------------
        //--------------------------------------------------------------------------------------------------------------------

        target: loginWindow

        function onNameChanged()
        {
            console.log("aaa" , loginWindow.name);
        }

        function onsignFoundChanged()
        {
            console.log("name in database")
        }

    }

    MouseArea {
                anchors.fill: parent
                preventStealing: true
                property real velocity: 0.0
                property int xStart: 0
                property int xPrev: 0
                property bool tracing: false
                property int sensitivity: 5
                property real resolution: 10

                onPressed: {
                    xStart = mouseX
                    xPrev = mouseX
                    velocity = 0
                    tracing = true
                }
                onPositionChanged: {
                    if ( !tracing ) return
                    var currVel = (mouseX-xPrev)
                    velocity = (velocity + currVel)/2.0
                    xPrev =
                            mouseX
                    if (( velocity > sensitivity && currVel > sensitivity ) || ( velocity < (-sensitivity) && currVel < -sensitivity )) {
                        tracing = false
                        // SWIPE DETECTED !! EMIT SIGNAL

                    }

                }
                onReleased: {
                    tracing = false
                    if (velocity > sensitivity) {
                        console.log("Swipe Right")
                        swlogin()
                    }
                    else if ( velocity < (-sensitivity)) {
                        console.log("Swipe Left")
                            swsign()
                    }
                }
            }


    Rectangle
    {
        id: profileImage
        anchors
        {
            left: parent.left
            right: parent.right
        }
        y: 80
        height: image.height
        Image
        {
            id: image
            anchors.horizontalCenter: parent.horizontalCenter
            source: "../Images/user.png"
            width: sourceSize.width/3.5
            height: sourceSize.height/3.5
        }

    }

    Rectangle
    {
        id: tabButtons
        anchors
        {
            top: profileImage.bottom
            horizontalCenter: parent.horizontalCenter
            margins: 10
        }
        height: 20
        width: 50
        color: "transparent"


        RoundButton
        {
            id: loginButton
            width: 10
            height: 10
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.left
            palette.button: "#0078ff"

            onClicked: swlogin()


        }

        RoundButton
        {
            id: signupButton
            width: 10
            height: 10
            anchors.verticalCenter: parent.verticalCenter
            anchors.right: parent.right
            palette.button: "#9bc6f7"
            onClicked: swsign()
        }
    }

    Rectangle
    {
        id: login
        opacity: 1
        z: 1
        Keys.onDownPressed: swsign()
        anchors
        {
            top: parent.top
            right: parent.right
            left: parent.left
        }

        RoundButton{
            x: (414 - width)/2
            y: 736 - height - 30
            radius: height
            height: loginButtonText.height + 20
            width: 414 - 50
            palette.button: "#35a2dd"
            Text {
                id: loginButtonText
                anchors.verticalCenter: parent.verticalCenter
                anchors.horizontalCenter: parent.horizontalCenter
                font.pixelSize: 36
                font.bold: true
                text: qsTr("Login")
            }
            onClicked: loginProcess()
        }


        Rectangle
        {
            id: loginTitle
            y: 280
            color: "transparent"
            anchors
            {
                left: parent.left
                right: parent.right
            }
            height: loginText.height
            Text {
                id: loginText
                anchors.horizontalCenter: parent.horizontalCenter
                text: qsTr("Login")
                font.bold: true
                font.pixelSize: 36
                color: "#35a2dd"
            }
        }
        height: 70
        color: "transparent"
        RoundButton
        {
            width: 50
            height: 50
            text: "Exit"
            anchors.margins: 10
            palette.button: "#35a2dd"
            anchors
            {
                margins: 10
                right: parent.right
                verticalCenter: parent.verticalCenter
            }
            onClicked:
            {
                loginWindow.isOpenChanged()
                loginWindow.isOpen = false
            }
        }
        Rectangle
        {
            id: loginInput
            y: 350
            height: 40
            width: 370
            anchors.horizontalCenter: parent.horizontalCenter

            clip: true
            radius: 20; smooth: true
            border.color: "black"

            Image
            {
                id: usernameIcon
                x: 10
                source: "../Images/user (1).png"
                height: parent.height
                width: parent.height/sourceSize.height * sourceSize.width
            }

            TextInput
            {
                id: userNameInput
                y: (parent.height - userPlaceholder.height)/2
                font.pixelSize: 18
                selectByMouse: true
                activeFocusOnTab: true
                focus: true
                Keys.onReturnPressed: loginProcess()

                anchors
                {
                    right: parent.right
                    left: usernameIcon.right
                    margins: 10
                }
                property string placeholderText: "username"

                Text
                {
                    id: userPlaceholder
                    text: userNameInput.placeholderText
                    color: "#aaa"
                    visible: !userNameInput.text
                    font.bold: true
                    font.pixelSize: 18
                }
            }


        }
        Rectangle
        {
            id: password
            opacity: 1
            anchors
            {
                top: parent.top
                right: parent.right
                left: parent.left
            }
            height: 70
            color: "transparent"
            Rectangle
            {
                id: passBox
                y: 450
                height: 40
                width: 370
                anchors.horizontalCenter: parent.horizontalCenter

                clip: true
                radius: 20; smooth: true
                border.color: "black"

                Image
                {
                    x: 10
                    id: passIcon
                    source: "../Images/lock.png"
                    height: parent.height
                    width: parent.height/sourceSize.height * sourceSize.width
                }

                TextInput
                {
                    id: passInput
                    y: (parent.height - passPlaceholder.height)/2
                    font.pixelSize: 18
                    selectByMouse: true
                    passwordCharacter: "*"
                    echoMode: TextInput.Password
                    activeFocusOnTab: true
                    Keys.onReturnPressed: loginProcess()
                    anchors
                    {
                        right: parent.right
                        left: passIcon.right
                        margins: 10
                    }
                    property string placeholderText: "Password"

                    Text
                    {
                        id: passPlaceholder
                        text: passInput.placeholderText
                        color: "#aaa"
                        visible: !passInput.text
                        font.bold: true
                        font.pixelSize: 18
                    }
                }
            }
        }
    }





    Rectangle
    {
        id: signUp

        Keys.onUpPressed: swlogin()

        anchors
        {
            top: parent.top
            right: parent.right
            left: parent.left
        }
        height: 70
        color: "transparent"
        opacity: 0
        z: 0
        RoundButton
        {
            width: 50
            height: 50
            text: "Cancel"
            anchors.margins: 10
            palette.button: "#35a2dd"
            anchors
            {
                margins: 10
                right: parent.right
                verticalCenter: parent.verticalCenter
            }
            onClicked: swlogin()
        }

        //SignUp Button
        RoundButton{
            x: (414 - width)/2
            y: 736 - height - 30
            radius: height
            height: signButtonText.height + 20
            width: 414 - 50
            palette.button: "#35a2dd"
            Text {
                id: signButtonText
                anchors.verticalCenter: parent.verticalCenter
                anchors.horizontalCenter: parent.horizontalCenter
                font.pixelSize: 36
                font.bold: true
                text: qsTr("Sign Up")
            }
            onClicked:  signUpProcess()
        }
        // Sign Up Page Title
        Rectangle
        {
            y: 280
            anchors
            {
                left: parent.left
                right: parent.right
            }
            Text
            {
                anchors.horizontalCenter: parent.horizontalCenter
                text: qsTr("Sign Up")
                font.bold: true
                font.pixelSize: 36
                color: "#35a2dd"
            }
        }

        // Username Input
        Rectangle
        {
            id: signupInput
            y: 350
            height: 40
            width: 370
            anchors.horizontalCenter: parent.horizontalCenter

            clip: true
            radius: 20; smooth: true
            border.color: "black"


            Image
            {
                id: usernameIconSign
                x: 10
                source: "../Images/user (1).png"
                height: parent.height
                width: parent.height/sourceSize.height * sourceSize.width
            }

            TextInput
            {
                id: userNameInputSign
                y: (parent.height - userPlaceholderSign.height)/2

                font.pixelSize: 18

                selectByMouse: true
                activeFocusOnTab: true

                Keys.onReturnPressed: signUpProcess()

                anchors
                {
                    right: parent.right
                    left: usernameIconSign.right
                    margins: 10
                }
                property string placeholderText: "username"

                Text
                {
                    id: userPlaceholderSign
                    text: userNameInputSign.placeholderText
                    color: "#aaa"
                    visible: !userNameInputSign.text
                    font.bold: true
                    font.pixelSize: 18
                }
            }


        }


        // Email Input
        Rectangle
        {
            id: email
            anchors
            {
                top: parent.top
                right: parent.right
                left: parent.left
            }
            height: 70
            color: "transparent"

            Rectangle
            {
                id: emailBox
                y: 420
                height: 40
                width: 370
                anchors.horizontalCenter: parent.horizontalCenter

                clip: true
                radius: 20; smooth: true
                border.color: "black"

                Image
                {
                    x: 10
                    id: emailIcon
                    source: "../Images/email.png"
                    height: parent.height
                    width: parent.height/sourceSize.height * sourceSize.width
                }

                TextInput
                {
                    id: emailInput
                    y: (parent.height - emailPlaceholder.height)/2

                    font.pixelSize: 18

                    selectByMouse: true
                    activeFocusOnTab: true

                    Keys.onReturnPressed: signUpProcess()

                    anchors
                    {
                        right: parent.right
                        left: emailIcon.right
                        margins: 10
                    }
                    property string placeholderText: "Email Address"

                    Text
                    {
                        id: emailPlaceholder
                        text: emailInput.placeholderText
                        color: "#aaa"
                        visible: !emailInput.text
                        font.bold: true
                        font.pixelSize: 18
                    }
                }


            }
        }


        // Password Input
        Rectangle
        {
            id: passwordSign
            opacity: 1

            anchors
            {
                top: parent.top
                right: parent.right
                left: parent.left
            }
            height: 70
            color: "transparent"
            Rectangle
            {
                id: passBoxSign
                y: 490
                height: 40
                width: 370
                anchors.horizontalCenter: parent.horizontalCenter

                clip: true
                radius: 20; smooth: true
                border.color: "black"

                Image
                {
                    x: 10
                    id: passIconSign
                    source: "../Images/lock.png"
                    height: parent.height
                    width: parent.height/sourceSize.height * sourceSize.width
                }

                TextInput
                {
                    id: passInputSign
                    y: (parent.height - passPlaceholderSign.height)/2

                    font.pixelSize: 18

                    selectByMouse: true

                    passwordCharacter: "*"
                    echoMode: TextInput.Password
                    activeFocusOnTab: true

                    Keys.onReturnPressed: signUpProcess()

                    anchors
                    {
                        right: parent.right
                        left: passIconSign.right
                        margins: 10
                    }

                    property string placeholderText: "Password"

                    Text
                    {
                        id: passPlaceholderSign
                        text: passInputSign.placeholderText
                        color: "#aaa"
                        visible: !passInputSign.text
                        font.bold: true
                        font.pixelSize: 18
                    }
                }


            }

            // Password Confirm Input
            Rectangle
            {
                id: passConfirmBox
                y: 560
                height: 40
                width: 370
                anchors.horizontalCenter: parent.horizontalCenter

                clip: true
                radius: 20; smooth: true
                border.color: "black"

                Image
                {
                    x: 10
                    id: passConfirmIcon
                    source: "../Images/lock.png"
                    height: parent.height
                    width: parent.height/sourceSize.height * sourceSize.width
                }

                TextInput
                {
                    id: passConfirmInput
                    y: (parent.height - passConfirmPlaceholder.height)/2

                    font.pixelSize: 18

                    selectByMouse: true

                    passwordCharacter: "*"
                    echoMode: TextInput.Password
                    activeFocusOnTab: true

                    Keys.onReturnPressed: signUpProcess()

                    anchors
                    {
                        right: parent.right
                        left: passConfirmIcon.right
                        margins: 10
                    }
                    property string placeholderText: "Password Confirmation"

                    Text
                    {
                        id: passConfirmPlaceholder
                        text: passConfirmInput.placeholderText
                        color: "#aaa"
                        visible: !passConfirmInput.text
                        font.bold: true
                        font.pixelSize: 18
                    }
                }


            }
        }
    }


    // Border
    Rectangle
    {
        radius:20
        anchors.fill: parent
        color: "transparent"
        border.color: "#35a2dd"
        border.width: 5
    }


    // Functions

    // Switch to Login Page
    function swlogin()
    {
        if(!loginstate)
        {
            console.log("login switched");

            login.opacity = 1
            login.z = 1
            signUp.opacity = 0

            loginButton.palette.button = "#0078ff"
            signupButton.palette.button = "#9bc6f7"

            loginstate = true

            userNameInput.focus = true
            userNameInputSign.activeFocusOnTab = false

            emailInput.activeFocusOnTab = false
            passInputSign.activeFocusOnTab = false
            passConfirmInput.activeFocusOnTab = false

            userNameInput.activeFocusOnTab = true
            passInput.activeFocusOnTab = true
        }
    }


    // Switch to Sign Up Page
    function swsign()
    {
        if(loginstate)
        {
            console.log("sign up switched")

            login.opacity = 0
            login.z = 0
            signUp.opacity = 1

            loginButton.palette.button = "#9bc6f7"
            signupButton.palette.button = "#0078ff"

            loginstate = false

            userNameInputSign.focus = true
            userNameInput.activeFocusOnTab = false
            passInput.activeFocusOnTab = false
            userNameInputSign.activeFocusOnTab = true
            emailInput.activeFocusOnTab = true
            passInputSign.activeFocusOnTab = true
            passConfirmInput.activeFocusOnTab = true
        }
    }


    // Check Password and Confirmation Matching
    function passConfirmation(pass,confirm)
    {
        if(pass === confirm)
            return true
        else
            return false
    }
    function loginProcess()
    {
        console.log("login")
        if((userNameInput.text !== "") && (passInput.text !== "")){
            loginWindow.loginButton(userNameInput.text,passInput.text)
        }

        else
        {
            console.log("input box empty")
            loginWindow.qmlResponse(4)
        }
    }

    function signUpProcess()
    {
        if((userNameInputSign.text !== "") && (emailInput.text !== "") && (passInputSign.text !== "") && (passConfirmInput.text !== ""))
        {
            if(passInputSign.text.length < 8)
            {
                console.log("password length must be more than 8 characters")
                loginWindow.qmlResponse(5)
                return
            }
            // confirm password is matched
            if(passConfirmation(passInputSign.text,passConfirmInput.text))
            {
                loginWindow.signUpButton(userNameInputSign.text, emailInput.text, passInputSign.text)
                console.log(passInputSign.text)
            }
            else
            {
                console.log("passwords doesnot match")
                loginWindow.qmlResponse(3)
            }
        }
        else
        {
            loginWindow.qmlResponse(4)
            console.log("input box empty")
        }
    }

}


