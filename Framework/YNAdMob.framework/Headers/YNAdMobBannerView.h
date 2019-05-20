//
//  YNAdMobBannerView.h
//  YNADTest
//
//  Created by 刘艳妮 on 2019/5/15.
//  Copyright © 2019 CallShow. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YNAdMobBannerView : NSObject

+(YNAdMobBannerView*)shareInstance;

/**
 * @brief 添加谷歌插屏广告
 * AdUnitID : 广告id
 * rootViewController : 展示广告的根视图
 * attribute : 广告在根视图展示的位置
 */
-(void)addBannerAdUnitID:(NSString *)AdUnitID rootViewController:(UIViewController *)rootViewController attribute:(NSLayoutAttribute)attribute;

@end

NS_ASSUME_NONNULL_END
