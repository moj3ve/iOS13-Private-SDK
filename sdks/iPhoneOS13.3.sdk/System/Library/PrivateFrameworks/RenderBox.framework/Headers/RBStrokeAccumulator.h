//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RenderBox/RBParticleStroke-Protocol.h>
#import <RenderBox/RBStroke-Protocol.h>

@interface RBStrokeAccumulator : NSObject <RBStroke, RBParticleStroke, NSCopying>
{
    struct vector<RBStrokeElement, std::__1::allocator<RBStrokeElement>> _elements;
    struct vector<float, std::__1::allocator<float>> _values;
    struct cf_ptr<CGImage *> _image;
    float _imageScale;
    int _imageCount;
    int _strokeType;
    int _blendMode;
    int _lineCap;
    int _lineJoin;
    float _miterLimit;
    long long _seed;
    CGRect _bounds;
    float _borderWidth;
    BOOL _hasBounds;
    BOOL _committed;
    BOOL _rotatesImage;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)applyFunction:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg1 info:(void )arg2;
@property(readonly, nonatomic) float borderWidth;
@property(readonly, nonatomic) CGRect boundingRect;
@property(nonatomic) long long seed;
@property(nonatomic) float miterLimit;
@property(nonatomic) int lineJoin;
@property(nonatomic) int lineCap;
@property(nonatomic) int blendMode;
@property(nonatomic) BOOL rotatesImage;
@property(nonatomic) int imageCount;
@property(nonatomic) float imageScale;
@property(retain, nonatomic) CGImage image;
@property(nonatomic) int strokeType;
- (void)removeAllElements;
- (void)addPath:(CGPath )arg1 transform:(CGAffineTransform)arg2;
- (void)addElement:(unsigned char)arg1 args:(const float )arg2;
- (id)commit;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end
