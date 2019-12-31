//
//  JYLogger.h
//  JiaYuOnlineCore
//
//  Created by Yu, Tian on 2019/8/26.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JYLogger : NSObject

+(void)log:(NSString *)format,...;

@end

NS_ASSUME_NONNULL_END
