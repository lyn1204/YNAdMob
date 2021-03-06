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

/**
 * @brief 激励视频是否请求成功
 * willReward : YES:请求成功  NO:请求失败
 */
-(void)YNAdMobRewardVideoDidLoad:(BOOL)success;

@end

@interface YNAdMobRewardVideo : NSObject

@property(weak,nonatomic) id<YNAdMobRewardVideoDelegate> delegate;

+(YNAdMobRewardVideo*)shareInstance;


/**
 * @brief 显示激励视频
 * AdUnitID : 广告id
 */
-(void)showRewardVideowithAdUnitID:(NSString *)AdUnitID;


@end

NS_ASSUME_NONNULL_END
