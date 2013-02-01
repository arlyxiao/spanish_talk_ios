//
//  STAppDelegate.h
//  SpanishTalk
//
//  Created by Arly Xiao on 13-1-31.
//  Copyright (c) 2013年 Arly Xiao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UITabBarController;

@class STLoginViewController;

@class STRegisterViewController;


@interface STAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) UITabBarController *mainTab;

@property (strong, nonatomic) STLoginViewController *loginView;

@property (strong, nonatomic) STRegisterViewController *registerView;


@end
