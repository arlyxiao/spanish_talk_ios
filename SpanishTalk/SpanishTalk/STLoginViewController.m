//
//  STLoginViewController.m
//  SpanishTalk
//
//  Created by Arly Xiao on 13-1-31.
//  Copyright (c) 2013年 Arly Xiao. All rights reserved.
//

#import "STLoginViewController.h"

@interface STLoginViewController ()

@end

@implementation STLoginViewController

@synthesize emailField;
@synthesize passwordField;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (IBAction)backgroundTap:(id)sender {
    [emailField resignFirstResponder];
    [passwordField resignFirstResponder];
}

@end
