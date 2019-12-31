//
//  JYEngine.h
//  JiaYuOnlineCore
//
//  Created by Yu, Tian on 2019/7/31.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JYEngine : NSObject


/**
 设置参数
 @param key accessKey
 @param secret accessSecret
 @param channel 渠道名称
 @param debug 调试模式
 */
+(void)jy_initWithAccessKey:(NSString *)key andAccessSecret:(NSString *)secret andChannel:(NSString *)channel andDebugMode:(BOOL)debug;

/**
 给当前设备设置别名，用于做用户统一
 @param alias 别名
 */
+(void)jy_setAlias:(NSString *)alias;

@end

NS_ASSUME_NONNULL_END
