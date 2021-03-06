//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol SiriUITemplateModel, SiriUITemplateModelPrivate, SiriUITemplateViewControllerDelegate;

@interface SiriUITemplateViewController : UIViewController
{
    BOOL _active;
    BOOL _compressed;
    id <SiriUITemplateModel> _templateModel;
    id <SiriUITemplateViewControllerDelegate> _delegate;
}

+ (id)templateViewControllerForTemplateModel:(id)arg1;
@property(nonatomic, getter=isCompressed) BOOL compressed; // @synthesize compressed=_compressed;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(nonatomic) __weak id <SiriUITemplateViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SiriUITemplateModel> templateModel; // @synthesize templateModel=_templateModel;
// - (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)prepareForDismissal;
@property(readonly, nonatomic) id <SiriUITemplateModelPrivate> templateModelPrivate;
- (void)loadView;
- (id)_initWithTemplateModel:(id)arg1;

@end

