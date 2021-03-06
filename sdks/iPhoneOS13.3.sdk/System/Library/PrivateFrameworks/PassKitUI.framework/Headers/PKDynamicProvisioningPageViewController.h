//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import <PassKitUI/PKExplanationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>

@class PKDynamicProvisioningPageContent, UIImage;

@interface PKDynamicProvisioningPageViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKViewControllerPreflightable>
{
    UIImage *_heroImage;
    PKDynamicProvisioningPageContent *_page;
    id /* CDUnknownBlockType */ _primaryButtonAction;
    id /* CDUnknownBlockType */ _secondaryButtonAction;
    id /* CDUnknownBlockType */ _bodyButtonAction;
    id /* CDUnknownBlockType */ _cancelButtonAction;
    id /* CDUnknownBlockType */ _doneButtonAction;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ doneButtonAction; // @synthesize doneButtonAction=_doneButtonAction;
@property(copy, nonatomic) id /* CDUnknownBlockType */ cancelButtonAction; // @synthesize cancelButtonAction=_cancelButtonAction;
@property(copy, nonatomic) id /* CDUnknownBlockType */ bodyButtonAction; // @synthesize bodyButtonAction=_bodyButtonAction;
@property(copy, nonatomic) id /* CDUnknownBlockType */ secondaryButtonAction; // @synthesize secondaryButtonAction=_secondaryButtonAction;
@property(copy, nonatomic) id /* CDUnknownBlockType */ primaryButtonAction; // @synthesize primaryButtonAction=_primaryButtonAction;
@property(readonly, nonatomic) PKDynamicProvisioningPageContent *page; // @synthesize page=_page;
// - (void).cxx_destruct;
- (void)explanationViewDidSelectBodyButton:(id)arg1;
- (void)explanationViewControllerDidSelectDone:(id)arg1;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)preflightWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)viewDidLoad;
- (id)initWithPage:(id)arg1 context:(long long)arg2;

@end

