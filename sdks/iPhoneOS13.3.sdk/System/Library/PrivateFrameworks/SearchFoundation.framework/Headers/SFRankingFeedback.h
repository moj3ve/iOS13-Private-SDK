//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>


@class NSArray, NSString;

@interface SFRankingFeedback : SFFeedback <NSCopying>
{
    double _blendingDuration;
    NSArray *_sections;
    NSString *_l2ModelVersion;
    NSString *_l3ModelVersion;
    NSString *_l2ShadowModelVersion;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *l2ShadowModelVersion; // @synthesize l2ShadowModelVersion=_l2ShadowModelVersion;
@property(copy, nonatomic) NSString *l3ModelVersion; // @synthesize l3ModelVersion=_l3ModelVersion;
@property(copy, nonatomic) NSString *l2ModelVersion; // @synthesize l2ModelVersion=_l2ModelVersion;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) double blendingDuration; // @synthesize blendingDuration=_blendingDuration;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSections:(id)arg1 blendingDuration:(double)arg2;

@end

