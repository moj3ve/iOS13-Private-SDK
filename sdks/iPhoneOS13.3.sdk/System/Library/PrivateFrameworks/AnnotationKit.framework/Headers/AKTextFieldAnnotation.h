//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKTextBoxAnnotation.h>

@class NSString;

@interface AKTextFieldAnnotation : AKTextBoxAnnotation
{
    NSString *_fieldName;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSString *fieldName; // @synthesize fieldName=_fieldName;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

