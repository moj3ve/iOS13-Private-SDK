//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKTextView.h>

@interface SearchUISelectableTextView : TLKTextView
{
    BOOL _allowsDefine;
}

@property(nonatomic) BOOL allowsDefine; // @synthesize allowsDefine=_allowsDefine;
- (void)_define:(id)arg1;
- (BOOL)_canDefine;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;

@end

