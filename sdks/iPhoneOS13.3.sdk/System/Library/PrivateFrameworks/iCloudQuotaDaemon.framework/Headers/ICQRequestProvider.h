//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount;

@interface ICQRequestProvider : NSObject
{
    ACAccount *_account;
}

+ (id)stringTimeOfLastBackup;
+ (void)addEntriesToPostDictionary:(id)arg1 forStub:(id)arg2;
+ (BOOL)attemptSetRequest:(id)arg1 toPostWithJSONDict:(id)arg2;
// - (void).cxx_destruct;
- (void)addCommonHeadersToRequest:(id)arg1;
- (id)urlForQuotaKey:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end

