//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface PXLayoutMetrics : NSObject <NSCopying>
{
    CGSize _referenceSize;
}

@property(nonatomic) CGSize referenceSize; // @synthesize referenceSize=_referenceSize;
@property(readonly, nonatomic) NSString *diagnosticDescription;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;

@end

