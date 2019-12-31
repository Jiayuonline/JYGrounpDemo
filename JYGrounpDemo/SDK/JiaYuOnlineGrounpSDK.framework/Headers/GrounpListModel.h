//
//  GrounpListModel.h
//  JiaYuOnlineGrounpSDK
//
//  Created by Yu, Tian on 2019/12/30.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GrounpListModel : NSObject
//车队Id 唯一标识
@property (nonatomic, copy) NSString *motorcadeId;

//车队名称
@property (nonatomic, copy) NSString *motorcadeName;

//车队口令
@property (nonatomic, copy) NSString *motorcadeWord;

//队长头像
@property (nonatomic, copy) NSString *captainHead;

//队长昵称
@property (nonatomic, copy) NSString *captainNickname;

//车队是否活跃
@property (nonatomic, assign) BOOL active;

@end

NS_ASSUME_NONNULL_END
