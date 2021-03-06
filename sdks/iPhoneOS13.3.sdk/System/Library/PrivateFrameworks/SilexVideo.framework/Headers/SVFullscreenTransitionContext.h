//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVFullscreenTransitionContext-Protocol.h>

@class UIView;

@interface SVFullscreenTransitionContext : NSObject <SVFullscreenTransitionContext>
{
    BOOL _interactive;
    UIView *_contentOverlayView;
    UIView *_fromView;
    UIView *_toView;
    double _transitionDuration;
}

@property(readonly, nonatomic, getter=isInteractive) BOOL interactive; // @synthesize interactive=_interactive;
@property(readonly, nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(readonly, nonatomic) UIView *toView; // @synthesize toView=_toView;
@property(readonly, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(readonly, nonatomic) UIView *contentOverlayView; // @synthesize contentOverlayView=_contentOverlayView;
// - (void).cxx_destruct;
- (id)initWithContentOverlayView:(id)arg1 fromView:(id)arg2 toView:(id)arg3 transitionDuration:(double)arg4 interactive:(BOOL)arg5;

@end

