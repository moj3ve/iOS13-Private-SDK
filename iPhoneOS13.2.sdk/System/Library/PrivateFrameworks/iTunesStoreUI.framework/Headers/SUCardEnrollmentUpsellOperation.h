//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import <iTunesStoreUI/SUPaymentSetupViewControllerDelegate-Protocol.h>

@class NSObject, NSString, UIViewController;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SUCardEnrollmentUpsellOperation : ISOperation <SUPaymentSetupViewControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_referrerIdentifier;
    long long _paymentSetupFeatureState;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    UIViewController *_viewController;
}

@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(nonatomic) long long paymentSetupFeatureState; // @synthesize paymentSetupFeatureState=_paymentSetupFeatureState;
@property(copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
- (void)paymentSetupViewControllerDidDismiss;
- (id)_paymentSetupFeature;
- (void)run;
@property(readonly, nonatomic) _Bool didSucceed;
- (id)initWithViewController:(id)arg1;

@end
