//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PK3DLiveCardViewDelegate-Protocol.h>

@class PK3DCardView, PKPass, UIImageView;

@interface PKLiveRenderedCardFaceView : UIView <PK3DLiveCardViewDelegate>
{
    PKPass *_pass;
    PK3DCardView *_cardView;
    UIImageView *_logoImageView;
    _Bool _invalidated;
}

- (void)sceneDidRenderAtTime:(double)arg1;
- (void)layoutSubviews;
- (void)setMotionEnabled:(_Bool)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 pass:(id)arg2;

@end
