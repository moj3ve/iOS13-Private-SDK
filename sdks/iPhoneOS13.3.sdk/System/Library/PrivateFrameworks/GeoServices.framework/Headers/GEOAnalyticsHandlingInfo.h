//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface GEOAnalyticsHandlingInfo : NSObject <NSSecureCoding>
{
    long long _logMsgType;
    long long _persistCount;
    long long _uploadSuccessCount;
    long long _uploadSuccessByteCount;
    long long _uploadFailureCount;
    long long _dbExpireCount;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long dbExpireCount; // @synthesize dbExpireCount=_dbExpireCount;
@property(nonatomic) long long uploadFailureCount; // @synthesize uploadFailureCount=_uploadFailureCount;
@property(nonatomic) long long uploadSuccessByteCount; // @synthesize uploadSuccessByteCount=_uploadSuccessByteCount;
@property(nonatomic) long long uploadSuccessCount; // @synthesize uploadSuccessCount=_uploadSuccessCount;
@property(nonatomic) long long persistCount; // @synthesize persistCount=_persistCount;
@property(nonatomic) long long logMsgType; // @synthesize logMsgType=_logMsgType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

