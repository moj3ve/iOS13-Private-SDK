//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/BSSimpleAssertion.h>

@interface SBMainStatusBarContentAssertion : BSSimpleAssertion
{
    BOOL _animated;
    BOOL _dateAndTimeVisible;
    double _duration;
}

@property(nonatomic) BOOL dateAndTimeVisible; // @synthesize dateAndTimeVisible=_dateAndTimeVisible;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) BOOL animated; // @synthesize animated=_animated;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2;

@end

