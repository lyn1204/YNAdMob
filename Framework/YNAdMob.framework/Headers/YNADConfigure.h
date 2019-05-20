//
//  YNADConfigure.h
//  YNADTest
//
//  Created by 刘艳妮 on 2019/5/15.
//  Copyright © 2019 CallShow. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YNADConfigure : NSObject

/**
 * 初始化ADMob
 * 注: 需要在引用项目plist文件中添加
 <key>GADApplicationIdentifier</key>
 <string>你自己的谷歌应用ID</string>
 */
+(void)configureGoogleMobileAds;

@end

NS_ASSUME_NONNULL_END
