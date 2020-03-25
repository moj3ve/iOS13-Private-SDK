//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString;

@interface SAUserActivity : SADomainObject
{
}

+ (id)userActivityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)userActivity;
@property(nonatomic) BOOL isEligibleForSearch;
@property(nonatomic) BOOL isEligibleForReminders;
@property(nonatomic) BOOL isEligibleForPublicIndexing;
@property(nonatomic) BOOL isEligibleForHandoff;
@property(nonatomic) BOOL isEligibleForDirections;
@property(nonatomic) BOOL isEligibleForAppPunchout;
@property(copy, nonatomic) NSString *internalGUID;
@property(copy, nonatomic) NSArray *eligibileFunctions;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
