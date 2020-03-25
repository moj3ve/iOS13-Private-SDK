//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIKeyboardInteractionProtocolEvent-Protocol.h>

@class NSString, TIKeyboardTouchEvent;

@interface TIKeyboardInteractionProtocolEventAddTouchEvent : NSObject <TIKeyboardInteractionProtocolEvent, NSSecureCoding>
{
    TIKeyboardTouchEvent *_touchEvent;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)sendTo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTouchEvent:(id)arg1;

@end
