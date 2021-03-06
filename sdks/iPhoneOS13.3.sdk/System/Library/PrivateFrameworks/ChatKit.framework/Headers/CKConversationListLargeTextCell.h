//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKConversationListCell.h>

@class NSArray, NSLayoutConstraint, NSTextAttachment, UIColor, UILayoutGuide;

@interface CKConversationListLargeTextCell : CKConversationListCell
{
    UILayoutGuide *_firstLineLayoutGuide;
    NSLayoutConstraint *_editingDependentConstraint;
    NSArray *_contentSizeCategoryDependentConstraints;
    NSTextAttachment *_unreadIndicatorAttachment;
    UIColor *_unreadIndicatorColor;
}

+ (double)cellHeight;
+ (id)hyphenationParagraphStyle;
+ (id)identifierForConversation:(id)arg1;
@property(retain, nonatomic) UIColor *unreadIndicatorColor; // @synthesize unreadIndicatorColor=_unreadIndicatorColor;
@property(retain, nonatomic) NSTextAttachment *unreadIndicatorAttachment; // @synthesize unreadIndicatorAttachment=_unreadIndicatorAttachment;
@property(retain, nonatomic) NSArray *contentSizeCategoryDependentConstraints; // @synthesize contentSizeCategoryDependentConstraints=_contentSizeCategoryDependentConstraints;
@property(retain, nonatomic) NSLayoutConstraint *editingDependentConstraint; // @synthesize editingDependentConstraint=_editingDependentConstraint;
@property(retain, nonatomic) UILayoutGuide *firstLineLayoutGuide; // @synthesize firstLineLayoutGuide=_firstLineLayoutGuide;
// - (void).cxx_destruct;
- (id)_contentSizeCategoryDependentConstraints;
- (id)_constraintForEditing:(BOOL)arg1;
- (void)updateForEditing:(BOOL)arg1;
- (void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2;
- (void)updateFromLabelWithText:(id)arg1;
- (void)contentSizeCategoryDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

