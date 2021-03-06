//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDBackingStoreLocal, HMDHomeManager, HMFVersion, NSMapTable, NSOperationQueue;

@interface HMDBackingStoreSingleton : HMFObject <HMFLogging>
{
    NSMapTable *_objectLookup;
    NSMapTable *_classToNameTransform;
    NSMapTable *_nameToClassTransform;
    NSMapTable *_objectPropertyHashLookup;
    HMFVersion *_dataVersion;
    HMDHomeManager *_homeManager;
    HMDBackingStoreLocal *_local;
    NSOperationQueue *_queue;
}

+ (id)logCategory;
+ (void)resetSchemaHash;
+ (void)resetClassMappings;
+ (void)setClass:(Class)arg1 forClassName:(id)arg2;
+ (id)sharedInstance;
+ (void)start;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HMDBackingStoreLocal *local; // @synthesize local=_local;
@property(readonly, nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMFVersion *dataVersion; // @synthesize dataVersion=_dataVersion;
@property(readonly, nonatomic) NSMapTable *objectPropertyHashLookup; // @synthesize objectPropertyHashLookup=_objectPropertyHashLookup;
@property(readonly, nonatomic) NSMapTable *nameToClassTransform; // @synthesize nameToClassTransform=_nameToClassTransform;
@property(readonly, nonatomic) NSMapTable *classToNameTransform; // @synthesize classToNameTransform=_classToNameTransform;
@property(readonly, nonatomic) NSMapTable *objectLookup; // @synthesize objectLookup=_objectLookup;
// - (void).cxx_destruct;
- (id)logIdentifier;
- (id)resetBackingStore;
- (id)flushBackingStore;
- (id)schemaHashForObject:(id)arg1;
- (id)init;

@end

