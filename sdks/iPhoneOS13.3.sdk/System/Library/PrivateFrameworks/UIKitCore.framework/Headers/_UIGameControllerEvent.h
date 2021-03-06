//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIEvent.h"

__attribute__((visibility("hidden")))
@interface _UIGameControllerEvent : UIEvent
{
    CDStruct_a7a14e3b _previousState;
    NSUInteger _activeComponent;
}

- (BOOL)_processShoulder:(CDStruct_a7a14e3b )arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (BOOL)_processRightStick:(CDStruct_a7a14e3b )arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (BOOL)_processLeftStick:(CDStruct_a7a14e3b )arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (BOOL)_processDPad:(CDStruct_a7a14e3b )arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (BOOL)_processStandardButtons:(CDStruct_a7a14e3b )arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (BOOL)_determineInputTypeAndProcess:(CDStruct_a7a14e3b )arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (CGPoint)_leftStickPosition;
- (void)_maybeConvertAndSendAsPressesEvent;
- (void)_reset;
- (void)_sendEventToResponder:(id)arg1;
- (long long)subtype;
- (long long)type;

@end

