//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AEVConversionUtils : NSObject
{
}

+ (CGImage )createImageFromGrayscaleData:(char )arg1 ofWidth:(int)arg2 andHeight:(int)arg3;
+ (char )convertCGImageToGrayscale:(CGImage )arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3;
+ (char )convertCGImageToGrayscale:(CGImage )arg1;
+ (char )convertCGImageToBufferUsingRGBDevice:(CGImage )arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3;
+ (char )convertCGImageToBufferUsingDataProvider:(CGImage )arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3;
+ (char )convertCGImageToBufferUsingGrayDevice:(CGImage )arg1;

@end
