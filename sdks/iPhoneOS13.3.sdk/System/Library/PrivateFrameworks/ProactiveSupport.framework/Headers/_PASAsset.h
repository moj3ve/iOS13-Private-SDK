//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveSupport/_PASAssetProtocol-Protocol.h>

@class NSDictionary, NSString, _PASLock, _PASNotificationTracker;
@protocol OS_dispatch_queue;

@interface _PASAsset : NSObject <_PASAssetProtocol>
{
    NSString *_bundleIdentifier;
    NSDictionary *_requiredMobileAssetProperties;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _installNotificationToken;
    int _metadataNotificationToken;
    _PASNotificationTracker *_updateNotificationTracker;
    _PASLock *_lock;
    NSUInteger _compatibilityVersion;
}

@property(readonly, nonatomic) NSUInteger compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
// - (void).cxx_destruct;
- (void)callAssetUpdateHandlers;
- (void)clearOverrides;
- (void)addOverridePath:(id)arg1 forResource:(id)arg2 ofType:(id)arg3;
- (void)invokeWithBundleOverride:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (id)bundlePath;
- (void)setBundlePath:(id)arg1;
- (void)_issueUpdateNotificationsWithCallback:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_updateAssetMetadataUsingQueryResults:(id)arg1;
- (void)_updateAssetMetadata;
- (id)pathsForResourcesWithNames:(id)arg1;
- (id)pathsForResourcesWithNames:(id)arg1 assetVersion:(NSUInteger )arg2;
- (id)pathForResourceWithNameAndExtension:(struct _PASTuple2 )arg1;
- (id)pathForResourceWithNameAndExtension:(struct _PASTuple2 )arg1 assetVersion:(NSUInteger )arg2;
- (id)pathForResourceWithName:(id)arg1 extension:(id)arg2;
- (id)pathForResourceWithName:(id)arg1 extension:(id)arg2 assetVersion:(NSUInteger )arg3;
- (BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg1;
- (BOOL)deregisterUpdateHandlerWithToken:(id)arg1;
- (id)registerUpdateHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_loadDefaultBundleVersionWithGuardedData:(id)arg1;
@property(readonly, nonatomic) NSUInteger bestAssetVersionObserved;
- (id)_assetDescription;
@property(readonly, nonatomic) NSString *assetType;
@property(readonly, nonatomic) NSUInteger assetVersion;
- (void)dealloc;
- (id)init;
- (id)_initWithBundleIdentifier:(id)arg1 defaultBundlePath:(id)arg2 compatibilityVersion:(NSUInteger)arg3 matchingKeysAndValues:(id)arg4 notificationQueue:(id)arg5 enableAssetUpdates:(BOOL)arg6;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 enableAssetUpdates:(BOOL)arg5;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4;

@end

