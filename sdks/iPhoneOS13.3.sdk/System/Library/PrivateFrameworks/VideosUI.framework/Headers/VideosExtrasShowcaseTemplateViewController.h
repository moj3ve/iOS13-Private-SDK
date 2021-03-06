//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VideosExtrasTemplateViewController.h>

#import <VideosUI/VideosExtrasCarouselViewControllerDataSource-Protocol.h>
#import <VideosUI/VideosExtrasCarouselViewControllerDelegate-Protocol.h>
#import <VideosUI/VideosExtrasImageBrowserViewControllerDataSource-Protocol.h>
#import <VideosUI/VideosExtrasNavigationAnimationControllerProvider-Protocol.h>
#import <VideosUI/VideosExtrasZoomingImageInteractiveTransitionSource-Protocol.h>
#import <VideosUI/VideosExtrasZoomingImageTransitionParticipant-Protocol.h>

@class IKShowcaseTemplate, NSArray, NSDictionary, VideosExtrasCarouselViewController, VideosExtrasImageBrowserViewController, VideosExtrasZoomingImageTransitionController;

__attribute__((visibility("hidden")))
@interface VideosExtrasShowcaseTemplateViewController : VideosExtrasTemplateViewController <VideosExtrasCarouselViewControllerDataSource, VideosExtrasCarouselViewControllerDelegate, VideosExtrasImageBrowserViewControllerDataSource, VideosExtrasNavigationAnimationControllerProvider, VideosExtrasZoomingImageInteractiveTransitionSource, VideosExtrasZoomingImageTransitionParticipant>
{
    BOOL _supportsOneupMode;
    VideosExtrasZoomingImageTransitionController *_activeZoomingImageInteractiveTransitionController;
    NSArray *_bannerButtonElements;
    NSArray *_carouselLockupElements;
    VideosExtrasCarouselViewController *_carouselViewController;
    VideosExtrasImageBrowserViewController *_imageBrowserViewController;
    NSDictionary *_overriddenFullscreenImages;
    NSUInteger _autohighlightIndex;
}

@property(nonatomic) NSUInteger autohighlightIndex; // @synthesize autohighlightIndex=_autohighlightIndex;
@property(nonatomic) BOOL supportsOneupMode; // @synthesize supportsOneupMode=_supportsOneupMode;
@property(retain, nonatomic) NSDictionary *overriddenFullscreenImages; // @synthesize overriddenFullscreenImages=_overriddenFullscreenImages;
@property(retain, nonatomic) VideosExtrasImageBrowserViewController *imageBrowserViewController; // @synthesize imageBrowserViewController=_imageBrowserViewController;
@property(retain, nonatomic) VideosExtrasCarouselViewController *carouselViewController; // @synthesize carouselViewController=_carouselViewController;
@property(retain, nonatomic) NSArray *carouselLockupElements; // @synthesize carouselLockupElements=_carouselLockupElements;
@property(retain, nonatomic) NSArray *bannerButtonElements; // @synthesize bannerButtonElements=_bannerButtonElements;
@property(retain, nonatomic) VideosExtrasZoomingImageTransitionController *activeZoomingImageInteractiveTransitionController; // @synthesize activeZoomingImageInteractiveTransitionController=_activeZoomingImageInteractiveTransitionController;
// - (void).cxx_destruct;
- (void)_pushImageBrowserWithVisibleItemIndex:(NSUInteger)arg1;
- (id)_mainChildViewController;
- (void)_loadTextElement:(id)arg1 textAttributes:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) NSUInteger indexOfVisibleItem;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1;
- (id)animationControllerForNavigationOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)imageBrowserViewController:(id)arg1 loadDescriptionAtIndex:(NSUInteger)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)imageBrowserViewController:(id)arg1 loadSubtitleAtIndex:(NSUInteger)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)imageBrowserViewController:(id)arg1 loadTitleAtIndex:(NSUInteger)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)imageBrowserViewController:(id)arg1 loadImageAtIndex:(NSUInteger)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (NSUInteger)numberOfImagesForBrowserViewController:(id)arg1;
- (void)carouselViewController:(id)arg1 didSelectItemAtIndex:(NSUInteger)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)carouselViewController:(id)arg1 didHighlightItemAtIndex:(NSUInteger)arg2;
- (NSUInteger)carouselSize;
- (void)carouselViewController:(id)arg1 configureCarouselCollectionViewCell:(id)arg2 forItemAtIndex:(NSUInteger)arg3 withThumbnailImageContainerSize:(CGSize)arg4;
- (NSUInteger)numberOfItemsInCarouselViewController:(id)arg1;
- (void)_prepareLayout;
- (BOOL)showsPlaceholder;
@property(readonly, nonatomic) IKShowcaseTemplate *templateElement;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;

@end

