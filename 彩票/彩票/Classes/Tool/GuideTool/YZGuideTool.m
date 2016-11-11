//
//  YZGuideTool.m
//  彩票
//
//  Created by xiaochen on 15/6/29.
//  Copyright (c) 2015年 xiaochen. All rights reserved.
//

#import "YZGuideTool.h"

#import "YZSaveTool.h"

#define YZVersion @"version"

#import "YZNewFeatureViewController.h"
#import "YZTabBarController.h"

@implementation YZGuideTool

+ (void)chooseRootViewController:(UIWindow *)window
{
    // 获取当前版本与上一次记录的版本比较
       NSString *curVersion = [NSBundle mainBundle].infoDictionary[@"CFBundleShortVersionString"];
    
       NSLog(@"infiDic=%@",[NSBundle mainBundle].infoDictionary);
    
       NSString *lastVersion = [YZSaveTool objectForKey:YZVersion];
    
    
    if ([curVersion isEqualToString:lastVersion]) {
        // 没有新版本
        // 设置窗口根控制器
        UITabBarController *tabBarController = [[YZTabBarController alloc] init];
        
        window.rootViewController = tabBarController;
        
        // 显示窗口
        [window makeKeyAndVisible];
        
    }else{ // 有新版本,保存新版本
        
        // 进入新特性界面
        YZNewFeatureViewController *newFeature = [[YZNewFeatureViewController alloc] init];
        
        window.rootViewController = newFeature;
        [YZSaveTool setObject:curVersion forKey:YZVersion];
        
        
        [window makeKeyAndVisible];
    }

}

@end
