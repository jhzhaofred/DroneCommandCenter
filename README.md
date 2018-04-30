# DroneCommandCenter

## First Glance

<img src="https://github.com/jhzhaofred/DroneCommandCenter/blob/master/Screenshots/login.png" width = "525" height = "299" alt="Firebase" align=center/> 

## App in Use 

<img src="https://github.com/jhzhaofred/DroneCommandCenter/blob/master/Screenshots/pilot.png" width = "525" height = "299" alt="Firebase" align=center/> 

## Usage
  Step 1: Clone everything.
  
  Step 2: Open a terminal and cd to the root directory of this project (Where file Podfile resides)
  
    pod install
    open GSDemo.xcworkspace
  
  Step 3: Create a [Firebase](https://firebase.google.com/) project. Then open the project and add an iOS APP for your project. It will generate a GoogleService-Info.plist file. Include this file into this project.

<img src="https://github.com/jhzhaofred/DroneCommandCenter/blob/master/Screenshots/Firebase.png" width = "465" height = "230" alt="Firebase" align=center/> <img src="https://github.com/jhzhaofred/DroneCommandCenter/blob/master/Screenshots/include.png" width = "182" height = "230" alt="Firebase" align=center/> 
  
  Step 4: In the Info Section of the projec, add a URL Schemes in URL Type with the value of REVERSED_CLIENT_ID from GoogleService-Info.plist.

<img src="https://github.com/jhzhaofred/DroneCommandCenter/blob/master/Screenshots/URL.png" width = "559" height = "234" alt="Firebase" align=center/> 

  Step 5: Create a [DJI Developer](https://developer.dji.com/) account, and then create an iOS APP at User Cneter. Click on the APP and it will give you a DJISDKAppKey. Make sure the Bundle ID is the same as the one in Xcode! 
  
  Step 6: In the Info Section of this Xcode Project, change "DJISDKAppKey" to the key you got from DJI. Be aware that when you create a DJI APP, the Bundle Identifier should be the same you used to build this application.
  
<img src="https://github.com/jhzhaofred/DroneCommandCenter/blob/master/Screenshots/info.png" width = "465" height = "230" alt="Firebase" align=center/> 
  
  Step 7: Build and enjoy!
