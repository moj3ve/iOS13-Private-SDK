//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSMutableArray, NSNumber;

@interface PKCatalogGroup : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isUbiquitous;
    NSNumber *_groupID;
    NSMutableArray *_uniqueIDs;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isUbiquitous; // @synthesize isUbiquitous=_isUbiquitous;
@property(retain, nonatomic) NSMutableArray *uniqueIDs; // @synthesize uniqueIDs=_uniqueIDs;
@property(retain, nonatomic) NSNumber *groupID; // @synthesize groupID=_groupID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToGroup:(id)arg1;
- (id)init;

@end
