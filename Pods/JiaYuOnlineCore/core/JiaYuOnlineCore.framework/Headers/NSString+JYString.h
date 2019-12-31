//
//  NSString+JYString.h
//  JiaYuOnlineCore
//
//  Created by Yu, Tian on 2019/9/17.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (JYString)

-(CGFloat)jy_heightOfFont:(UIFont *)font andMaxWidth:(CGFloat)width;

-(CGFloat)jy_widthOfFont:(UIFont *)font andMaxHeight:(CGFloat)height;

@end

NS_ASSUME_NONNULL_END
