//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/VUIProductUberBackgroundInterface-Protocol.h>

@class IKViewElement, NSString, VUIChannelBannerView;

__attribute__((visibility("hidden")))
@interface VUIChannelBannerViewController : UIViewController <VUIProductUberBackgroundInterface>
{
    IKViewElement *_viewElement;
    VUIChannelBannerView *_bannerView;
}

@property(readonly, nonatomic) VUIChannelBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (void)setUberImageOffset:(double)arg1;
- (void)setBannerOpacity:(double)arg1;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) double topThreshold;
@property(readonly, nonatomic) _Bool isUberLayoutActive;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
