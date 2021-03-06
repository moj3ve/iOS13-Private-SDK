//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <GameCenterUI/GKTextStyleReplay-Protocol.h>

@class GKTextStyle;

@interface GKButton : UIButton <GKTextStyleReplay>
{
    GKTextStyle *_baseStyle;
    GKTextStyle *_appliedStyle;
}

+ (void)initialize;
@property(retain, nonatomic) GKTextStyle *appliedStyle; // @synthesize appliedStyle=_appliedStyle;
// - (void).cxx_destruct;
- (void)setAttributedTitle:(id)arg1 forState:(NSUInteger)arg2;
- (void)applyTextStyle:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
@property(retain, nonatomic) GKTextStyle *baseStyle;
- (void)replayAndApplyStyleWithSystemContentChange:(BOOL)arg1;

@end

