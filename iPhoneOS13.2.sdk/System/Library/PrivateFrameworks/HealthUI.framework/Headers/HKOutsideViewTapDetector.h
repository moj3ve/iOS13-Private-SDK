//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UITapGestureRecognizer, UIView;

@interface HKOutsideViewTapDetector : NSObject <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_recognizer;
    UIView *_view;
    id /* block */ _outsideTapBlock;
}

@property(copy, nonatomic) id /* block */ outsideTapBlock; // @synthesize outsideTapBlock=_outsideTapBlock;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) UITapGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTap:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 outsideTapBlock:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
