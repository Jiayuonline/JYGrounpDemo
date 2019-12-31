//
//  JYCore.h
//  JiaYuOnlineCore
//
//  Created by Yu, Tian on 2019/9/17.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#ifndef JYCore_h
#define JYCore_h

#endif /* JYCore_h */

#define jy_weakSelf __weak typeof(self) weakSelf = self;

#define checkSystemVer(float) @available(iOS float, *)

#define StatusBarH [[UIApplication sharedApplication] statusBarFrame].size.height
#define NavBarH 44
#define Nav_StatusBarH (StatusBarH + NavBarH)

#define ScreenW [UIScreen mainScreen].bounds.size.width
#define ScreenH [UIScreen mainScreen].bounds.size.height

#define ScreenScale [[UIScreen mainScreen] scale]

#define iphone5 (ScreenH == 568 && ScreenScale == 2.0)
#define iphone6 (ScreenH == 667 && ScreenScale == 2.0)
#define iphone6P (ScreenH == 736 && ScreenScale == 3.0)
#define iphoneX (ScreenH == 812 && ScreenScale == 3.0)
#define iphoneXS_Max (ScreenH == 896 && ScreenScale == 3.0)
#define iphoneXR (ScreenH == 896 && ScreenScale == 2.0)
#define isIphoneFull (iphoneX || iphoneXS_Max || iphoneXR)

#define TabBarH (isIphoneFull?83:49)
#define TopMargin (isIphoneFull?44:20)
#define BottomMargin (isIphoneFull?34:0)

#import <JiaYuOnlineCore/JYLogger.h>

#define jy_performSelector(Stuff) \
do { \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
Stuff; \
_Pragma("clang diagnostic pop") \
} while (0);
