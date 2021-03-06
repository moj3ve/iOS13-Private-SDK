//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSString;

@interface WBSHistoryServiceURLRepresentation : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_urlString;
    NSData *_urlHash;
    NSData *_urlSalt;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *urlSalt; // @synthesize urlSalt=_urlSalt;
@property(readonly, copy, nonatomic) NSData *urlHash; // @synthesize urlHash=_urlHash;
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURLHash:(id)arg1 salt:(id)arg2;
- (id)initWithURLString:(id)arg1;
- (id)init;

@end

