//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBAWDMetricDelegate-Protocol.h>
#import <SpringBoard/SBPressCollectorDelegate-Protocol.h>

@class NSString, NSUUID, SBPressCollector;
@protocol SBPressSequenceObserverDelegate;

@interface SBPressSequenceObserver : NSObject <SBPressCollectorDelegate, SBAWDMetricDelegate>
{
    NSUUID *_sosTriggerUUID;
    NSString *_pressName;
    SBPressCollector *_pressCollector;
    id <SBPressSequenceObserverDelegate> _delegate;
}

@property(nonatomic) __weak id <SBPressSequenceObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SBPressCollector *pressCollector; // @synthesize pressCollector=_pressCollector;
@property(readonly, nonatomic) NSString *pressName; // @synthesize pressName=_pressName;
// - (void).cxx_destruct;
- (void)_setPressCollector:(id)arg1;
- (void)_notePowerDownImminent;
- (void)metricDidPost:(id)arg1 data:(id)arg2;
- (void)pressCollector:(id)arg1 didCollectSequence:(id)arg2;
- (void)noteDidBeginSOSWithUUID:(id)arg1;
- (void)dealloc;
- (id)initWithPressName:(id)arg1;
- (id)init;

@end

