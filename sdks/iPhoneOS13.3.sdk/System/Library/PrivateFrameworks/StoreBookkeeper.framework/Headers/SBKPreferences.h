//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBKPreferences : NSObject
{
}

+ (id)storeBookkeeperPreferences;
- (BOOL)boolForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1 withDefaultValue:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)registerDefaultsIfKeyNotSet:(id)arg1 registrationBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_preferencesDidChange;
- (void)dealloc;
- (id)init;

@end
