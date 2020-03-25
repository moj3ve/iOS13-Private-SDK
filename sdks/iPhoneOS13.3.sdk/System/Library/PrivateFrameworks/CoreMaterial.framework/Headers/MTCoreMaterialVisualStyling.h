//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMaterial/MTTinting-Protocol.h>

@class CAFilter, NSDictionary, NSString;
@protocol MTVisualStyleSetProviding;

@interface MTCoreMaterialVisualStyling : NSObject <MTTinting>
{
    id <MTVisualStyleSetProviding> _visualStyleSet;
    NSString *_visualStyleName;
    CAFilter *_composedFilter;
    NSDictionary *_tintColorDescription;
    CGColor _tintColor;
    double _tintAlpha;
    NSString *_compositingFilter;
    NSString *_filterType;
    NSDictionary *_filterProperties;
}

- (id)filterProperties;
- (id)filterType;
- (id)compositingFilter;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=_composedFilter) CAFilter *composedFilter;
- (void)_processFilteringDescription:(id)arg1;
- (void)_processBlendingDescription:(id)arg1;
- (void)_processTintingDescription:(id)arg1;
- (void)dealloc;
- (id)initWithVisualStyleSet:(id)arg1 styleName:(id)arg2 description:(id)arg3 andDescendantDescriptions:(id)arg4;
@property(readonly, nonatomic) double tintAlpha;
@property(readonly, nonatomic) CGColor tintColor;
@property(readonly, copy, nonatomic) NSDictionary *tintColorDescription;
- (void)_getFilterType:(id )arg1 vibrantColor:(CGColor )arg2 tintColor:(CGColor )arg3 inputReversed:(BOOL )arg4;
- (void)_getCompositingFilter:(id )arg1 tintColor:(CGColor )arg2;
- (void)_applyToLayer:(id)arg1 withColorBlock:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) NSString *visualStyleName;
@property(readonly, nonatomic) NSString *visualStyleSetName;

@end
