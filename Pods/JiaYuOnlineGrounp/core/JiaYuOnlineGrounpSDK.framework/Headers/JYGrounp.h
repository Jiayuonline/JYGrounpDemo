//
//  JYGrounp.h
//  JiaYuOnlineGrounpSDK
//
//  Created by Yu, Tian on 2019/9/24.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class GrounpListModel;
@class GrounpDetailModel;
@class GrounpTeammateModel;
@class GrounpFriendModel;
@interface JYGrounp : NSObject

#pragma mark - 车队
#pragma mark -- 创建车队
/// 创建车队
/// @param name 车队名称
/// @param completeBlock 结果回调
+ (void)createWithName:(NSString *)name complete:(void(^)(BOOL isSuccess))completeBlock;

#pragma mark --  车队详情
/// 车队详情
/// @param mid 车队id
/// @param completeBlock 结果回调
+ (void)getMotorcadeWithMid:(NSString *)mid complete:(void(^)(BOOL isSuccess,  GrounpDetailModel * _Nullable detailModel,  NSError * _Nullable  error))completeBlock;

#pragma mark -- 更改车队名称
/// 更改车队名称
/// @param motorcadeWord 车队口令
/// @param motorcadeName 新车队名
/// @param completeBlock 结果回调
+ (void)editMotorcadeNameWithMotorcadeWord:(NSString *)motorcadeWord
                          andMotorcadeName:(NSString *)motorcadeName
                                  complete:(void(^)(BOOL isSuccess))completeBlock;

#pragma mark -- 加入车队
/// 加入车队
/// @param motorcadeWord 车队口令
/// @param completeBlock 结果回调
+ (void)joinMotorcadeWithMotorcadeWord:(NSString *)motorcadeWord
                              complete:(void(^)(BOOL isSuccess))completeBlock;

#pragma mark -- 所在车队列表
/// 所在车队列表
/// @param completeBlock 结果回调
+ (void)getMotorcadeList:(void(^)(BOOL isSuccess, NSMutableArray <GrounpListModel *> * _Nullable motorcadeList, NSError * _Nullable error))completeBlock;

#pragma mark -- 退出车队
/// 退出车队
/// @param mid 车队id
/// @param completeBlock 结果回调
+ (void)quitMotorcadeWithMid:(NSString *)mid
                    complete:(void(^)(BOOL isSuccess))completeBlock;

#pragma mark - 车队人员
#pragma mark -- 添加人员
/// 添加人员
/// @param mid 车队id
/// @param uid 用户id
/// @param completeBlock 结果回调
+ (void)addMotorcadeMemberWithMid:(NSString *)mid
                           andUid:(NSString *)uid
                         complete:(void(^)(BOOL isSuccess))completeBlock;
#pragma mark -- 队友列表
/// 队友列表
/// @param mid 车队id
/// @param completeBlock  结果回调
+ (void)getMotorcadeUserListWithMid:(NSString *)mid
                           complete:(void(^)(BOOL isSuccess, NSMutableArray <GrounpTeammateModel *> * _Nullable teammateList, NSError * _Nullable error))completeBlock;

#pragma mark -- 车队好友列表
/// 车队好友列表
/// @param completeBlock 结果回调
+ (void)getMotorcadeFriendList:(void(^)(BOOL isSuccess, NSMutableArray <GrounpFriendModel *> * _Nullable friendList, NSError * _Nullable error))completeBlock;

@end

NS_ASSUME_NONNULL_END
