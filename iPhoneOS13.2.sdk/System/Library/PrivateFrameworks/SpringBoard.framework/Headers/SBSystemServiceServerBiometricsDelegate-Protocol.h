//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSystemServiceServerDelegate-Protocol.h>

@class SBSystemServiceServer;
@protocol FBSServiceFacilityClientHandle;

@protocol SBSystemServiceServerBiometricsDelegate <SBSystemServiceServerDelegate>
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 fetchUnlockCredentialSet:(void (^)(NSData *))arg3;
@end
