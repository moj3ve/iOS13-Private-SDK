//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSBundle.h>

@class NSArray, NSDictionary, NSString;

@interface NSBundle (WFEntitlements)
@property(readonly, nonatomic, getter=wf_keychainAccessGroups) NSArray *keychainAccessGroups;
@property(readonly, nonatomic, getter=wf_applicationGroups) NSArray *applicationGroups;
@property(readonly, nonatomic, getter=wf_apsEnvironment) NSString *apsEnvironment;
@property(readonly, nonatomic, getter=wf_teamIdentifier) NSString *teamIdentifier;
@property(readonly, nonatomic, getter=wf_entitlements) NSDictionary *entitlements;
@end

