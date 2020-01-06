//
//  SocketModel.h
//  JiaYuOnlineGrounpSDK
//
//  Created by Yu, Tian on 2019/12/30.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class LocationModel;
@interface SocketModel : NSObject
/*
 位置模型
 */
@property (nonatomic, strong) LocationModel *locationModel;

/*
 根据Type类型
 0 可为空
 1 可为空
 2 目的地名
 3
 */
@property (nonatomic, copy) NSString *msg;
/*
 0 暂无消息
 1 位置共享
 2 队长发送目的地
 3 普通文字消息
 */
@property (nonatomic, assign) NSInteger type;

@end


@interface LocationModel : NSObject

/*
 纬度
 */
@property (nonatomic, assign) double latitude;

/*
 纬度
 */
@property (nonatomic, assign) double longitude;

@end
NS_ASSUME_NONNULL_END
