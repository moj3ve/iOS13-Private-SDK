//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPRegion.h>

@class CPParagraphListItem;

__attribute__((visibility("hidden")))
@interface CPParagraph : CPRegion
{
    BOOL noIndentation;
    BOOL below;
    NSUInteger alignment;
    BOOL hasDropCap;
    id flowProperties;
    CPParagraphListItem *listItem;
    double preformatWidth;
}

@property(retain, nonatomic) CPParagraphListItem *listItem; // @synthesize listItem;
- (BOOL)isPreformattedWithUnitWidth:(double )arg1;
- (void)setAlignment:(NSUInteger)arg1;
- (NSUInteger)alignment;
- (BOOL)below;
- (void)setBelow:(BOOL)arg1;
- (double)selectionBottom;
- (CGRect)reducedBounds;
- (void)explode;
- (void)setHasDropCap:(BOOL)arg1;
- (BOOL)hasDropCap;
- (BOOL)noIndentation;
- (void)setNoIndentation:(BOOL)arg1;
- (BOOL)isShapeRegion;
- (BOOL)isImageRegion;
- (void)setIsImageRegion:(BOOL)arg1;
- (BOOL)isRowRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isBoxRegion;
- (void)setIsTextRegion:(BOOL)arg1;
- (BOOL)isTextRegion;
- (NSUInteger)index;
- (BOOL)isListItemRegion;
- (BOOL)isParagraphRegion;
- (void)accept:(id)arg1;
- (void)setFlowProperties:(id)arg1;
- (id)flowProperties;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;

@end
