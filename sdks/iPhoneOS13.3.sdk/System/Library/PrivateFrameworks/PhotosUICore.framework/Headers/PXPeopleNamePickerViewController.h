//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class NSArray, NSLayoutConstraint, PXPeopleNamePickerResultsTableViewController, PXPeopleNamePickerTitleView;
@protocol PXPeopleNamePickerViewControllerDelegate;

@interface PXPeopleNamePickerViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UIAdaptivePresentationControllerDelegate>
{
    PXPeopleNamePickerTitleView *_titleView;
    id <PXPeopleNamePickerViewControllerDelegate> _delegate;
    NSArray *_savedRightBarItems;
    double _yOffset;
    NSLayoutConstraint *_resultsViewBottomConstraint;
    PXPeopleNamePickerResultsTableViewController *_resultsController;
}

@property(retain, nonatomic) PXPeopleNamePickerResultsTableViewController *resultsController; // @synthesize resultsController=_resultsController;
@property(retain, nonatomic) NSLayoutConstraint *resultsViewBottomConstraint; // @synthesize resultsViewBottomConstraint=_resultsViewBottomConstraint;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(retain, nonatomic) NSArray *savedRightBarItems; // @synthesize savedRightBarItems=_savedRightBarItems;
@property(nonatomic) __weak id <PXPeopleNamePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PXPeopleNamePickerTitleView *titleView; // @synthesize titleView=_titleView;
// - (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)_changePlaceholderTextOfTextField:(id)arg1 toColor:(id)arg2;
- (void)_hideResultsView;
- (void)_showResultsView;
- (double)_titleViewMaxWidthForEditing:(BOOL)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_applicationDidEnterBackground;
- (void)endNamingSession;
- (void)adjustForAccessoryViewYOffset:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPerson:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

