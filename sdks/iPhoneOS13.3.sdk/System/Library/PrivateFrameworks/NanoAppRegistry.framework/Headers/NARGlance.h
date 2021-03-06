//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString;

@interface NARGlance : NSObject <NSSecureCoding>
{
    NSString *_appID;
    NSString *_displayName;
    NSString *_glanceID;
    NSDictionary *_localizedDisplayNameMap;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *localizedDisplayNameMap; // @synthesize localizedDisplayNameMap=_localizedDisplayNameMap;
@property(copy, nonatomic) NSString *glanceID; // @synthesize glanceID=_glanceID;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
// - (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

