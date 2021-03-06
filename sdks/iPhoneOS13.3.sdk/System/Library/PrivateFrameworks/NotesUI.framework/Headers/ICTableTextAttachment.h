//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/ICTextAttachment.h>

@interface ICTableTextAttachment : ICTextAttachment
{
    double _lastAvailableWidth;
    CGSize _lastAttachmentSize;
}

@property(nonatomic) CGSize lastAttachmentSize; // @synthesize lastAttachmentSize=_lastAttachmentSize;
@property(nonatomic) double lastAvailableWidth; // @synthesize lastAvailableWidth=_lastAvailableWidth;
- (id)printableTextContentForAppearanceType:(NSUInteger)arg1;
- (void)fixAttachmentForAttributedString:(id)arg1 range:(NSRange)arg2 forPlainText:(BOOL)arg3 forStandardizedText:(BOOL)arg4;
- (CDStruct_d2b197d1)attachmentBoundsMargins;
- (BOOL)canDragWithoutSelecting;

@end

