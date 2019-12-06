//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarPersistentAnimationView.h>

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class UIColor;

@interface _UIStatusBarSignalView : _UIStatusBarPersistentAnimationView <_UIStatusBarDisplayable>
{
    BOOL _smallSize;
    long long _numberOfBars;
    long long _numberOfActiveBars;
    long long _signalMode;
    UIColor *_inactiveColor;
    UIColor *_activeColor;
    long long _iconSize;
}

+ (CGSize)_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2;
@property(nonatomic) long long iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) BOOL smallSize; // @synthesize smallSize=_smallSize;
@property(copy, nonatomic) UIColor *activeColor; // @synthesize activeColor=_activeColor;
@property(copy, nonatomic) UIColor *inactiveColor; // @synthesize inactiveColor=_inactiveColor;
@property(nonatomic) long long signalMode; // @synthesize signalMode=_signalMode;
@property(nonatomic) long long numberOfActiveBars; // @synthesize numberOfActiveBars=_numberOfActiveBars;
@property(nonatomic) long long numberOfBars; // @synthesize numberOfBars=_numberOfBars;
// - (void).cxx_destruct;
- (void)applyStyleAttributes:(id)arg1;
- (void)_updateFromMode:(long long)arg1;
- (void)_updateActiveBars;
- (void)_updateBars;
- (void)_iconSizeDidChange;
- (void)_colorsDidChange;

@end
