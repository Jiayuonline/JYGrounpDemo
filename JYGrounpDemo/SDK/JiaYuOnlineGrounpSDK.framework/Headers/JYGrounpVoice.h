//
//  JYGrounpVoice.h
//  JiaYuOnlineGrounpSDK
//
//  Created by Yu, Tian on 2019/9/29.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class JYGrounpVoice;
@protocol JYGrounpVoiceDelegate <NSObject>

@optional
/**
 语音,地点连接成功
 @param voice 实例
 */
- (void)jy_connectSuccessWithVoice:(JYGrounpVoice *)voice;

/**
 语音,地点连接失败
 */
- (void)jy_connectFailWithVoice:(NSError *)error;

@end

@interface JYGrounpVoice : NSObject

@property (nonatomic, weak) id<JYGrounpVoiceDelegate> delegate;

#pragma mark - 方法
//唯一实例
+ (instancetype)sharedInstance;
/// 加入车队群聊
/// @param roomToken 车队详情里拿
+ (void)joinRoomWithToken:(NSString *)roomToken;

/// 离开车队群聊
+ (void)leaveRoom;

/// 是否将声音从扬声器输出
/// @param speakerOn YES代表从扬声器输出，默认YES
+ (void)setSpeakerOn:(BOOL)speakerOn;

/// 将本地音频置为 静音 状态
/// @param muted YES代表静音
+ (void)muteAudio:(BOOL)muted;

/// 将远程音频置为 静音 状态
/// @param muted YES代表静音
+ (void)muteRemoteAudio:(BOOL)muted;

/// 发布本地音频到服务器  需在连接成功后才有效
+ (void)publishAudio;

/// 取消发布本地的音频
+ (void)unpublishAudio;

@end

NS_ASSUME_NONNULL_END
