//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayouterFactory-Protocol.h>

@protocol SXColumnCalculator, SXLayoutContextFactory, SXUnitConverterFactory;

@interface SXLayouterFactory : NSObject <SXLayouterFactory>
{
    id <SXColumnCalculator> _columnCalculator;
    id <SXLayoutContextFactory> _layoutContextFactory;
    id <SXUnitConverterFactory> _unitConverterFactory;
}

@property(readonly, nonatomic) id <SXUnitConverterFactory> unitConverterFactory; // @synthesize unitConverterFactory=_unitConverterFactory;
@property(readonly, nonatomic) id <SXLayoutContextFactory> layoutContextFactory; // @synthesize layoutContextFactory=_layoutContextFactory;
@property(readonly, nonatomic) id <SXColumnCalculator> columnCalculator; // @synthesize columnCalculator=_columnCalculator;
// - (void).cxx_destruct;
- (id)layouterForContainerComponentBlueprint:(id)arg1 delegate:(id)arg2;
- (id)createColumnLayouterWithDelegate:(id)arg1;
- (id)initWithColumnCalculator:(id)arg1 layoutContextFactory:(id)arg2 unitConverterFactory:(id)arg3;

@end

