//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@interface HMDWHAAccessControlEvent : HMDLogEvent <HMDAWDLogEvent>
{
    BOOL _isP2PEnabled;
    BOOL _isPasswordSet;
    int _privilegeLevel;
}

+ (int)awdUserPrivilegeFromHMUserPrivilege:(long long)arg1;
+ (id)eventWithP2PEnabled:(BOOL)arg1 privilegeLevel:(long long)arg2 passwordSet:(BOOL)arg3;
+ (id)uuid;
+ (void)initialize;
@property(nonatomic) BOOL isPasswordSet; // @synthesize isPasswordSet=_isPasswordSet;
@property(nonatomic) int privilegeLevel; // @synthesize privilegeLevel=_privilegeLevel;
@property(nonatomic) BOOL isP2PEnabled; // @synthesize isP2PEnabled=_isP2PEnabled;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

@end

