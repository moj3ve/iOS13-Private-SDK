//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSectionFetchDescriptor-Protocol.h>

@class NTCatchUpOperationArticleIDsRequest, NTPBPersonalizedTodaySectionSpecificConfig;

@interface NTPersonalizedSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>
{
    NTPBPersonalizedTodaySectionSpecificConfig *_personalizedConfiguration;
    NTCatchUpOperationArticleIDsRequest *_mandatoryArticleIDsRequest;
    NTCatchUpOperationArticleIDsRequest *_personalizedArticleIDsRequest;
}

@property(copy, nonatomic) NTCatchUpOperationArticleIDsRequest *personalizedArticleIDsRequest; // @synthesize personalizedArticleIDsRequest=_personalizedArticleIDsRequest;
@property(copy, nonatomic) NTCatchUpOperationArticleIDsRequest *mandatoryArticleIDsRequest; // @synthesize mandatoryArticleIDsRequest=_mandatoryArticleIDsRequest;
@property(copy, nonatomic) NTPBPersonalizedTodaySectionSpecificConfig *personalizedConfiguration; // @synthesize personalizedConfiguration=_personalizedConfiguration;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(NSUInteger)arg2 priorFeedItems:(id)arg3;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)initWithPersonalizedConfiguration:(id)arg1;
- (id)init;

@end

