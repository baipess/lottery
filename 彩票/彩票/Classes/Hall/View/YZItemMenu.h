//
//  YZItemMenu.h
//  彩票
//
//  xiaochen on 15/6/26.
//  Copyright (c) 2015年 xiaochen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YZItemMenu : UIView

+ (instancetype)showInView:(UIView *)view originY:(CGFloat)originY items:(NSArray *)items;

- (void)hide;

@end
