//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface PKBillPaymentRingGradientState : NSObject
{
    UIColor *_startColor;
    UIColor *_endColor;
}

@property(readonly, copy, nonatomic) UIColor *endColor; // @synthesize endColor=_endColor;
@property(readonly, copy, nonatomic) UIColor *startColor; // @synthesize startColor=_startColor;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2;

@end
