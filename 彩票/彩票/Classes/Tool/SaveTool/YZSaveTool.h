//
//  YZSaveTool.h
//  彩票
//
//  Created by xiaochen on 15/6/29.
//  Copyright (c) 2015年 xiaochen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YZSaveTool : NSObject

+ (id)objectForKey:(NSString *)defaultName;
+ (void)setObject:(id)value forKey:(NSString *)defaultName;


@end
