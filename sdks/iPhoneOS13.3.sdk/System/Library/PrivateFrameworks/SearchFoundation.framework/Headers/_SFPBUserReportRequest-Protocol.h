//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, NSString, _SFPBPunchout;

@protocol _SFPBUserReportRequest <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *userReportOptions;
@property(copy, nonatomic) NSString *dismissText;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *affordanceText;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPunchout *)userReportOptionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)userReportOptionsCount;
- (void)addUserReportOptions:(_SFPBPunchout *)arg1;
- (void)clearUserReportOptions;
@end

