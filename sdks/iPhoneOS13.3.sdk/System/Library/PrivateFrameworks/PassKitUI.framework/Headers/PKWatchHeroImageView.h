//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKHeroImageView-Protocol.h>

@class UIImageView;

@interface PKWatchHeroImageView : UIView <PKHeroImageView>
{
    UIImageView *_watchView;
    UIImageView *_bridgeWallpaperImageView;
}

// - (void).cxx_destruct;
- (id)_watchDeviceImage;
- (id)_bridgeWallpaperImage;
- (id)_bridgeHeroImage;
- (CGSize)_heroBackgroundImageSize;
- (CGSize)_heroWatchImageSize;
- (id)_resizeImage:(id)arg1 toSize:(CGSize)arg2;
@property(readonly, nonatomic) BOOL isCompactWatch;
- (CGSize)imageSize;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;

@end

