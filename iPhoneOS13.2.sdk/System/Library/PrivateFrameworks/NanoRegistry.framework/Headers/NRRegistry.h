//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRMutableStateParentDelegate-Protocol.h>

@class NRMutableDeviceCollection, NRReadWriteConcurrentQueue, NRSecureDevicePropertyStore, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NRRegistry : NSObject <NRMutableStateParentDelegate>
{
    NSMutableDictionary *_registryDiffObservers;
    NSMutableDictionary *_registrySecurePropertyObservers;
    struct os_unfair_lock_s _collectionLock;
    NRReadWriteConcurrentQueue *_readerWriterDispatch;
    _Bool _queueRunning;
    _Bool _supportsWatch;
    NRMutableDeviceCollection *_collection;
    NRSecureDevicePropertyStore *_secureProperties;
    NSObject<OS_dispatch_queue> *_managementQueue;
    NRMutableDeviceCollection *_queueCollection;
}

+ (int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(id /* block */)arg3;
+ (unsigned long long)readNotifyToken:(int)arg1;
+ (void)fixSecurePropertiesWithCollection:(id)arg1 secureProperties:(id)arg2 insecurePropertyNames:(id)arg3;
+ (id)getReferencedSecureProperties:(id)arg1 fromDiff:(id)arg2;
+ (id)getReferencedSecurePropertyIDsFromDiff:(id)arg1;
+ (id)_nextToken;
+ (_Bool)_supportsWatch;
@property(retain, nonatomic) NRMutableDeviceCollection *queueCollection; // @synthesize queueCollection=_queueCollection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *managementQueue; // @synthesize managementQueue=_managementQueue;
- (void)_notifyObserversSecurePropertiesAreAvailableWithCollection:(id)arg1 secureProperties:(id)arg2;
- (void)child:(id)arg1 didApplyDiff:(id)arg2;
- (void)invalidate;
- (void)removeSecurePropertiesObserver:(id)arg1;
- (id)addSecurePropertiesObserverWithReadBlock:(id /* block */)arg1;
- (void)_notifyDiffObserversWithDiff:(id)arg1 deviceCollection:(id)arg2 secureProperties:(id)arg3;
- (void)removeDiffObserver:(id)arg1;
- (id)addDiffObserverWithWriteBlock:(id /* block */)arg1;
- (void)grabRegistryWithWriteBlockAsync:(id /* block */)arg1;
- (void)grabRegistryWithReadBlockAsync:(id /* block */)arg1;
- (void)grabRegistryWithReadBlock:(id /* block */)arg1;
- (void)enqueueForWriteAsync:(id /* block */)arg1 bypassSuspend:(_Bool)arg2;
- (void)enqueueForReadAsync:(id /* block */)arg1 bypassSuspend:(_Bool)arg2;
- (void)enqueueForRead:(id /* block */)arg1 bypassSuspend:(_Bool)arg2;
- (void)enqueueForWriteAsync:(id /* block */)arg1;
- (void)enqueueForReadAsync:(id /* block */)arg1;
- (void)enqueueForRead:(id /* block */)arg1;
- (_Bool)enqueueForReadUnlessSuspended:(id /* block */)arg1;
- (_Bool)supportsWatch;
@property(retain, nonatomic) NRSecureDevicePropertyStore *secureProperties; // @synthesize secureProperties=_secureProperties;
- (void)_startQueue;
@property(retain, nonatomic) NRMutableDeviceCollection *collection; // @synthesize collection=_collection;
- (void)performUnderCollectionLock:(id /* block */)arg1;
- (id)initWithParameters:(id)arg1;
- (id)init;
- (void)syncGrabRegistryWithWriteBlock:(id /* block */)arg1;
- (void)syncGrabRegistryWithReadBlock:(id /* block */)arg1;

@end
