//
//  GrounpDetailModel.h
//  JiaYuOnlineGrounpSDK
//
//  Created by Yu, Tian on 2019/12/30.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GrounpDetailModel : NSObject
//车队名称
@property (nonatomic, copy) NSString *motorcadeName;

//车队口令
@property (nonatomic, copy) NSString *motorcadeWord;

//语音房间标识
@property (nonatomic, copy) NSString *roomToken;
@end

NS_ASSUME_NONNULL_END
