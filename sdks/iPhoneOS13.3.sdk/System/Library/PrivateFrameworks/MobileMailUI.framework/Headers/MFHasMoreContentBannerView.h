//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileMailUI/MFSuggestionBannerView.h>

@class NSString;
@protocol MFHasMoreContentBannerViewDelegate;

@interface MFHasMoreContentBannerView : MFSuggestionBannerView
{
    id <MFHasMoreContentBannerViewDelegate> _delegate;
}

+ (id)bannerWithFrame:(CGRect)arg1 isPlainText:(BOOL)arg2 remainingBytes:(NSUInteger)arg3;
@property(nonatomic) __weak id <MFHasMoreContentBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)requestLoad;
- (void)reloadData;
- (void)_titleControlTapped:(id)arg1;
- (id)actionStringIsDownloading:(BOOL)arg1;
@property(readonly) NSString *titleString;
- (id)initWithFrame:(CGRect)arg1;

@end

