//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UITextInputController;

__attribute__((visibility("hidden")))
@interface _UITextUndoManager : NSUndoManager
{
    UITextInputController *_inputController;
}

@property(nonatomic) __weak UITextInputController *inputController; // @synthesize inputController=_inputController;
// - (void).cxx_destruct;
- (void)removeAllActions;

@end
