//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <DocumentManagerExecutables/DOCAppearanceCustomization-Protocol.h>

@class DOCAppearance;

@interface UIViewController (DOCAppearanceInheritance) <DOCAppearanceCustomization>
+ (void)load;
- (void)effectiveAppearanceDidChange:(id)arg1;
@property(readonly) DOCAppearance *effectiveAppearance;
- (void)_notifyAppearanceChange:(id)arg1;
- (void)setAppearance:(id)arg1;
- (id)_appearance;
- (void)doc_viewDidLoad;
@end

