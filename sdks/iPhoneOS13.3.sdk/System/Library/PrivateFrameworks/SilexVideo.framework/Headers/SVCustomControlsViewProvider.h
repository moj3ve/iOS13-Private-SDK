//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVCustomControlsViewProviding-Protocol.h>

@class UIView;
@protocol SVCustomControlsLayoutGuideProviding, SVVideoViewControllerProviding;

@interface SVCustomControlsViewProvider : NSObject <SVCustomControlsViewProviding>
{
    UIView *_controlsView;
    id <SVCustomControlsLayoutGuideProviding> _layoutGuideProvider;
    id <SVVideoViewControllerProviding> _viewControllerProvider;
}

@property(readonly, nonatomic) id <SVVideoViewControllerProviding> viewControllerProvider; // @synthesize viewControllerProvider=_viewControllerProvider;
@property(readonly, nonatomic) id <SVCustomControlsLayoutGuideProviding> layoutGuideProvider; // @synthesize layoutGuideProvider=_layoutGuideProvider;
// - (void).cxx_destruct;
@property(readonly, nonatomic) UIView *controlsView; // @synthesize controlsView=_controlsView;
- (id)initWithViewControllerProvider:(id)arg1 layoutGuideProvider:(id)arg2;

@end

