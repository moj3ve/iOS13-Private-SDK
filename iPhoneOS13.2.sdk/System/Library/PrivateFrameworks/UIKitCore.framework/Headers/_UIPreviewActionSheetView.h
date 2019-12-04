//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSString, UILongPressGestureRecognizer;
@protocol _UIPreviewActionSheetViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIPreviewActionSheetView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    id <_UIPreviewActionSheetViewDelegate> _delegate;
    id /* block */ _completionHandler;
    NSArray *_actions;
    NSString *_title;
    UILongPressGestureRecognizer *_captureTouchesRecognizer;
    struct UIEdgeInsets _contentInsets;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *captureTouchesRecognizer; // @synthesize captureTouchesRecognizer=_captureTouchesRecognizer;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) id /* block */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak id <_UIPreviewActionSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)_performActionForPreviewAction:(id)arg1 interfaceAction:(id)arg2;
- (void)_setupViewHierarchy;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 items:(id)arg3 contentInsets:(struct UIEdgeInsets)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
