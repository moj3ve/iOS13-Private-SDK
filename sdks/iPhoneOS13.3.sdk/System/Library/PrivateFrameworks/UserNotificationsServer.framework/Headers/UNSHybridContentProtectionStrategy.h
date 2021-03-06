//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/UNSContentProtectionStrategy-Protocol.h>

@class NSString, UNSAtomicDataContentProtectionStrategy, UNSFileHandleContentProtectionStrategy;
@protocol UNSHybridContentProtectionStrategyDelegate;

@interface UNSHybridContentProtectionStrategy : NSObject <UNSContentProtectionStrategy>
{
    id <UNSHybridContentProtectionStrategyDelegate> _delegate;
    NSString *_minimumProtection;
    BOOL _needsMerge;
    UNSAtomicDataContentProtectionStrategy *_protectedContentAvailableStrategy;
    UNSFileHandleContentProtectionStrategy *_protectedContentUnavailableStrategy;
}

// - (void).cxx_destruct;
- (BOOL)_mergeIsSupported;
- (id)_strategyForProtectionState;
- (void)importDataWithImportHandler:(id /* CDUnknownBlockType */)arg1;
- (void)migrateDataAtPath:(id)arg1 toPath:(id)arg2;
- (BOOL)removeItemAtPath:(id)arg1 error:(id )arg2;
- (BOOL)writeData:(id)arg1 atPath:(id)arg2 error:(id )arg3;
- (id)dataAtPath:(id)arg1;
- (BOOL)dataIsAvailableAtPath:(id)arg1;
- (BOOL)isProtectedDataAvailable;
- (id)initWithFileProtectionType:(id)arg1 delegate:(id)arg2;

@end

