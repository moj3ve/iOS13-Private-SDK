//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray;

@interface HUPocketButtonViewController : UIViewController
{
    NSArray *_descriptors;
}

+ (struct CGSize)calculatePreferredContentSizeForDescriptors:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *descriptors; // @synthesize descriptors=_descriptors;
- (void)_buttonHit:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithButtonDescriptors:(id)arg1;

@end
