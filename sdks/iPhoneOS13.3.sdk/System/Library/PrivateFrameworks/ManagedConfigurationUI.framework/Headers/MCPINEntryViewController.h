//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/DevicePINController.h>


@protocol DevicePINControllerDelegate;

__attribute__((visibility("hidden")))
@interface MCPINEntryViewController : DevicePINController <UIAdaptivePresentationControllerDelegate>
{
    id <DevicePINControllerDelegate> _delegate;
    NSUInteger _style;
}

@property(nonatomic) NSUInteger style; // @synthesize style=_style;
@property(nonatomic) __weak id <DevicePINControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)stringsBundle;
- (id)stringsTable;
- (void)_updateStyle;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)init;

@end

