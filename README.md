# DroneCommandCenter
## Usage
  Step 1: Clone everything.
  
  Step 2: Open a terminal and cd to the root directory of this project (Where file Podfile resides)
  
    pod install
    open GMap.xcworkspace
  
  Step 3: Get a [Google Map API Key](https://developers.google.com/maps/documentation/ios-sdk/get-api-key)
  
  Step 4: Change "YOUR_API_KEY" to the key you got in the previous step
  
    GMSPlacesClient.provideAPIKey("YOUR_API_KEY")
    GMSServices.provideAPIKey("YOUR_API_KEY")
    
  Step 5: Build and run, enjoy!

<img src="https://github.com/jhzhaofred/DroneCommandCenter/blob/master/Screenshots/Framework.png" width = "299" height = "525" alt="Laptop" align=center /> 

<div>Icons made by <a href="https://www.flaticon.com/authors/chanut" title="Chanut">Chanut</a> from <a href="https://www.flaticon.com/" title="Flaticon">www.flaticon.com</a> is licensed by <a href="http://creativecommons.org/licenses/by/3.0/" title="Creative Commons BY 3.0" target="_blank">CC 3.0 BY</a></div>
