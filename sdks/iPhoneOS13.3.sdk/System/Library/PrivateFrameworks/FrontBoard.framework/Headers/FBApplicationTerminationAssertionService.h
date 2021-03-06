//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BKSTerminationAssertionObserver-Protocol.h>

@protocol FBApplicationTerminationAssertionServiceDelegate;

@interface FBApplicationTerminationAssertionService : NSObject <BKSTerminationAssertionObserver>
{
    id <FBApplicationTerminationAssertionServiceDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <FBApplicationTerminationAssertionServiceDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_reasonForEfficacy:(NSUInteger)arg1;
- (NSUInteger)_efficacyForReason:(id)arg1;
- (void)_notifyDelegateOfRelinquishForBundleID:(id)arg1;
- (void)_notifyDelegateOfAcquisitionForBundleID:(id)arg1 efficacy:(NSUInteger)arg2;
- (void)noteTerminationAssertionEfficacyChangedTo:(NSUInteger)arg1 forBundleIdentifier:(id)arg2;
- (id)terminationAssertionsForBundleID:(id)arg1 withReason:(id)arg2;
- (id)terminationAssertionsForBundleID:(id)arg1;
- (void)dealloc;
- (id)init;

@end

