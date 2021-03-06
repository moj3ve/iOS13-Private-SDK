//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKShapeAnnotation.h>

#import <AnnotationKit/AKRectangularAnnotationProtocol-Protocol.h>
#import <AnnotationKit/AKRotatableAnnotationProtocol-Protocol.h>
#import <AnnotationKit/AKTextAnnotationProtocol-Protocol.h>

@class NSDictionary, NSTextStorage;

@interface AKRectangularShapeAnnotation : AKShapeAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKTextAnnotationProtocol>
{
    NSTextStorage *_annotationText;
    NSDictionary *_typingAttributes;
    double _rotationAngle;
    CGRect _rectangle;
}

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(copy) NSDictionary *typingAttributes; // @synthesize typingAttributes=_typingAttributes;
@property(retain) NSTextStorage *annotationText; // @synthesize annotationText=_annotationText;
@property CGRect rectangle; // @synthesize rectangle=_rectangle;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)translateBy:(CGPoint)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2;
- (void)adjustModelToCompensateForOriginalExif;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;
- (id)init;

@end

