//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerStackText : CLKComplicationTemplate
{
    CLKTextProvider *_innerTextProvider;
    CLKTextProvider *_outerTextProvider;
}

@property(copy, nonatomic) CLKTextProvider *outerTextProvider; // @synthesize outerTextProvider=_outerTextProvider;
@property(copy, nonatomic) CLKTextProvider *innerTextProvider; // @synthesize innerTextProvider=_innerTextProvider;
// - (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isCompatibleWithFamily:(long long)arg1;

@end

