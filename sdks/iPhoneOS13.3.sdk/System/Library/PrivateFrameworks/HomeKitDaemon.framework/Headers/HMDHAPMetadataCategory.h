//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSString;

@interface HMDHAPMetadataCategory : HMFObject
{
    NSNumber *_identifier;
    NSString *_uuidStr;
    NSString *_name;
    NSString *_catDescription;
}

@property(retain, nonatomic) NSString *catDescription; // @synthesize catDescription=_catDescription;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *uuidStr; // @synthesize uuidStr=_uuidStr;
@property(retain, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)arg1 uuid:(id)arg2 name:(id)arg3 description:(id)arg4;
- (id)init;

@end
