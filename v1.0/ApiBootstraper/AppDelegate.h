//
//  AppDelegate.h
//  ApiBootstraper
//
//  Created by Jeremy on 27/02/13.
//  Copyright (c) 2013 ApiBootstraper. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
    RootViewController *rootViewController;
}

@property (strong, nonatomic) UIWindow *window;

@end
