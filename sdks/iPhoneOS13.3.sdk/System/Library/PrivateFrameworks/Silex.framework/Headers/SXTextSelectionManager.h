//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXTextSelectionManager-Protocol.h>

@class NSHashTable;

@interface SXTextSelectionManager : NSObject <SXTextSelectionManager>
{
    NSHashTable *_textSelecting;
}

@property(readonly, nonatomic) NSHashTable *textSelecting; // @synthesize textSelecting=_textSelecting;
// - (void).cxx_destruct;
- (void)clearSelection;
- (void)addTextSelecting:(id)arg1;
- (id)init;

@end

