//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, PGManager;
@protocol PGGraphUpdateInventory;

@protocol PGGraphDataModelEnrichmentProcessor <NSObject>
+ (NSString *)backgroundJobName;
+ (double)backgroundJobTimeout;
+ (BOOL)supportsBackgroundJob;
- (void)enrichDataModelWithManager:(PGManager *)arg1 graphUpdateInventory:(id <PGGraphUpdateInventory>)arg2 progressBlock:(void (^)(double, BOOL ))arg3;
@end

