//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class SBTransientOverlayViewController;

@interface SBTransientOverlayDismissalRequest : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _animated;
    id /* block */ _completionHandler;
    long long _requestType;
    SBTransientOverlayViewController *_viewController;
}

+ (id)dismissalRequestForViewController:(id)arg1;
+ (id)dismissalRequestForAllViewControllers;
@property(readonly, nonatomic) SBTransientOverlayViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(readonly, copy, nonatomic) id /* block */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
- (id)_copyWithClass:(Class)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;

@end
