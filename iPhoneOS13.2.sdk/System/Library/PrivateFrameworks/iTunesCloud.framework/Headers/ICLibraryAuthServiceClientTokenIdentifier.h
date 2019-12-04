//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSNumber, NSString;

@interface ICLibraryAuthServiceClientTokenIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_DSID;
    NSString *_deviceGUID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *deviceGUID; // @synthesize deviceGUID=_deviceGUID;
@property(readonly, copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseDictionary:(id)arg1;

@end
