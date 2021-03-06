//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSString, UIImage, _UIFloatingContentCornerRadiusAnimatingScreenScaleInheritingView, _UIFloatingContentCornerRadiusAnimatingView, _UIFloatingContentTransformView, _UIFocusAnimationConfiguration;
@protocol _UIFloatingContentViewDelegate;

@interface _UIFloatingContentView : UIView
{
    id <_UIFloatingContentViewDelegate> _floatingContentViewDelegate;
    _UIFloatingContentTransformView *_transformView;
    _UIFloatingContentCornerRadiusAnimatingScreenScaleInheritingView *_containerView;
    _UIFloatingContentCornerRadiusAnimatingView *_highlightView;
    _UIFloatingContentCornerRadiusAnimatingView *_visualEffectContainerView;
    UIView *_shadowView;
    UIView *_contentView;
    UIView *_highContrastFocusIndicatorView;
    struct __CFDictionary _backgroundColorsByState;
    NSMutableArray *_contentMotionEffects;
    double _shadowOpacityLight;
    double _shadowOpacityDark;
    CGPoint _focusDirection;
    CGPoint _contentRotation;
    CGPoint _contentTranslation;
    BOOL _customScale;
    BOOL _symmetricScale;
    BOOL _stretchableShadowImage;
    BOOL _useShadowImage;
    BOOL _shadowEnabled;
    BOOL _contentOpaque;
    BOOL _scalesBackwards;
    BOOL _roundContentWhenDeselected;
    BOOL __disableOutsetShadowPath;
    BOOL _showsHighContrastFocusIndicator;
    double _cornerRadius;
    double _visualEffectContainerViewScaleFactor;
    _UIFocusAnimationConfiguration *_focusAnimationConfiguration;
    double _shadowRadius;
    double _shadowVerticalOffset;
    double _unfocusedShadowRadius;
    double _unfocusedShadowOpacity;
    double _unfocusedShadowVerticalOffset;
    UIImage *_shadowImage;
    NSUInteger _controlState;
    long long _highlightStyle;
    NSString *_cornerCurve;
    id /* CDUnknownBlockType */ _focusAnimationConfigurationHandler;
    CGPoint _focusScaleAnchorPoint;
    CGSize _shadowSize;
    CGSize _unfocusedShadowExpansion;
    CGSize _shadowExpansion;
    CGSize _asymmetricScaleFactor;
    CGSize _asymmetricFocusedSizeIncrease;
    CGRect _shadowContentsCenter;
}

+ (id)_defaultFocusAnimationConfiguration;
@property(copy, nonatomic) id /* CDUnknownBlockType */ focusAnimationConfigurationHandler; // @synthesize focusAnimationConfigurationHandler=_focusAnimationConfigurationHandler;
@property(nonatomic) NSString *cornerCurve; // @synthesize cornerCurve=_cornerCurve;
@property(nonatomic) BOOL showsHighContrastFocusIndicator; // @synthesize showsHighContrastFocusIndicator=_showsHighContrastFocusIndicator;
@property(nonatomic) BOOL _disableOutsetShadowPath; // @synthesize _disableOutsetShadowPath=__disableOutsetShadowPath;
@property(nonatomic) CGSize asymmetricFocusedSizeIncrease; // @synthesize asymmetricFocusedSizeIncrease=_asymmetricFocusedSizeIncrease;
@property(nonatomic) CGSize asymmetricScaleFactor; // @synthesize asymmetricScaleFactor=_asymmetricScaleFactor;
@property(nonatomic) BOOL roundContentWhenDeselected; // @synthesize roundContentWhenDeselected=_roundContentWhenDeselected;
@property(nonatomic) BOOL scalesBackwards; // @synthesize scalesBackwards=_scalesBackwards;
@property(nonatomic, getter=isContentOpaque) BOOL contentOpaque; // @synthesize contentOpaque=_contentOpaque;
@property(nonatomic) long long highlightStyle; // @synthesize highlightStyle=_highlightStyle;
@property(nonatomic) NSUInteger controlState; // @synthesize controlState=_controlState;
@property(nonatomic) CGRect shadowContentsCenter; // @synthesize shadowContentsCenter=_shadowContentsCenter;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(nonatomic) CGSize shadowExpansion; // @synthesize shadowExpansion=_shadowExpansion;
@property(nonatomic) CGSize unfocusedShadowExpansion; // @synthesize unfocusedShadowExpansion=_unfocusedShadowExpansion;
@property(nonatomic) double unfocusedShadowVerticalOffset; // @synthesize unfocusedShadowVerticalOffset=_unfocusedShadowVerticalOffset;
@property(nonatomic) double unfocusedShadowOpacity; // @synthesize unfocusedShadowOpacity=_unfocusedShadowOpacity;
@property(nonatomic) double unfocusedShadowRadius; // @synthesize unfocusedShadowRadius=_unfocusedShadowRadius;
@property(nonatomic) double shadowVerticalOffset; // @synthesize shadowVerticalOffset=_shadowVerticalOffset;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) CGSize shadowSize; // @synthesize shadowSize=_shadowSize;
@property(nonatomic, getter=isShadowEnabled) BOOL shadowEnabled; // @synthesize shadowEnabled=_shadowEnabled;
@property(nonatomic) BOOL useShadowImage; // @synthesize useShadowImage=_useShadowImage;
@property(copy, nonatomic) _UIFocusAnimationConfiguration *focusAnimationConfiguration; // @synthesize focusAnimationConfiguration=_focusAnimationConfiguration;
@property(nonatomic) double visualEffectContainerViewScaleFactor; // @synthesize visualEffectContainerViewScaleFactor=_visualEffectContainerViewScaleFactor;
@property(nonatomic) CGPoint focusScaleAnchorPoint; // @synthesize focusScaleAnchorPoint=_focusScaleAnchorPoint;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
// - (void).cxx_destruct;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)_setShadowImageIfNeeded;
- (void)_updateShadowContentsScaleForPrimaryState:(NSUInteger)arg1;
- (void)_updateHighContrastFocusIndicatorForPrimaryState:(NSUInteger)arg1;
- (void)_updateTransformForPrimaryState:(NSUInteger)arg1;
- (void)_updateHighlightViewForPrimaryState:(NSUInteger)arg1;
- (void)_updateContainerLayerQualityForPrimaryState:(NSUInteger)arg1;
- (void)_updateScaleFactor;
@property(nonatomic) double focusedSizeIncrease;
@property(nonatomic) double scaleFactor;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (double)_currentShadowOpacity;
- (double)shadowOpacityForUserInterfaceStyle:(long long)arg1;
- (void)setShadowOpacity:(double)arg1 forUserInterfaceStyle:(long long)arg2;
@property(nonatomic) double shadowOpacity;
- (void)_updateShadowLayer;
- (void)_updateShadowOpacityForPrimaryState:(NSUInteger)arg1;
- (double)_effectiveShadowOpacity;
- (double)_effectiveShadowRadius;
- (void)_updateHighContrastFocusIndicatorView;
@property(nonatomic) BOOL clipsContentToBounds;
- (void)_setControlState:(NSUInteger)arg1 withAnimationCoordinator:(id)arg2;
- (void)setControlState:(NSUInteger)arg1 withAnimationCoordinator:(id)arg2;
- (void)setControlState:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)_layoutHighContrastFocusIndicator;
- (void)_layoutShadow;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (CGPath )_shadowPathForSize:(CGSize)arg1 radius:(double)arg2;
- (void)setShadowImage:(id)arg1 stretchable:(BOOL)arg2;
- (void)setBackgroundColor:(id)arg1 forState:(NSUInteger)arg2;
- (id)backgroundColorForState:(NSUInteger)arg1;
- (void)_updateCornerRadiusLayers;
@property(nonatomic, getter=isContinuousCornerEnabled) BOOL continuousCornerEnabled;
- (id)transformView;
- (id)highlightView;
@property(readonly, nonatomic) UIView *visualEffectContainerView;
@property(readonly, nonatomic) UIView *contentView;
- (BOOL)_shouldAppearToFloatForPrimaryState:(NSUInteger)arg1;
- (BOOL)_shouldApplyCornerRadiusForPrimaryState:(NSUInteger)arg1;
- (NSUInteger)_primaryStateForState:(NSUInteger)arg1;
- (void)_uninstallContentMotionEffects;
- (void)_installContentMotionEffects;
- (void)removeContentMotionEffect:(id)arg1;
- (void)addContentMotionEffect:(id)arg1;
- (void)setContentMotionRotation:(CGPoint)arg1 translation:(CGPoint)arg2;
- (BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
@property(nonatomic) __weak id <_UIFloatingContentViewDelegate> floatingContentDelegate;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

