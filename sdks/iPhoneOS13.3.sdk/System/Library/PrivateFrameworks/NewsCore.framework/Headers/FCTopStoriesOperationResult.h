//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCColorGradient, NSArray, NSDate, NSDictionary, NSString;

@interface FCTopStoriesOperationResult : NSObject
{
    NSArray *_mandatoryHeadlinePairs;
    NSArray *_optionalHeadlines;
    NSArray *_todayFeedTopStoriesHeadlines;
    NSDate *_publishDate;
    NSDictionary *_topStoriesMetadataByArticleID;
    FCColorGradient *_backgroundColorGradient;
    FCColorGradient *_darkStyleBackgroundColorGradient;
    NSString *_subtitle;
}

@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) FCColorGradient *darkStyleBackgroundColorGradient; // @synthesize darkStyleBackgroundColorGradient=_darkStyleBackgroundColorGradient;
@property(copy, nonatomic) FCColorGradient *backgroundColorGradient; // @synthesize backgroundColorGradient=_backgroundColorGradient;
@property(copy) NSDictionary *topStoriesMetadataByArticleID; // @synthesize topStoriesMetadataByArticleID=_topStoriesMetadataByArticleID;
@property(copy) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(readonly, copy, nonatomic) NSArray *todayFeedTopStoriesHeadlines; // @synthesize todayFeedTopStoriesHeadlines=_todayFeedTopStoriesHeadlines;
@property(copy) NSArray *optionalHeadlines; // @synthesize optionalHeadlines=_optionalHeadlines;
@property(copy) NSArray *mandatoryHeadlinePairs; // @synthesize mandatoryHeadlinePairs=_mandatoryHeadlinePairs;
// - (void).cxx_destruct;
- (id)initWithTopStoriesGroupConfig:(id)arg1 mandatoryHeadlinePairs:(id)arg2 optionalHeadlines:(id)arg3 todayFeedTopStoriesHeadlines:(id)arg4 topStoriesMetadataByArticleID:(id)arg5 publishDate:(id)arg6 subtitle:(id)arg7;

@end

