//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (TSUAdditions)
+ (id)tsu_carriageReturnAttributedString;
- (id)tsu_textTablesInRange:(_NSRange)arg1;
- (NSUInteger)tsu_numberOfTables;
- (_NSRange)tsu_rangeofNextTableFromIndex:(NSUInteger)arg1;
- (id)tsu_nextTableStringFromIndex:(NSUInteger)arg1 tableRange:(_NSRange )arg2;
- (id)tsu_stringWithoutAttachments;
- (id)tsu_stringByFixingBrokenSurrogatePairs;
- (id)tsu_RTFDFromRange:(_NSRange)arg1 documentAttributes:(id)arg2;
- (id)tsu_RTFFromRange:(_NSRange)arg1 documentAttributes:(id)arg2;
@end
