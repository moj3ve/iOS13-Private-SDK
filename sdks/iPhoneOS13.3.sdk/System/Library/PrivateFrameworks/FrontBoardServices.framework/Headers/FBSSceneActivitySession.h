//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>

@class FBSProcessAssertion, FBSProcessExecutionPolicy, FBSProcessWatchdog, NSString;
@protocol FBSProcess, FBSSceneHandle;

@interface FBSSceneActivitySession : NSObject <BSDescriptionProviding>
{
    NSString *_name;
    NSString *_identifier;
    id <FBSSceneHandle> _scene;
    FBSProcessExecutionPolicy *_executionPolicy;
    id /* CDUnknownBlockType */ _errorHandler;
    BOOL _open;
    BOOL _invalidated;
    id <FBSProcess> _process;
    FBSProcessAssertion *_assertion;
    FBSProcessWatchdog *_watchdog;
}

@property(readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic, getter=isOpen) BOOL open; // @synthesize open=_open;
@property(copy, nonatomic) FBSProcessExecutionPolicy *executionPolicy; // @synthesize executionPolicy=_executionPolicy;
@property(nonatomic) __weak id <FBSSceneHandle> scene; // @synthesize scene=_scene;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)close;
- (void)open;
- (BOOL)_isValid;
@property(copy, nonatomic) id /* CDUnknownBlockType */ errorHandler; // @dynamic errorHandler;
- (void)dealloc;
- (id)initWithName:(id)arg1 scene:(id)arg2 executionPolicy:(id)arg3;

@end

