//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUIHorizontallyScrollingContainerButtonController.h>

@class SearchUIImageView, SearchUILabel;

@interface SearchUIHorizontallyScrollingVerticalLayoutButtonController : SearchUIHorizontallyScrollingContainerButtonController
{
    SearchUIImageView *thumbnailView;
    SearchUILabel *_titleLabel;
    SearchUILabel *_footnoteLabel;
}

@property(retain, nonatomic) SearchUILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain, nonatomic) SearchUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setThumbnailView:(id)arg1;
- (id)thumbnailView;
- (void)setCardSectionRowModel:(id)arg1;
- (id)setupContentView;
- (double)spacing;

@end
