//
//  JySocketUtils.h
//  JiaYuOnlineGrounpSDK
//
//  Created by Yu, Tian on 2019/12/20.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, JYMotorcadeSocketState) {
    JY_CONNECTOK    = 0,    //连接成功
    JY_RECEIVEDATA  = 1,    //接收数据
    JY_CONNECTERROR = 2,    //连接失败
    JY_DISCONNECT   = 3,    //断开连接
};

@class SocketModel;
@class JYSOCKETUtils;



@interface JySocketUtils : NSObject

//连接
+ (void)connectWithMid:(NSString *)mid complete:(void(^)(NSDictionary * _Nonnull result, JYMotorcadeSocketState socketState))completeBlock;

//发送指令
+ (void)sendData:(SocketModel *)socket;

//断开连接
+ (void)disconnect;

@end

NS_ASSUME_NONNULL_END
