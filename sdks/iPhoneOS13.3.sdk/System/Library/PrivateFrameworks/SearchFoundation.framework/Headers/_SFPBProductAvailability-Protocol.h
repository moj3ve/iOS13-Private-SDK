//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, _SFPBProductInventoryResult;

@protocol _SFPBProductAvailability <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *results;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBProductInventoryResult *)resultsAtIndex:(NSUInteger)arg1;
- (NSUInteger)resultsCount;
- (void)addResults:(_SFPBProductInventoryResult *)arg1;
- (void)clearResults;
@end

