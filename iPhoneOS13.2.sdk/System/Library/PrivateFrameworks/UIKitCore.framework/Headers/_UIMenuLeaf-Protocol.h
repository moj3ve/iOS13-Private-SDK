//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSString, UIImage, _UIMenuLeafValidation;
@protocol _UIMenuLeaf, _UIMenuLeafAlternate;

@protocol _UIMenuLeaf 
@property(nonatomic) long long state;
@property(nonatomic) unsigned long long attributes;
@property(copy, nonatomic) NSString *discoverabilityTitle;
@property(copy, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *title;
- (id <_UIMenuLeaf>)_validatedLeafWithAlternate:(id <_UIMenuLeafAlternate>)arg1 target:(id)arg2 validation:(_UIMenuLeafValidation *)arg3;
- (id)_resolvedTargetFromFirstTarget:(id)arg1;
- (void)_performWithTarget:(id)arg1;
- (long long)_leafKeyModifierFlags;
- (NSString *)_leafKeyInput;
- (NSArray *)_leafAlternates;
@end
