//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSUUID, PDFDocument, UIColor;

__attribute__((visibility("hidden")))
@interface PDFSelectionPrivate : NSObject
{
    PDFDocument *document;
    UIColor *color;
    NSMutableArray *pageRanges;
    BOOL forceBreaks;
    struct __CFArray cgSelections;
    NSMutableArray *pages;
    NSUUID *pdfSelectionUUID;
}

// - (void).cxx_destruct;

@end

