//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFCacheable-Protocol.h>



@class EFStringHash, NSString;
@protocol NSObject><NSSecureCoding><NSCopying;

@interface EMObjectID : NSObject <EFCacheable, NSSecureCoding, NSCopying>
{
    struct os_unfair_lock_s _lock;
    unsigned long long _hash;
    _Bool _ephemeral;
    id oding><NSCopying> _representedObjectID;
    EFStringHash *_stringHash;
}

+ (_Bool)supportsSecureCoding;
+ (void)addDecodableClass:(Class)arg1;
+ (id)_decodableClasses;
@property(readonly, copy, nonatomic) id oding><NSCopying> representedObjectID; // @synthesize representedObjectID=_representedObjectID;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) EFStringHash *stringHash; // @synthesize stringHash=_stringHash;
@property(readonly, getter=isEphemeral) _Bool ephemeral; // @synthesize ephemeral=_ephemeral;
@property(readonly, copy) NSString *description;
- (void)_commonInitAsEphemeralID:(_Bool)arg1 representedObjectID:(id)arg2;
- (id)initAsEphemeralID:(_Bool)arg1 representedObjectID:(id)arg2;
- (id)initWithRepresentedObjectID:(id)arg1;
- (id)initAsEphemeralID:(_Bool)arg1;
- (id)cachedSelf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
