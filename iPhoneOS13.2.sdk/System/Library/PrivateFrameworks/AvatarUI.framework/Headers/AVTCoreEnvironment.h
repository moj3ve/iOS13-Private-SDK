//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNotificationCenter, NSURL;
@protocol AVTBlockScheduler, AVTUILogger;

@interface AVTCoreEnvironment : NSObject
{
    NSURL *_storeLocation;
    NSURL *_imageStoreLocation;
    NSURL *_stickerImageStoreLocation;
    NSURL *_imageCacheStoreLocation;
    id <AVTUILogger> _logger;
    id <AVTBlockScheduler> _scheduler;
    id /* block */ _serialQueueProvider;
    id /* block */ _lockProvider;
    NSNotificationCenter *_notificationCenter;
}

+ (id)stickerImageStoreLocation;
+ (id)imageCacheStoreLocationWithError:(id *)arg1;
+ (id)imageStoreLocation;
+ (id)storeLocation;
+ (id /* block */)serialQueueProvider;
+ (id)defaultEnvironment;
+ (void)resetFlushCacheValuesIfNeeded;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, copy, nonatomic) id /* block */ lockProvider; // @synthesize lockProvider=_lockProvider;
@property(readonly, copy, nonatomic) id /* block */ serialQueueProvider; // @synthesize serialQueueProvider=_serialQueueProvider;
@property(readonly, nonatomic) id <AVTBlockScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, copy, nonatomic) NSURL *stickerImageStoreLocation;
@property(readonly, copy, nonatomic) NSURL *imageCacheStoreLocation;
@property(readonly, copy, nonatomic) NSURL *imageStoreLocation;
@property(readonly, copy, nonatomic) NSURL *storeLocation;
- (id)init;

@end
