//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/MFRegion.h>

@class OITSUBezierPath;

__attribute__((visibility("hidden")))
@interface MFPhoneRegion : MFRegion
{
    OITSUBezierPath *m_path;
    CGRect m_bounds;
}

// - (void).cxx_destruct;
- (int)invert:(id)arg1;
- (int)frame:(id)arg1 in_brush:(id)arg2;
- (int)fill:(id)arg1 in_brush:(id)arg2;
- (id)pathForClippingWithDeviceContext:(id)arg1;
- (id)initWithPath:(id)arg1 in_bounds:(CGRect)arg2;
- (id)initWithRects:(id)arg1 in_bounds:(CGRect)arg2 in_dc:(id)arg3;

@end
