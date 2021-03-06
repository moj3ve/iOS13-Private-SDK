//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface TSKFormat : NSObject <NSCopying>
{
    int _formatType;
}

+ (id)formatFromArchive:(const struct FormatStructArchive )arg1;
+ (unsigned int)validatedDecimalPlaces:(NSUInteger)arg1;
+ (id)defaultFormatWithFormatType:(int)arg1 locale:(id)arg2;
+ (id)booleanFormat;
+ (id)checkboxFormat;
+ (id)ratingFormat;
+ (id)textFormat;
+ (id)formatFromTSUFormatStruct:(CDStruct_b1066b25)arg1;
@property(readonly, nonatomic) int formatType; // @synthesize formatType=_formatType;
- (void)encodeToArchive:(struct FormatStructArchive )arg1 archivingCustomFormats:(BOOL)arg2;
- (void)encodeToArchive:(struct FormatStructArchive )arg1;
- (id)description;
- (id)asMultipleChoiceListFormat;
- (id)asStepperSliderFormat;
- (id)asBooleanFormat;
- (id)asCustomFormatWrapper;
- (id)asDurationFormat;
- (id)asDateTimeFormat;
- (id)asBaseFormat;
- (id)asFractionFormat;
- (id)asCurrencyFormat;
- (id)asNumberFormat;
- (id)stringFromDurationTimeInterval:(double)arg1 locale:(id)arg2;
- (id)stringFromBool:(BOOL)arg1 locale:(id)arg2;
- (id)stringFromDate:(id)arg1 locale:(id)arg2;
- (id)stringFromString:(id)arg1 locale:(id)arg2;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (BOOL)hasSimpleFormatType;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithFormatType:(int)arg1;
@property(readonly, nonatomic) CDStruct_b1066b25 formatStruct;

@end

