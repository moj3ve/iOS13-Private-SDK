//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface CKMessageEntryViewLayoutMetrics : NSObject <NSSecureCoding>
{
    double _defaultEntryContentViewHeight;
    double _defaultSubjectEntryContentViewHeight;
    double _defaultEntryViewHeight;
    double _defaultSubjectEntryViewHeight;
    struct UIEdgeInsets _entryViewContentInsets;
    struct UIEdgeInsets _entryViewTextAlignmentInsets;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double defaultSubjectEntryViewHeight; // @synthesize defaultSubjectEntryViewHeight=_defaultSubjectEntryViewHeight;
@property(readonly, nonatomic) double defaultEntryViewHeight; // @synthesize defaultEntryViewHeight=_defaultEntryViewHeight;
@property(readonly, nonatomic) double defaultSubjectEntryContentViewHeight; // @synthesize defaultSubjectEntryContentViewHeight=_defaultSubjectEntryContentViewHeight;
@property(readonly, nonatomic) double defaultEntryContentViewHeight; // @synthesize defaultEntryContentViewHeight=_defaultEntryContentViewHeight;
@property(readonly, nonatomic) struct UIEdgeInsets entryViewTextAlignmentInsets; // @synthesize entryViewTextAlignmentInsets=_entryViewTextAlignmentInsets;
@property(readonly, nonatomic) struct UIEdgeInsets entryViewContentInsets; // @synthesize entryViewContentInsets=_entryViewContentInsets;
- (void)calculateTextMetrics;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
