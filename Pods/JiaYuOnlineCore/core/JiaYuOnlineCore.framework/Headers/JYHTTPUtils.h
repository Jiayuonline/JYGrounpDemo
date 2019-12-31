//
//  JYHTTPUtils.h
//  JiaYuOnlineCore
//
//  Created by Yu, Tian on 2019/9/17.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^JYSuccess)(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject);
typedef void (^JYFail)(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error);


@interface JYHTTPUtils : NSObject

/**
 Get请求
 */
+(NSURLSessionDataTask *)GET:(NSString *)baseUrl
                  parameters:(NSDictionary *)params
                      header:(nullable NSDictionary <NSString *, NSString *> *)header
                     success:(JYSuccess)success
                     failure:(JYFail)fail;

/**
 Post方法
 */
+(NSURLSessionDataTask *)POST:(NSString *)baseUrl
                   parameters:(NSDictionary *)params
                       header:(nullable NSDictionary <NSString *, NSString *> *) header
                      success:(JYSuccess)success
                      failure:(JYFail)fail;

/**
 PUT方法
 */
+(NSURLSessionDataTask *)PUT:(NSString *)baseUrl
                  parameters:(NSDictionary *)params
                      header:(nullable NSDictionary <NSString *, NSString *> *)header
                     success:(JYSuccess)success
                     failure:(JYFail)fail;

/**
 DELETE
 */
+(NSURLSessionDataTask *)DELETE:(NSString *)baseUrl
                     parameters:(nullable NSDictionary *)params
                        headers:(nullable NSDictionary <NSString *,NSString *> *)header
                        success:(JYSuccess)success
                        failure:(JYFail)fail;

@end

NS_ASSUME_NONNULL_END
