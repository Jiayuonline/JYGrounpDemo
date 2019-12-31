//
//  UIButton+JYButton.h
//  JiaYuOnlineCore
//
//  Created by Yu, Tian on 2019/9/17.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (JYButton)

/**
 创建图片按钮
 */
+(instancetype)jy_imageButtonWithImage:(UIImage *)img andHighLightedImage:(UIImage *)img2;

/**
 创建图片按钮
 */
+(instancetype)jy_imageButtonWithImageName:(NSString *)imgName andHighLightedImageName:(NSString *)imgName2;

@end

NS_ASSUME_NONNULL_END
