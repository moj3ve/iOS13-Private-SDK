//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalLocationManager : NSObject
{
}

+ (void)_loadMapKit;
+ (id)strictGeocodeString:(id)arg1 withCompletionBlock:(id /* CDUnknownBlockType */)arg2;
+ (id)placemarkForAddress:(id)arg1 withCompletionBlock:(id /* CDUnknownBlockType */)arg2;
+ (id)placemarkForLocation:(id)arg1 withCompletionBlock:(id /* CDUnknownBlockType */)arg2;
+ (BOOL)isCurrentProcessEntitledToUseLocationServices;
+ (id)currentLocationWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;

@end
