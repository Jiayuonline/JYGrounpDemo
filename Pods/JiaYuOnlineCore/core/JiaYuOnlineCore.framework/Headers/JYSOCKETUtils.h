//
//  JYSOCKETUtils.h
//  JiaYuOnlineCore
//
//  Created by Yu, Tian on 2019/12/20.
//  Copyright © 2019 Chen.zhu. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSInteger, JYSocketState) {
    JY_CONNECTOK    = 0,    //连接成功
    JY_RECEIVEDATA  = 1,    //接收数据
    JY_CONNECTERROR = 2,    //连接失败
    JY_DISCONNECT   = 3,    //断开连接
};

NS_ASSUME_NONNULL_BEGIN

@interface JYSOCKETUtils : NSObject
/**
CONNECT
*/
+ (void)connect:(NSString *)fullUrl complete:(void(^)(NSDictionary *result, JYSocketState socketState))completeBlock;

/*
 SEND发送指令
 */
+ (void)sendDataDict:(NSDictionary *)dict;
/**
DISCONNECT
*/
+ (void)disconnect;
@end

NS_ASSUME_NONNULL_END
