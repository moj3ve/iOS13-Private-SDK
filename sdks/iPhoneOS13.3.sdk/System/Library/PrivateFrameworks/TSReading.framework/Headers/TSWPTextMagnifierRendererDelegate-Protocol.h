//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CALayer, NSString;

@protocol TSWPTextMagnifierRendererDelegate
@property(readonly, nonatomic) NSString *maskImageName;
@property(readonly, nonatomic) NSString *overlayImageName;
@property(readonly, nonatomic) NSString *underlayImageName;
- (BOOL)shouldHideCanvasLayer;
- (void)drawMagnifierClippedCanvasLayer:(CALayer *)arg1 inContext:(CGContext )arg2;
@end

