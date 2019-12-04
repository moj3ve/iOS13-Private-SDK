//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@interface FBSystemShellInitializationOptions : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _initializeReadyForInteraction;
    _Bool _isLegacyFBSystemApp;
    _Bool _shouldWaitForMigrator;
    _Bool _resetDarkBootState;
    double _systemSleepInterval;
    id /* block */ _registerServicesBlock;
    id /* block */ _registerPostCheckInPreServiceInitializationCallbackBlock;
    id /* block */ _registerLegacyPostInitCallbackBlock;
}

@property(readonly, copy, nonatomic) id /* block */ _registerLegacyPostInitCallbackBlock; // @synthesize _registerLegacyPostInitCallbackBlock;
@property(readonly, copy, nonatomic) id /* block */ _registerPostCheckInPreServiceInitializationCallbackBlock; // @synthesize _registerPostCheckInPreServiceInitializationCallbackBlock;
@property(readonly, nonatomic) _Bool _isLegacyFBSystemApp; // @synthesize _isLegacyFBSystemApp;
@property(readonly, copy, nonatomic) id /* block */ registerAdditionalServicesBlock; // @synthesize registerAdditionalServicesBlock=_registerServicesBlock;
@property(readonly, nonatomic) double systemSleepInterval; // @synthesize systemSleepInterval=_systemSleepInterval;
@property(readonly, nonatomic) _Bool shouldWaitForMigrator; // @synthesize shouldWaitForMigrator=_shouldWaitForMigrator;
@property(readonly, nonatomic) _Bool resetDarkBootState; // @synthesize resetDarkBootState=_resetDarkBootState;
@property(readonly, nonatomic) _Bool initializeReadyForInteraction; // @synthesize initializeReadyForInteraction=_initializeReadyForInteraction;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)_initWithOptions:(id)arg1;

@end
