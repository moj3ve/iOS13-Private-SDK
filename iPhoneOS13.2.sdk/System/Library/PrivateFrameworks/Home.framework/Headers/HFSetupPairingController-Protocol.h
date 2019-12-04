//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HFDiscoveredAccessory, HFSetupAccessoryResult, HFSetupPairingContext, HMAccessorySetupCompletedInfo, HMHome, NAFuture, NSSet, NSString;
@protocol HFSetupPairingObserver;

@protocol HFSetupPairingController 
+ (_Bool)supportsSetupPayloadRetry;
@property(readonly, nonatomic) HMAccessorySetupCompletedInfo *completedInfo;
@property(readonly, nonatomic) HFDiscoveredAccessory *discoveredAccessoryToPair;
@property(readonly, nonatomic) NSString *statusDescription;
@property(readonly, nonatomic) NSString *statusTitle;
@property(readonly, nonatomic) unsigned long long phase;
@property(readonly, nonatomic) HMHome *home;
@property(retain, nonatomic) HFSetupAccessoryResult *setupResult;
@property(readonly, nonatomic) HFSetupPairingContext *context;
- (NSSet *)pairedAccessories;
- (NAFuture *)cancel;
- (void)startWithHome:(HMHome *)arg1;
- (void)removePairingObserver:(id <HFSetupPairingObserver>)arg1;
- (void)addPairingObserver:(id <HFSetupPairingObserver>)arg1;
@end
