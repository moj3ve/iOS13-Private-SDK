//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/MFObject-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFPalette : NSObject <MFObject>
{
    NSMutableArray *m_colours;
}

+ (id)paletteWithColours:(id)arg1;
// - (void).cxx_destruct;
- (id)getColour:(int)arg1;
- (BOOL)resize:(int)arg1;
- (BOOL)setEntries:(int)arg1 in_colours:(id)arg2;
- (int)selectInto:(id)arg1;
- (id)initWithColours:(id)arg1;
- (id)init;

@end
