//
//  AppDelegate.m
//  JYGrounpDemo
//
//  Created by Yu, Tian on 2019/12/31.
//  Copyright © 2019 Chen.zhu. All rights reserved.
//

#import "AppDelegate.h"
#import <JiaYuOnlineCore/JiaYuOnlineCore.h>
@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    [JYEngine jy_initWithAccessKey:@"7b51de35ba4f465a81c48af594df38e1" andAccessSecret:@"56cbaf232dbd48d9b6b7b88760b5784e" andChannel:@"taotutu" andDebugMode:YES];

    return YES;
}


#pragma mark - UISceneSession lifecycle


- (UISceneConfiguration *)application:(UIApplication *)application configurationForConnectingSceneSession:(UISceneSession *)connectingSceneSession options:(UISceneConnectionOptions *)options {
    // Called when a new scene session is being created.
    // Use this method to select a configuration to create the new scene with.
    return [[UISceneConfiguration alloc] initWithName:@"Default Configuration" sessionRole:connectingSceneSession.role];
}


- (void)application:(UIApplication *)application didDiscardSceneSessions:(NSSet<UISceneSession *> *)sceneSessions {
    // Called when the user discards a scene session.
    // If any sessions were discarded while the application was not running, this will be called shortly after application:didFinishLaunchingWithOptions.
    // Use this method to release any resources that were specific to the discarded scenes, as they will not return.
}


@end
