//
//  UILabel+JYLabel.h
//  JiaYuOnlineCore
//
//  Created by Yu, Tian on 2019/9/17.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UILabel (JYLabel)

/**
 快速创建一个Label
 */
+(instancetype)jy_labelWithText:(NSString *)text textColor:(UIColor *)textColor font:(UIFont *)font;

/**
 设置行高
 */
-(void)jy_setLineHeight:(CGFloat)lineHeight;

@end

NS_ASSUME_NONNULL_END
