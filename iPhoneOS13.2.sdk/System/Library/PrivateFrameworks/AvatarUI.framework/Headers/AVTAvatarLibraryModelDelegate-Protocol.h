//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class AVTAvatarEditorViewController, NSArray, NSIndexSet, UIViewController;
@protocol AVTAvatarLibraryItem, AVTAvatarRecord;

@protocol AVTAvatarLibraryModelDelegate 
- (void)didDeleteRecord:(id <AVTAvatarRecord>)arg1;
- (void)didEditRecord:(id <AVTAvatarRecord>)arg1;
- (void)didAddRecord:(id <AVTAvatarRecord>)arg1;
- (void)insertItemsAtIndexes:(NSIndexSet *)arg1 deleteItemsAtIndexes:(NSIndexSet *)arg2 reloadItemsAtIndexes:(NSIndexSet *)arg3;
- (void)didUpdateLibraryItems:(NSArray *)arg1;
- (void)dismissController:(UIViewController *)arg1 completion:(void (^)(void))arg2;
- (void)presetEditorViewController:(AVTAvatarEditorViewController *)arg1;
- (void)presentUIViewController:(UIViewController *)arg1 forItem:(id <AVTAvatarLibraryItem>)arg2;
@end
