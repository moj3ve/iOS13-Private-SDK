//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Silex/STTextCanvasRenderSource-Protocol.h>
#import <Silex/SXAXAssistiveTechStatusChangeListener-Protocol.h>
#import <Silex/SXComponentInteractable-Protocol.h>
#import <Silex/SXTransitionableComponentView-Protocol.h>
#import <Silex/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, SXColumnLayout, SXFillView, SXUnitConverter, SXViewport;
@protocol SXComponent, SXComponentHosting, SXComponentLayout, SXComponentStyle, SXComponentStyleRenderer, SXComponentStyleRendererFactory, SXDOMObjectProviding, SXPresentationDelegate;

@interface SXComponentView : UIView <UIGestureRecognizerDelegate, STTextCanvasRenderSource, SXAXAssistiveTechStatusChangeListener, SXTransitionableComponentView, SXComponentInteractable>
{
    _Bool _hasRenderedContents;
    _Bool _requiresThoroughFrameCalculations;
    _Bool _isDraggable;
    _Bool _animationsAndBehaviorsEnabled;
    _Bool _highlighted;
    _Bool _allowViewHierarchyRemoval;
    _Bool _hasAnimation;
    _Bool _hasBehaviors;
    _Bool _hasRenderedComponentStyle;
    CDStruct_1cc9d0d0 _presentationChanges;
    id <SXComponentLayout> _componentLayout;
    id <SXComponent> _component;
    id <SXDOMObjectProviding> _DOMObjectProvider;
    SXViewport *_viewport;
    id <SXPresentationDelegate> _presentationDelegate;
    long long _visibilityState;
    long long _presentationState;
    UIView *_contentView;
    UIView *_backgroundView;
    SXFillView *_fillView;
    SXColumnLayout *_documentColumnLayout;
    SXUnitConverter *_unitConverter;
    UIView *_highlightView;
    id <SXComponentStyleRendererFactory> _componentStyleRendererFactory;
    id <SXComponentStyleRenderer> _componentStyleRenderer;
    id <SXComponentStyle> _componentStyle;
    id <SXComponentHosting> _componentHost;
    unsigned long long _componentIndex;
    struct CGRect _absoluteFrame;
    struct UIEdgeInsets _componentLayoutMargins;
    struct UIEdgeInsets _borderInsets;
    struct CGRect _contentFrame;
    struct CGRect _backgroundViewFrame;
    struct CGRect _originalFrame;
    struct CGRect _presentationFrame;
}

@property(nonatomic) CDStruct_1cc9d0d0 presentationChanges; // @synthesize presentationChanges=_presentationChanges;
@property(nonatomic) struct CGRect presentationFrame; // @synthesize presentationFrame=_presentationFrame;
@property(nonatomic) unsigned long long componentIndex; // @synthesize componentIndex=_componentIndex;
@property(nonatomic) __weak id <SXComponentHosting> componentHost; // @synthesize componentHost=_componentHost;
@property(nonatomic) _Bool hasRenderedComponentStyle; // @synthesize hasRenderedComponentStyle=_hasRenderedComponentStyle;
@property(nonatomic) _Bool hasBehaviors; // @synthesize hasBehaviors=_hasBehaviors;
@property(nonatomic) _Bool hasAnimation; // @synthesize hasAnimation=_hasAnimation;
@property(nonatomic) _Bool allowViewHierarchyRemoval; // @synthesize allowViewHierarchyRemoval=_allowViewHierarchyRemoval;
@property(nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property(retain, nonatomic) id <SXComponentStyle> componentStyle; // @synthesize componentStyle=_componentStyle;
@property(readonly, nonatomic) id <SXComponentStyleRenderer> componentStyleRenderer; // @synthesize componentStyleRenderer=_componentStyleRenderer;
@property(readonly, nonatomic) id <SXComponentStyleRendererFactory> componentStyleRendererFactory; // @synthesize componentStyleRendererFactory=_componentStyleRendererFactory;
@property(readonly, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) SXUnitConverter *unitConverter; // @synthesize unitConverter=_unitConverter;
@property(retain, nonatomic) SXColumnLayout *documentColumnLayout; // @synthesize documentColumnLayout=_documentColumnLayout;
@property(nonatomic) _Bool animationsAndBehaviorsEnabled; // @synthesize animationsAndBehaviorsEnabled=_animationsAndBehaviorsEnabled;
@property(readonly, nonatomic) _Bool isDraggable; // @synthesize isDraggable=_isDraggable;
@property(nonatomic) _Bool requiresThoroughFrameCalculations; // @synthesize requiresThoroughFrameCalculations=_requiresThoroughFrameCalculations;
@property(nonatomic) struct CGRect backgroundViewFrame; // @synthesize backgroundViewFrame=_backgroundViewFrame;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) struct UIEdgeInsets borderInsets; // @synthesize borderInsets=_borderInsets;
@property(nonatomic) struct UIEdgeInsets componentLayoutMargins; // @synthesize componentLayoutMargins=_componentLayoutMargins;
@property(readonly, nonatomic) _Bool hasRenderedContents; // @synthesize hasRenderedContents=_hasRenderedContents;
@property(nonatomic) __weak SXFillView *fillView; // @synthesize fillView=_fillView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
@property(nonatomic) long long visibilityState; // @synthesize visibilityState=_visibilityState;
@property(readonly, nonatomic) __weak id <SXPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
@property(readonly, nonatomic) id <SXDOMObjectProviding> DOMObjectProvider; // @synthesize DOMObjectProvider=_DOMObjectProvider;
@property(readonly, nonatomic) id <SXComponent> component; // @synthesize component=_component;
@property(readonly, nonatomic) id <SXComponentLayout> componentLayout; // @synthesize componentLayout=_componentLayout;
- (void)assistiveTechnologyStatusDidChange;
- (_Bool)userInteractable;
@property(readonly, copy) NSString *description;
- (id)classification;
@property(nonatomic) struct CGRect absoluteFrame; // @synthesize absoluteFrame=_absoluteFrame;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)didApplyBehavior:(id)arg1;
- (void)animationDidFinish:(id)arg1;
- (void)animationDidStart:(id)arg1;
- (_Bool)gestureShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)provideInfosLayoutTo:(id)arg1;
@property(readonly, nonatomic) _Bool isTransitionable;
- (void)prepareForTransitionType:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool transitionViewShouldFadeInContent;
@property(readonly, nonatomic) UIView *transitionContentView;
@property(readonly, nonatomic) UIView *transitionContainerView;
- (_Bool)usesThumbnailWithImageIdentifier:(id)arg1;
@property(readonly, nonatomic) struct CGRect transitionContainerFrame;
@property(readonly, nonatomic) struct CGRect transitionVisibleFrame;
@property(readonly, nonatomic) _Bool transitionViewIsVisible;
@property(readonly, nonatomic) struct CGRect transitionContentFrame;
- (void)invalidateComponentStyle;
- (void)renderComponentStyle;
- (void)prepareComponentStyleRendererForStyle:(id)arg1;
- (void)setupComponentStyleRendererForStyle:(id)arg1;
- (void)updateAllowHierarchyRemovalWithComponent:(id)arg1 componentStyle:(id)arg2;
- (_Bool)allowHierarchyRemoval;
- (void)restoreBehavior;
- (struct CGRect)originalFrameForContentView:(id)arg1 behavior:(id)arg2;
- (id)contentViewForBehavior:(id)arg1;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)willPresentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)renderContentsIfNeeded;
- (void)discardContents;
- (void)renderContents;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)configure;
- (void)loadComponent:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
