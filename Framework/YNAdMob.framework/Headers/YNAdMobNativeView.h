//
//  YNAdMobNativeView.h
//  YNADTest
//
//  Created by 刘艳妮 on 2019/5/15.
//  Copyright © 2019 CallShow. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YNAdMobNativeView : UIView

/**
 * @brief 原生广告初始化
 * viewController : 原生广告展示的rootViewController
 * AdUnitID : 广告id
 */
-(instancetype)initWithFrame:(CGRect)frame viewController:(UIViewController *)vc AdUnitID:(NSString *)AdUnitID;


/**
 * @brief 修改界面配置
 * backgroundColor : 广告背景色
 * headTextColor : Headline View 文本颜色
 * bodyTextColor : Body View 文本颜色
 * actionTextColor : Call To Action View 文本颜色
 * actionBackgroudColor : Call To Action View 背景色
 */
-(void)setBackgroundColor:(UIColor *_Nullable)backgroundColor headTextColor:(UIColor *_Nullable)headTextColor bodyTextColor:(UIColor *_Nullable)bodyTextColor actionTextColor:(UIColor *_Nullable)actionTextColor actionBackgroudColor:(UIColor *_Nullable)actionBackgroudColor;

@end

NS_ASSUME_NONNULL_END
