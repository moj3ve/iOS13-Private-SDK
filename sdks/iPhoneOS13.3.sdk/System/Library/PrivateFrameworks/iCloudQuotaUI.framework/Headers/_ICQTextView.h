//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSArray, NSDictionary, NSString;

@interface _ICQTextView : UITextView
{
    NSString *_format;
    NSArray *_links;
    NSDictionary *_attributes;
}

@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSArray *links; // @synthesize links=_links;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
// - (void).cxx_destruct;
- (void)setAttributedText;
- (BOOL)canBecomeFirstResponder;
- (id)initWithFrame:(CGRect)arg1;

@end

