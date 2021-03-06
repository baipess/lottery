//
//  YZMenuItem.h
//  彩票
//
//  xiaochen on 15/6/26.
//  Copyright (c) 2015年 xiaochen. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <UIKit/UIKit.h>

@interface YZMenuItem : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) UIImage *image;




+ (instancetype)itemWithTitle:(NSString *)title image:(UIImage *)image;

@end
