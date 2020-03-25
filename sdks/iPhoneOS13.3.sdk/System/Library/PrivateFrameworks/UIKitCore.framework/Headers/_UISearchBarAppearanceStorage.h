//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSValue, UIImage;

__attribute__((visibility("hidden")))
@interface _UISearchBarAppearanceStorage : NSObject
{
    NSMutableDictionary *searchFieldBackgroundImages;
    NSValue *searchFieldPositionAdjustment;
    NSMutableDictionary *iconImages;
    UIImage *separatorImage;
    UIImage *scopeBarBackgroundImage;
}

@property(retain, nonatomic) UIImage *scopeBarBackgroundImage; // @synthesize scopeBarBackgroundImage;
@property(retain, nonatomic) UIImage *separatorImage; // @synthesize separatorImage;
@property(retain, nonatomic) NSValue *searchFieldPositionAdjustment; // @synthesize searchFieldPositionAdjustment;
// - (void).cxx_destruct;
- (id)imageForIcon:(long long)arg1 state:(NSUInteger)arg2;
- (void)setImage:(id)arg1 forIcon:(long long)arg2 state:(NSUInteger)arg3;
- (id)searchFieldBackgroundImageForState:(NSUInteger)arg1;
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(NSUInteger)arg2;

@end
