//
//  YNAdMobInterstitial.h
//  YNADTest
//
//  Created by 刘艳妮 on 2019/5/15.
//  Copyright © 2019 CallShow. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YNAdMobInterstitialDelegate <NSObject>

/**
 * @brief 插屏是否请求成功
 * willReward : YES:请求成功  NO:请求失败
 */
-(void)YNAdMobInterstitialDidLoad:(BOOL)success;

/**
 * @brief 插屏广告是否关闭
 * close : YES:关闭  NO:未关闭
 */
-(void)YNAdMobInterstitialWillClose:(BOOL)willReward;

@end

@interface YNAdMobInterstitial : NSObject

@property(assign,nonatomic) id<YNAdMobInterstitialDelegate> delegate;

+(YNAdMobInterstitial*)shareInstance;

/**
 * @brief 添加谷歌插屏广告
 * AdUnitID : 广告id
 */
-(void)addInterstitialAD:(NSString *)AdUnitID;

@end

NS_ASSUME_NONNULL_END
