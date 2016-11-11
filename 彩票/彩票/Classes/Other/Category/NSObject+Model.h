//
//  NSObject+Model.h
//  彩票
//
//  xiaochen on 15/6/29.
//  Copyright (c) 2015年 xiaochen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Model)

// 告诉模型里哪个属性需要映射字典里哪个key
+ (instancetype)objcWithDict:(NSDictionary *)dict mapDict:(NSDictionary *)mapDict;


@end
