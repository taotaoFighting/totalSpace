//
//  ContainerViewController.h
//  OfficeBuddy
//
//  Created by fangjiayou on 15/11/13.
//  Copyright © 2015年 方. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ContainerViewController : UIViewController

- (id)initWithSideMenu:(UIViewController *)sideMenu center:(UIViewController *)center;

- (void)toggleSideMenu;

@end
