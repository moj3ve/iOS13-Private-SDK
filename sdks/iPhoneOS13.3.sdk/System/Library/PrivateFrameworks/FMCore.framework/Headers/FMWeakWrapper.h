//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface FMWeakWrapper : NSObject <NSCopying>
{
    id _object;
    NSUInteger _objectHash;
}

@property(nonatomic) NSUInteger objectHash; // @synthesize objectHash=_objectHash;
@property(nonatomic) __weak id object; // @synthesize object=_object;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithObject:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end
