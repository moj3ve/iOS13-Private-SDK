//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextContentView.h>

@class NSString, UILabel;

@interface SUTextContentView : UITextContentView
{
    UILabel *_placeholderLabel;
}

@property(retain, nonatomic) NSString *placeholder;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)dealloc;

@end

