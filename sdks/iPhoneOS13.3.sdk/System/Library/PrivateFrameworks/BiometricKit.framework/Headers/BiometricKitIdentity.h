//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSString, NSUUID;

@interface BiometricKitIdentity : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _userID;
    int _type;
    int _attribute;
    int _entity;
    NSUUID *_uuid;
    NSString *_name;
    NSDate *_creationTime;
    long long _matchCount;
    long long _updateCount;
}

+ (BOOL)supportsSecureCoding;
+ (id)biometricKitIdentity;
@property(nonatomic) long long updateCount; // @synthesize updateCount=_updateCount;
@property(nonatomic) long long matchCount; // @synthesize matchCount=_matchCount;
@property(retain, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int entity; // @synthesize entity=_entity;
@property(nonatomic) int attribute; // @synthesize attribute=_attribute;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) unsigned int userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
