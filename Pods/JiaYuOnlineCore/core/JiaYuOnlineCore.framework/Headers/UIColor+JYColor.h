//
//  UIColor+JYColor.h
//  JiaYuOnlineCore
//
//  Created by Yu, Tian on 2019/9/17.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (JYColor)

/**
 颜色转换：（以#开头）十六进制的颜色转换为UIColor(RGB)
 */
+ (UIColor *)jy_colorWithHexString: (NSString *)color;

/**
 颜色转换：RGBA色号
 */
+ (UIColor *)jy_colorWithRed:(float)r green:(float)g blue:(float)b alpha:(float)a;

@end

NS_ASSUME_NONNULL_END
