//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SSFlashView : UIView
{
    NSUInteger _style;
}

+ (double)expectedAnimationDurationForStyle:(NSUInteger)arg1;
+ (id)flashViewForStyle:(NSUInteger)arg1;
+ (Class)_flashViewClass;
@property(nonatomic) NSUInteger style; // @synthesize style=_style;
- (void)flashWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

