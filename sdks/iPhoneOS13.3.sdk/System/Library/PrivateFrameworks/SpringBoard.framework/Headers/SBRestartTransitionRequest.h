//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class BKSDisplayRenderOverlayDescriptor, NSString, NSURL;

@interface SBRestartTransitionRequest : NSObject <BSDescriptionProviding, NSCopying>
{
    NSString *_requester;
    NSString *_reason;
    int _restartType;
    double _delay;
    BOOL _wantsPersistentSnapshot;
    BKSDisplayRenderOverlayDescriptor *_customOverlayDescriptor;
    NSURL *_applicationLaunchURL;
}

@property(copy, nonatomic) NSURL *applicationLaunchURL; // @synthesize applicationLaunchURL=_applicationLaunchURL;
@property(copy, nonatomic) BKSDisplayRenderOverlayDescriptor *customOverlayDescriptor; // @synthesize customOverlayDescriptor=_customOverlayDescriptor;
@property(nonatomic) BOOL wantsPersistentSnapshot; // @synthesize wantsPersistentSnapshot=_wantsPersistentSnapshot;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) int restartType; // @synthesize restartType=_restartType;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *requester; // @synthesize requester=_requester;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithRequester:(id)arg1 reason:(id)arg2;
- (id)init;

@end

