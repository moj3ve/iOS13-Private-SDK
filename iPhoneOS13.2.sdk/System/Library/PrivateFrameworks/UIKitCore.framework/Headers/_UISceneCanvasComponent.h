//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneComponentProviding-Protocol.h>

@class NSString, UIScene;
@protocol _UICanvasComponentProviding;

__attribute__((visibility("hidden")))
@interface _UISceneCanvasComponent : NSObject <_UISceneComponentProviding>
{
    Class canvasComponentClass;
    id <_UICanvasComponentProviding> _canvasComponent;
}

- (_Bool)respondsToSelector:(SEL)arg1;
- (void)_sceneWillInvalidate:(id)arg1;
- (void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (id)_actionHandlersForScene:(id)arg1;
- (id)_settingsDiffActionsForScene:(id)arg1;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene;
- (id)initWithScene:(id)arg1;
@property(readonly, nonatomic) id <_UICanvasComponentProviding> canvasComponent;
- (id)initWithCanvasComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
