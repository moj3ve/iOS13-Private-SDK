//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface PKColor : NSObject <NSSecureCoding, NSCopying>
{
    double _red;
    double _green;
    double _blue;
    double _alpha;
    CGColor _colorRef;
}

+ (BOOL)supportsSecureCoding;
+ (id)colorFromString:(id)arg1;
+ (id)colorWithH:(double)arg1 S:(double)arg2 B:(double)arg3 A:(double)arg4;
+ (id)colorWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;
- (CGColor )_newCGColor;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSUInteger hash;
@property(readonly, nonatomic) __weak NSString *string;
@property(readonly, nonatomic) CGColor CGColor;
- (double)luminance;
- (void)dealloc;

@end

