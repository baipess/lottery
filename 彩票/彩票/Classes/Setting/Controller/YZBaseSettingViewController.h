//
//  YZBaseSettingViewController.h
//  彩票
//
//  xiaochen on 15/6/29.
//  Copyright (c) 2015年 xiaochen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YZSettingItem.h"
#import "YZGroupItem.h"

#import "YZSettingCell.h"

#import "YZArrowItem.h"
#import "YZSwitchItem.h"


@interface YZBaseSettingViewController : UITableViewController
@property (nonatomic, strong) NSMutableArray *groups;
@end
