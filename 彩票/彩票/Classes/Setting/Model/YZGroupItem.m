//
//  YZGroupItem.m
//  彩票
//
//  xiaochen on 15/6/29.
//  Copyright (c) 2015年 xiaochen. All rights reserved.
//

#import "YZGroupItem.h"

@implementation YZGroupItem

+ (instancetype)groupWithItems:(NSArray *)items{
    YZGroupItem *item = [[YZGroupItem alloc] init];
    
    item.items = items;
    
    return item;
}

@end
