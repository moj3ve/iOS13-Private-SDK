//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider;

@interface CLKComplicationTemplateModularSmallSimpleImage : CLKComplicationTemplate
{
    CLKImageProvider *_imageProvider;
}

@property(copy, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
// - (void).cxx_destruct;
- (void)_enumerateImageProviderKeysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isCompatibleWithFamily:(long long)arg1;

@end

