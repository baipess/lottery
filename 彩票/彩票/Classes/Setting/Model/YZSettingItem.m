//
//  YZSettingItem.m
//  彩票
//
//  xiaochen on 15/6/29.
//  Copyright (c) 2015年 xiaochen. All rights reserved.
//

#import "YZSettingItem.h"

@implementation YZSettingItem

+ (instancetype)itemWithImage:(UIImage *)image title:(NSString *)title
{
    YZSettingItem *item = [[self alloc] init];
    
    
    item.image = image;
    item.title = title;
    
    
    
    return item;
}

@end
