//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface APSMultiUserMode : NSObject
{
    BOOL _isMultiUser;
    BOOL _isLoggedInUser;
}

+ (BOOL)_getIsCurrentlyLoggedIn;
+ (BOOL)_getMultiUserMode;
+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL isLoggedInUser; // @synthesize isLoggedInUser=_isLoggedInUser;
@property(readonly, nonatomic) BOOL isMultiUser; // @synthesize isMultiUser=_isMultiUser;
- (BOOL)isMultiAndLoggedIn;
- (id)initWithIsMultiUserMode:(BOOL)arg1 loggedInUser:(BOOL)arg2;

@end

