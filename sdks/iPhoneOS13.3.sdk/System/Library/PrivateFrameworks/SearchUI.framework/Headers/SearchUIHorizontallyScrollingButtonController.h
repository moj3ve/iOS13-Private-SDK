//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SearchUICardSectionRowModel, SearchUIImageView, UIButton, UIView;
@protocol SearchUIFeedbackDelegate;

@interface SearchUIHorizontallyScrollingButtonController : NSObject
{
    BOOL _scrollsWithoutStoppingAtBoundaries;
    BOOL _wantsSeparators;
    UIView *_view;
    UIButton *_button;
    double _width;
    double _spacing;
    SearchUIImageView *_thumbnailView;
    id <SearchUIFeedbackDelegate> _feedbackDelegate;
    SearchUICardSectionRowModel *_cardSectionRowModel;
}

@property(retain, nonatomic) SearchUICardSectionRowModel *cardSectionRowModel; // @synthesize cardSectionRowModel=_cardSectionRowModel;
@property(nonatomic) __weak id <SearchUIFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
@property(retain, nonatomic) SearchUIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic) BOOL wantsSeparators; // @synthesize wantsSeparators=_wantsSeparators;
@property(nonatomic) BOOL scrollsWithoutStoppingAtBoundaries; // @synthesize scrollsWithoutStoppingAtBoundaries=_scrollsWithoutStoppingAtBoundaries;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
// - (void).cxx_destruct;

@end

