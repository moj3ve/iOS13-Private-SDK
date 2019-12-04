//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString, NSURL;

@interface PKDiscoveryMediaRemoteAsset : NSObject <NSSecureCoding>
{
    NSString *_sha1Hex;
    NSURL *_url;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *sha1Hex; // @synthesize sha1Hex=_sha1Hex;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
