//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSDecimalNumber, NSString;

@protocol GEOTransitFare 
@property(readonly, nonatomic) _Bool cashOnly;
@property(readonly, nonatomic) NSArray *supportedICCardProviders;
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSString *currencyCode;
@property(readonly, nonatomic) NSDecimalNumber *value;
@end
