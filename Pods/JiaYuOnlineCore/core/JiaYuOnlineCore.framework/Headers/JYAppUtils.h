//
//  JYAppUtils.h
//  JiaYuOnlineCore
//
//  Created by Yu, Tian on 2019/9/17.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JYAppUtils : NSObject

/**
 获取APP名称
 */
+(NSString *)jy_getAPPName;

/**
 获取appd版本号
 */
+(NSString *)jy_getAPPVersion;

/**
 跳转AppStore详情页面
 */
+(void)jy_jump2AppStore_APPinfoWithAppid:(NSString *)appId;

/**
 跳转AppStore打分页面
 */
+(void)jy_jump2AppStore_APPCommentWithAppid:(NSString *)appId;

/**
 获取当前控制器
 */
+(UIViewController *)jy_getCurrentViewController;

@end

NS_ASSUME_NONNULL_END
