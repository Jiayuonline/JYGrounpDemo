//
//  UIView+JYView.h
//  JiaYuOnlineCore
//
//  Created by Yu, Tian on 2019/9/17.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#import <UIKit/UIKit.h>

#define W(float) [UIView getViewSize:float]
#define H(float) [UIView getViewSize:float]
#define F(float) [UIView getViewSize:float]

NS_ASSUME_NONNULL_BEGIN

@interface UIView (JYView)

@property CGFloat jy_width;
@property CGFloat jy_height;
@property CGFloat jy_x;
@property CGFloat jy_y;
@property CGFloat jy_centerX;
@property CGFloat jy_centerY;

#pragma mark 添加阴影
/**
 添加阴影
 */
-(void)jy_addShadowWithColor:(nullable UIColor *)shadowColor andOffset:(CGSize)offset andRadius:(CGFloat) radius andOpacity:(CGFloat) opacity;

#pragma mark 获取屏幕适配后的长度
/**
 获取屏幕适配后的长度
 */
+(CGFloat)getViewSize:(CGFloat) f;

#pragma mark 添加点击事件
/**
 添加点击事件
 */
-(void)jy_addActionWithTarget:(id)target action:(SEL)action;

#pragma mark 获取View在屏幕中的frame
/**
 获取View在屏幕中的frame
 */
-(CGRect)jy_getScreenLocation;

#pragma mark 设置背景图片
/**
 设置背景图片
 */
-(void)jy_setBackgroundImage:(UIImage *)image;

#pragma mark 获取指定类型的父View
/**
 获取指定类型的父View
 */
-(nullable UIView *)jy_getSuperViewWithClass:(Class)targetClass;

#pragma mark 获取当前View所在的控制器
/**
 获取当前View所在的控制器
 */
- (UIViewController *)jy_controllerWithView;

@end

NS_ASSUME_NONNULL_END
