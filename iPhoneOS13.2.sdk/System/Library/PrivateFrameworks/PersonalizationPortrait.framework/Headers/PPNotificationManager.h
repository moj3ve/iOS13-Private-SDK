//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock;

@interface PPNotificationManager : NSObject
{
    _PASLock *_lockedData;
}

+ (void)addSuggestionsObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addEventKitObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addPortraitInvalidationObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addPortraitChangeObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addMeCardObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addContactsObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)unsetSharedManager;
+ (id)createNewSharedManager;
+ (id)sharedInstance;
- (void)addSuggestionsChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addEventKitChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addPortraitInvalidationBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addPortraitChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addMeCardChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addContactsChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)stopListening;
- (void)fireEventKitHandler:(id)arg1 events:(id)arg2;
- (void)fireHandler:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)simulateSuggestionsChange;
- (void)simulateEventKitChange;
- (void)simulatePortraitInvalidation;
- (void)simulatePortraitChange;
- (void)simulateMeCardChange;
- (void)simulateContactsChange;

@end
