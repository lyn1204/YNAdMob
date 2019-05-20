//
//  YNAdMobInterstitial.h
//  YNADTest
//
//  Created by 刘艳妮 on 2019/5/15.
//  Copyright © 2019 CallShow. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YNAdMobInterstitial : NSObject

+(YNAdMobInterstitial*)shareInstance;

/**
 * @brief 添加谷歌插屏广告
 * AdUnitID : 广告id
 */
-(void)addInterstitialAD:(NSString *)AdUnitID;

@end

NS_ASSUME_NONNULL_END
