//
//  DJIRootViewController.h
//  GSDemo
//
//  Created by DJI on 7/7/15.
//  Copyright (c) 2015 DJI. All rights reserved.
//

#import <UIKit/UIKit.h>
@import Firebase;
@import GoogleSignIn;
@interface DJIRootViewController : UIViewController <GIDSignInDelegate, GIDSignInUIDelegate>
//@interface DJIRootViewController : UIViewController

@property (strong, nonatomic) FIRDatabaseReference *ref;
@property (weak, nonatomic) IBOutlet GIDSignInButton *signInButton;
@property (weak, nonatomic) IBOutlet UIButton *signOutButton;

@end
