//
//  GrounpTeammateModel.h
//  JiaYuOnlineGrounpSDK
//
//  Created by Yu, Tian on 2019/12/30.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GrounpTeammateModel : NSObject

//是否是队长
@property (nonatomic, assign) BOOL teamLeader;
//是否在线
@property (nonatomic, assign) BOOL online;
//头像
@property (nonatomic, copy) NSString *headImg;
//昵称
@property (nonatomic, copy) NSString *nikeName;

@end

NS_ASSUME_NONNULL_END
