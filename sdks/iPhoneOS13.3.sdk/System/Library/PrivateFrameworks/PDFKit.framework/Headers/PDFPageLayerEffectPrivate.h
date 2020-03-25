//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSMutableArray, NSMutableDictionary, NSUUID, PDFAnnotation, PDFPageLayerEffect, PDFScannerResult;
@protocol PDFPageLayerInterface;

__attribute__((visibility("hidden")))
@interface PDFPageLayerEffectPrivate : NSObject
{
    id <PDFPageLayerInterface> pageLayer;
    NSUUID *uuid;
    CGRect pageFrame;
    BOOL shouldRotateContent;
    PDFAnnotation *annotation;
    NSMutableDictionary *markupEffectLayers;
    NSMutableArray *selections;
    NSMutableDictionary *selectionEffectLayers;
    PDFScannerResult *pdfResult;
    CALayer *rootSelectionLayer;
    PDFPageLayerEffect *noteLayer;
}

// - (void).cxx_destruct;

@end
