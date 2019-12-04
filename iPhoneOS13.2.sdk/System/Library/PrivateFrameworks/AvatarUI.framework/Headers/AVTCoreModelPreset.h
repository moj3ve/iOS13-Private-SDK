//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTPreset, NSDictionary, NSString;

@interface AVTCoreModelPreset : NSObject
{
    struct NSDictionary *_tags;
    AVTPreset *_preset;
}

+ (struct NSDictionary *)tagSetFromPreset:(id)arg1;
@property(readonly, nonatomic) AVTPreset *preset; // @synthesize preset=_preset;
@property(readonly, copy, nonatomic) NSDictionary *tags; // @synthesize tags=_tags;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSString *localizedName;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)copyForPairedCategory:(long long)arg1;
- (id)initWithPreset:(id)arg1;

@end
