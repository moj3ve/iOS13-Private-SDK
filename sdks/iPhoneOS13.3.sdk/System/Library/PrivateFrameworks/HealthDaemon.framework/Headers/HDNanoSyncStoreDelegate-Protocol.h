//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HDNanoSyncStore, NSString;

@protocol HDNanoSyncStoreDelegate <NSObject>
@property(readonly, nonatomic) BOOL isMaster;
- (void)nanoSyncStore:(HDNanoSyncStore *)arg1 deviceNameDidChange:(NSString *)arg2;
- (void)nanoSyncStore:(HDNanoSyncStore *)arg1 restoreStateDidChange:(long long)arg2;
- (void)nanoSyncStore:(HDNanoSyncStore *)arg1 remoteSystemBuildVersionDidChange:(NSString *)arg2;
@end

