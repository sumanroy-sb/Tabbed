//
//  SecondViewController.h
//  Tabbed
//
//  Created by Suman Roy on 04/11/15.
//  Copyright (c) 2015 sourcebits. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ItemDisplayViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *itemDisplayLabel;
- (IBAction)tapHandler:(id)sender;

@end

