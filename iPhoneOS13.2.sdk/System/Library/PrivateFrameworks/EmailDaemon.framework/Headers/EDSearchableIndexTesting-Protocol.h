//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CSSearchableItem, EDSearchableIndexVerificationData, EMSearchableIndexQueryExpression, NSArray, NSDictionary;

@protocol EDSearchableIndexTesting 
@property(readonly, copy, nonatomic) NSArray *fetchAttributes;
- (_Bool)verifySearchableItem:(CSSearchableItem *)arg1 againstExpectedData:(EDSearchableIndexVerificationData *)arg2;
- (EMSearchableIndexQueryExpression *)expressionFromDataSamples:(NSDictionary *)arg1;
- (EDSearchableIndexVerificationData *)transformDataForVerification:(EDSearchableIndexVerificationData *)arg1;
@end
