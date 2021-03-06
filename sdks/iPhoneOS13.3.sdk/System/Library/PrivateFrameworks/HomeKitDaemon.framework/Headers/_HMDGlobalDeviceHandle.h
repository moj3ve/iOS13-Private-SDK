//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/_HMDDeviceHandle.h>

@class HMDAccountHandle, NSData;

@interface _HMDGlobalDeviceHandle : _HMDDeviceHandle
{
    HMDAccountHandle *_accountHandle;
    NSData *_pushToken;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isValidDestination:(id)arg1;
@property(readonly, copy) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(readonly, copy) HMDAccountHandle *accountHandle; // @synthesize accountHandle=_accountHandle;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)destination;
- (BOOL)isGlobal;
- (id)privateDescription;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithDestination:(id)arg1;
- (id)initWithPushToken:(id)arg1 accountHandle:(id)arg2;

@end

