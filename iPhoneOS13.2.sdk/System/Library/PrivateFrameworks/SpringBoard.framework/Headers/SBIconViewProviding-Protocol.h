//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SBIcon, SBIconView;

@protocol SBIconViewProviding
- (void)configureIconView:(SBIconView *)arg1 forIcon:(SBIcon *)arg2;
- (_Bool)isIconViewRecycled:(SBIconView *)arg1;
- (void)recycleIconView:(SBIconView *)arg1;
- (SBIconView *)dequeueReusableIconViewOfClass:(Class)arg1;
@end
