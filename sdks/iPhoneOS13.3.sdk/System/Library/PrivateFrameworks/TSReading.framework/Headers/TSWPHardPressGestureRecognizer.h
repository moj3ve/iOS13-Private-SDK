//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UINonEditableTextSelectionForceGesture.h>

@class TSWPRep;

@interface TSWPHardPressGestureRecognizer : _UINonEditableTextSelectionForceGesture
{
    TSWPRep *_targetRep;
    NSUInteger _previousPressCount;
}

@property(nonatomic) NSUInteger previousPressCount; // @synthesize previousPressCount=_previousPressCount;
@property(retain, nonatomic) TSWPRep *targetRep; // @synthesize targetRep=_targetRep;
- (BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3;
@property(readonly, nonatomic) NSUInteger currentPressCount;
- (void)dealloc;

@end

