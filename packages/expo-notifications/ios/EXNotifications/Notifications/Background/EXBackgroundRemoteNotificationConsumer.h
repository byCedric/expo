// Copyright 2021-present 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>
#import <UMTaskManagerInterface/UMTaskConsumerInterface.h>

NS_ASSUME_NONNULL_BEGIN

@interface EXBackgroundRemoteNotificationConsumer : NSObject <UMTaskConsumerInterface>

@property (nonatomic, strong) id<UMTaskInterface> task;

@end

NS_ASSUME_NONNULL_END
