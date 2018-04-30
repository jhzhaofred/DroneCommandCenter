
import UIKit
import GoogleMaps
import GooglePlaces

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
    
    var window: UIWindow?
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        GMSPlacesClient.provideAPIKey("YOUR_API_KEY")
        GMSServices.provideAPIKey("YOUR_API_KEY")
        return true
    }
}

