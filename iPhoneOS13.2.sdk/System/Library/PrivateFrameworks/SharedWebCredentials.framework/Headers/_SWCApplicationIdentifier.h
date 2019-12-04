//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



#import <SharedWebCredentials/SWCRedactedDescription-Protocol.h>

@class NSString;

@interface _SWCApplicationIdentifier : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding>
{
    unsigned long long _hash;
    NSString *_prefix;
    NSString *_bundleIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)new;
+ (_Bool)isCaseSensitive;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) NSString *prefix; // @synthesize prefix=_prefix;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)redactedDescription;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToApplicationIdentifierIgnoringPrefix:(id)arg1;
@property(readonly, getter=isValid) _Bool valid;
@property(readonly) NSString *rawValue;
- (id)initWithString:(id)arg1;
- (id)init;
- (id)initForBundleProxy:(id)arg1;

@end
