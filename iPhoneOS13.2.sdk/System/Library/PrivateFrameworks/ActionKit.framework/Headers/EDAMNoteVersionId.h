//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMNoteVersionId : FATObject
{
    NSNumber *_updateSequenceNum;
    NSNumber *_updated;
    NSNumber *_saved;
    NSString *_title;
    NSNumber *_lastEditorId;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *lastEditorId; // @synthesize lastEditorId=_lastEditorId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *saved; // @synthesize saved=_saved;
@property(retain, nonatomic) NSNumber *updated; // @synthesize updated=_updated;
@property(retain, nonatomic) NSNumber *updateSequenceNum; // @synthesize updateSequenceNum=_updateSequenceNum;

@end
