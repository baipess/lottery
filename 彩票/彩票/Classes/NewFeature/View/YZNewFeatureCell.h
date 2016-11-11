//
//  YZNewFeatureCell.h
//  彩票
//
//  Created by xiaochen on 15/6/28.
//  Copyright (c) 2015年 xiaochen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YZNewFeatureCell : UICollectionViewCell

@property (nonatomic, strong) UIImage *image;

- (void)setIndexPath:(NSIndexPath *)indexPath count:(int)count;

@end
