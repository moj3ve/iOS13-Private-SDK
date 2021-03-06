//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface FIUIChartAxisLabel : NSObject
{
    BOOL _useReversePlacement;
    NSString *_text;
    id _location;
    UIColor *_labelColor;
    UIColor *_shadowColor;
    double _shadowBlur;
    CGSize _shadowOffset;
}

@property(nonatomic) double shadowBlur; // @synthesize shadowBlur=_shadowBlur;
@property(nonatomic) CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(nonatomic) BOOL useReversePlacement; // @synthesize useReversePlacement=_useReversePlacement;
@property(retain, nonatomic) id location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
// - (void).cxx_destruct;
- (id)description;

@end

