//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/SGXPCResponse2.h>

@protocol NSSecureCoding;

@interface SGXPCResponse3 : SGXPCResponse2
{
    id <NSSecureCoding> _response3;
}

+ (id)responseWithError:(id)arg1;
+ (id)responseWith:(id)arg1 also:(id)arg2 also:(id)arg3;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) id <NSSecureCoding> response3; // @synthesize response3=_response3;
- (id)response2;
- (id)response1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
