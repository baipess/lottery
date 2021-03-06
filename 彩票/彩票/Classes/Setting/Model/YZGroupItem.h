//
//  YZGroupItem.h
//  彩票
//
//  xiaochen on 15/6/29.
//  Copyright (c) 2015年 xiaochen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YZGroupItem : NSObject

@property (nonatomic, strong) NSArray *items;

@property (nonatomic, strong) NSString *header;

@property (nonatomic, strong) NSString *footer;

+ (instancetype)groupWithItems:(NSArray *)items;

@end
