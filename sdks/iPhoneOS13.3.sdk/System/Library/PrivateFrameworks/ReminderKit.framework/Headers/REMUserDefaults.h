//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSUserDefaults;

@interface REMUserDefaults : NSObject
{
    NSString *_suiteName;
    NSMutableDictionary *_observers;
    NSUserDefaults *_userDefaults;
}

+ (void)migrateUserDefaults;
+ (id)_oldDeprecatedAppGroupUserDefaults;
+ (id)appGroupUserDefaults;
+ (id)daemonUserDefaults;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSString *suiteName; // @synthesize suiteName=_suiteName;
// - (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)_removeObserver:(id)arg1;
- (id)_addObserverForKey:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (id)_startStreamingValuesForKey:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (id)_startObservingValuesForKey:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (id)initWithSuiteName:(id)arg1 containerURL:(id)arg2;

@end

