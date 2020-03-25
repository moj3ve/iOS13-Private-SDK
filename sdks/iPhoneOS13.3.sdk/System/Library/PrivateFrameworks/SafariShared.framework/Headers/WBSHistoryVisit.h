//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WBSHistoryItem;

@interface WBSHistoryVisit : NSObject
{
    BOOL _loadSuccessful;
    BOOL _httpNonGet;
    BOOL _synthesized;
    long long _databaseID;
    long long _redirectSourceDatabaseID;
    long long _redirectDestinationDatabaseID;
    long long _generation;
    WBSHistoryItem *_item;
    long long _origin;
    double _visitTime;
    NSString *_title;
    NSUInteger _score;
    NSUInteger _attributes;
    WBSHistoryVisit *_redirectSource;
    WBSHistoryVisit *_redirectDestination;
}

+ (id)synthesizedVisitWithHistoryItem:(id)arg1 visitTime:(double)arg2;
+ (float)weightedVisitCountFromScore:(NSUInteger)arg1;
+ (NSUInteger)scoreForWeightedVisitCount:(float)arg1;
@property(retain, nonatomic) WBSHistoryVisit *redirectDestination; // @synthesize redirectDestination=_redirectDestination;
@property(retain, nonatomic) WBSHistoryVisit *redirectSource; // @synthesize redirectSource=_redirectSource;
@property(readonly, nonatomic, getter=isSynthesized) BOOL synthesized; // @synthesize synthesized=_synthesized;
@property(readonly, nonatomic, getter=wasHTTPNonGet) BOOL httpNonGet; // @synthesize httpNonGet=_httpNonGet;
@property(nonatomic, getter=loadWasSuccessful) BOOL loadSuccessful; // @synthesize loadSuccessful=_loadSuccessful;
@property(nonatomic) NSUInteger attributes; // @synthesize attributes=_attributes;
@property(nonatomic) NSUInteger score; // @synthesize score=_score;
@property(copy) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) double visitTime; // @synthesize visitTime=_visitTime;
@property(nonatomic) long long origin; // @synthesize origin=_origin;
@property(nonatomic) __weak WBSHistoryItem *item; // @synthesize item=_item;
@property(nonatomic) long long generation; // @synthesize generation=_generation;
@property(nonatomic) long long redirectDestinationDatabaseID; // @synthesize redirectDestinationDatabaseID=_redirectDestinationDatabaseID;
@property(nonatomic) long long redirectSourceDatabaseID; // @synthesize redirectSourceDatabaseID=_redirectSourceDatabaseID;
@property(nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
// - (void).cxx_destruct;
- (double)_weight;
- (void)recomputeScore;
- (BOOL)hasAttributes:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger redirectSourceChainLength;
@property(readonly, nonatomic) WBSHistoryVisit *endOfRedirectChain;
- (id)initWithHistoryItem:(id)arg1 sqliteRow:(id)arg2 baseColumnIndex:(NSUInteger)arg3;
- (id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2;
- (id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2 loadWasSuccesful:(BOOL)arg3 wasHTTPNonGet:(BOOL)arg4 origin:(long long)arg5 attributes:(NSUInteger)arg6;

@end
