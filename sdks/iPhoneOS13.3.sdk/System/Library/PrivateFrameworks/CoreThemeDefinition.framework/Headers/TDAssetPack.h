//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CUIMutableCommonAssetStorage, NSSet, NSString;

@interface TDAssetPack : NSObject <NSCopying>
{
    BOOL wasModified;
    NSSet *tags;
    NSString *outputPath;
    CUIMutableCommonAssetStorage *assetStore;
    NSString *assetPackIdentifier;
}

@property(copy, nonatomic) NSString *assetPackIdentifier; // @synthesize assetPackIdentifier;
@property(nonatomic) BOOL wasModified; // @synthesize wasModified;
@property(retain) CUIMutableCommonAssetStorage *assetStore; // @synthesize assetStore;
@property(copy, nonatomic) NSString *outputPath; // @synthesize outputPath;
@property(retain, nonatomic) NSSet *tags; // @synthesize tags;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;

@end

