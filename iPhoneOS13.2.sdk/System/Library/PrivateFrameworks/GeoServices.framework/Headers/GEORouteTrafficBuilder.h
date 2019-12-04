//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface GEORouteTrafficBuilder : NSObject
{
    NSMutableData *_trafficColors;
    NSMutableData *_trafficOffsets;
    unsigned int _trafficDistance;
}

- (id)trafficOffsets;
- (id)trafficColors;
- (void)copyTrafficToRoute:(id)arg1;
- (void)_removeDuplicateTraffic;
- (void)addTrafficFromETARoute:(id)arg1;
- (void)addTrafficFromRoute:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)addTrafficFromRoute:(id)arg1 withStepRange:(struct _NSRange)arg2;
- (id)init;

@end
