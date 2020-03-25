//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSIndexSet;

@interface CHTokenizedTextResultColumn : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSArray *_tokenRows;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *tokenRows; // @synthesize tokenRows=_tokenRows;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTokenizedTextResultColumn:(id)arg1;
@property(readonly, nonatomic) NSIndexSet *strokeIndexes;
- (long long)indexOfEquivalentTokenRow:(id)arg1 tokenRange:(_NSRange)arg2;
- (id)description;
- (void)dealloc;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTokenRows:(id)arg1;
- (id)init;

@end
