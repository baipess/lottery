//
//  YZSettingCell.h
//  彩票
//
//  xiaochen on 15/6/29.
//  Copyright (c) 2015年 xiaochen. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "YZSettingItem.h"

@interface YZSettingCell : UITableViewCell


+ (instancetype)cellWithTableView:(UITableView *)tableView style:(UITableViewCellStyle)style;

@property (nonatomic, strong) YZSettingItem *item;

@end
