//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/TPBottomBar.h>

@class TPButton;

@interface TPBottomSingleButtonBar : TPBottomBar
{
    id _delegate;
    TPButton *_button;
}

+ (id)_backgroundImage;
// - (void).cxx_destruct;
- (id)button;
- (void)setButton:(id)arg1 andStyle:(BOOL)arg2;
- (double)buttonWidth;

@end

