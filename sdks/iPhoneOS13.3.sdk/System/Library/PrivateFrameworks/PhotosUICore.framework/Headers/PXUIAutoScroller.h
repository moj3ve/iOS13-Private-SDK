//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAutoScroller.h>

@class CADisplayLink;

@interface PXUIAutoScroller : PXAutoScroller
{
    CADisplayLink *_displayLink;
}

@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
// - (void).cxx_destruct;
- (void)updateWithGestureRecognizer:(id)arg1;
- (BOOL)autoscrollWithOffset:(CGPoint)arg1;
- (void)stopRepeating;
- (void)_handleDisplayLink:(id)arg1;
- (void)startRepeating;
- (CGRect)visibleRectForScrollView:(id)arg1;

@end

