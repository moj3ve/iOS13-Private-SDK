//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface OADVector3D : NSObject <NSCopying>
{
    float mDx;
    float mDy;
    float mDz;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (float)dz;
- (float)dy;
- (float)dx;
- (id)initWithDx:(float)arg1 dy:(float)arg2 dz:(float)arg3;

@end

