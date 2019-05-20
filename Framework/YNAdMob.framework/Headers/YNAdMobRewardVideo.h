//
//  YNAdMobRewardVideo.h
//  YNADTest
//
//  Created by 刘艳妮 on 2019/5/15.
//  Copyright © 2019 CallShow. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YNAdMobRewardVideoDelegate <NSObject>

/**
 * @brief 激励视频播放完成是否能给用户发放激励
 * willReward : YES:发放激励  NO:不发放
 */
-(void)YNAdMobRewardVideoWillRewardUserWithReward:(BOOL)willReward;

@end

@interface YNAdMobRewardVideo : NSObject

@property(weak,nonatomic) id<YNAdMobRewardVideoDelegate> delegate;

+(YNAdMobRewardVideo*)shareInstance;


/**
 * @brief 预加载激励视频
 * AdUnitID : 广告id
 */
-(void)preloadRewardVideowithAdUnitID:(NSString *)AdUnitID;


/**
 * @brief 显示激励视频
 * complateBlock : 是否正常展示
 */
-(void)showRewardVideo:(void (^)(BOOL success))complateBlock;

@end

NS_ASSUME_NONNULL_END
