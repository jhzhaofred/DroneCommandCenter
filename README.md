# DroneCommandCenter
## Usage
  Step 1: Clone everything.
  
  Step 2: Open a terminal and cd to the root directory of this project (Where file Podfile resides)
  
    pod install
    open GMap.xcworkspace
  
  Step 3: Create a [Firebase](https://firebase.google.com/) project. Then open the project add an iOS APP for your project. It 
  will generate a GoogleService-Info.plist file. Include this file into this project.

<img src="https://github.com/jhzhaofred/DroneCommandCenter/blob/master/Screenshots/Firebase.png" width = "465" height = "230" alt="Firebase" align=center /> <img src="https://github.com/jhzhaofred/DroneCommandCenter/blob/master/Screenshots/include.png" width = "182" height = "230" alt="Firebase" align=center /> 
  
  Step 4: In the Info Section of the projec, add a URL Schemes in URL Type with the value of REVERSED_CLIENT_ID from GoogleService-Info.plist.

<img src="https://github.com/jhzhaofred/DroneCommandCenter/blob/master/Screenshots/URL.png" width = "465" height = "230" alt="Firebase" align=center /> 

  Step 5: Create a [DJI](https://developer.dji.com/) iOS project. It will give you a DJISDKAppKey.
  
  Step 6: In the Info Section of the projec, change "DJISDKAppKey" to the key you got from DJI.
  
<img src="https://github.com/jhzhaofred/DroneCommandCenter/blob/master/Screenshots/info.png" width = "465" height = "230" alt="Firebase" align=center /> 
    
  
