//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (DC)
+ (void)dc_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(id /* CDUnknownBlockType */)arg3 completion:(id /* CDUnknownBlockType */)arg4;
+ (void)dc_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(id /* CDUnknownBlockType */)arg3;
- (id)dc_animator;
- (id)dc_renderImageView;
- (id)dc_renderImage;
- (void)dc_addConstraintsToFillSuperview;
- (void)dc_removeAllConstraintsForSubview:(id)arg1;
- (id)dc_imageViewRenderedFromViewHierarchy;
- (id)dc_imageViewRenderedFromLayer;
- (id)dc_imageRenderedFromViewHierarchy;
- (id)dc_imageRenderedFromLayer;
- (void)dc_crashIfWindowIsSecure;
- (BOOL)dc_isInSecureWindow;
@property(readonly, nonatomic) NSDirectionalEdgeInsets dc_directionalSafeAreaInsets;
@property(readonly, nonatomic) BOOL dc_isRTL;
@end

