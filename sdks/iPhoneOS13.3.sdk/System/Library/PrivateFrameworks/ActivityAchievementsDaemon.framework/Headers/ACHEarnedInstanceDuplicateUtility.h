//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACHTemplateStore, NSCalendar;

@interface ACHEarnedInstanceDuplicateUtility : NSObject
{
    ACHTemplateStore *_templateStore;
    NSCalendar *_gregorianCalendar;
}

@property(retain, nonatomic) NSCalendar *gregorianCalendar; // @synthesize gregorianCalendar=_gregorianCalendar;
@property(nonatomic) __weak ACHTemplateStore *templateStore; // @synthesize templateStore=_templateStore;
// - (void).cxx_destruct;
- (id)earnedInstancesLimitedByEarnLimit:(id)arg1;
- (id)earnedInstancesWithoutDuplicates:(id)arg1;
- (id)initWithTemplateStore:(id)arg1;

@end

