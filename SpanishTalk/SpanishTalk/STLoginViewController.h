//
//  STLoginViewController.h
//  SpanishTalk
//
//  Created by Arly Xiao on 13-1-31.
//  Copyright (c) 2013年 Arly Xiao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface STLoginViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *emailField;

@property (strong, nonatomic) IBOutlet UITextField *passwordField;

- (IBAction)backgroundTap:(id)sender;

@end
