//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ACAccount, NSString;

@protocol FCAppleAccount <NSObject>
@property(readonly, nonatomic) ACAccount *activeiTunesAccount;
@property(readonly, nonatomic) NSString *endpointConnectionClientID;
@property(readonly, nonatomic, getter=isUserSignedInToiCloud) BOOL userSignedInToiCloud;
@property(readonly, nonatomic, getter=isPrivateDataSyncingEnabled) BOOL privateDataSyncingEnabled;
@property(readonly, nonatomic) NSString *supportedContentStoreFrontID;
@property(readonly, nonatomic) BOOL isContentStoreFrontSupported;
@property(readonly, nonatomic) NSString *primaryLanguageCode;
@property(readonly, nonatomic) NSString *contentStoreFrontID;
@property(readonly, nonatomic) NSString *userStoreFrontID;
@property(readonly, nonatomic) NSString *DSID;
- (BOOL)isPrimaryAccountEmailAddress;
- (NSString *)currentStoreFrontID;
- (void)checkAllDevicesRunningMinimumiOSVersion:(CDStruct_912cb5d2)arg1 macOSVersion:(CDStruct_912cb5d2)arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)checkAlliOSDevicesRunningMinimumOSVersion:(CDStruct_912cb5d2)arg1 orInactiveForTimeInterval:(double)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)loadStoreFrontWithCompletionHandler:(void (^)(void))arg1;
- (NSString *)iCloudAccountDSID;
- (NSString *)iTunesAccountDSID;
- (NSString *)iTunesAccountName;
- (BOOL)isUserSignedIntoiTunes;
@end

