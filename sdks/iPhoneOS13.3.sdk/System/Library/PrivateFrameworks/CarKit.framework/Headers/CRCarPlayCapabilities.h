//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, NSValue;

@interface CRCarPlayCapabilities : NSObject <NSSecureCoding>
{
    BOOL _persisted;
    NSUInteger _disabledFeature;
    long long _nowPlayingAlbumArtMode;
    NSValue *_viewAreaInsets;
    NSValue *_dashboardRoundedCorners;
    long long _userInterfaceStyle;
    NSString *_version;
}

+ (id)carPlayCapabilitiesCache;
+ (void)setCarPlayCapabilitiesCache:(id)arg1;
+ (void)invalidateCarPlayCapabilitiesCache;
+ (void)waitForCarCapabilitiesValues;
+ (void)_resetCapabilitiesGlobalDomain;
+ (id)newCapabilitiesFromGlobalDomain;
+ (id)fetchCarCapabilities;
+ (BOOL)supportsSecureCoding;
+ (id)capabilitiesVersion;
+ (void)setCapabilitiesVersion:(id)arg1;
+ (void)setCapabilitiesIdentifier:(id)arg1;
+ (id)capabilitiesIdentifier;
@property(nonatomic) BOOL persisted; // @synthesize persisted=_persisted;
@property(nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(retain, nonatomic) NSValue *dashboardRoundedCorners; // @synthesize dashboardRoundedCorners=_dashboardRoundedCorners;
@property(retain, nonatomic) NSValue *viewAreaInsets; // @synthesize viewAreaInsets=_viewAreaInsets;
@property(nonatomic) long long nowPlayingAlbumArtMode; // @synthesize nowPlayingAlbumArtMode=_nowPlayingAlbumArtMode;
@property(nonatomic) NSUInteger disabledFeature; // @synthesize disabledFeature=_disabledFeature;
// - (void).cxx_destruct;
- (void)persistCapabilitiesToGlobalDomain;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCapabilities:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)informativeText;
- (id)description;
- (id)init;

@end

