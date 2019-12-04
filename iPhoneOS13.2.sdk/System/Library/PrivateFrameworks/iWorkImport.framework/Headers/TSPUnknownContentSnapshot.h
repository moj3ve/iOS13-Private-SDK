//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPKnownFieldRuleProvider-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSPUnknownContentSnapshot : NSObject <TSPKnownFieldRuleProvider>
{
    NSArray *_preserveFields;
    NSArray *_preserveUntilModifiedFields;
    _Bool _shouldIncludePreserveUntilModifiedFieldsInKnownFieldRuleEnumeration;
    NSArray *_messages;
}

@property(readonly, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (void)enumerateKnownFieldRulesUsingBlock:(id /* block */)arg1;
@property(readonly, nonatomic) _Bool isContentUnknown;
-     // Error parsing type: v24@0:8^{MessageInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedPtrField<TSP::FieldInfo>=^{Arena}ii^{Rep}}{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedPtrField<TSP::FieldPath>=^{Arena}ii^{Rep}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i^{FieldPath}III}16, name: updateMessageInfo:
- (void)saveToArchiver:(id)arg1;
- (id)newUnknownContentSnapshotWithMessages:(id)arg1;
- (id)initWithMessages:(id)arg1 preserveFields:(id)arg2 preserveUntilModifiedFields:(id)arg3 shouldIncludePreserveUntilModifiedFieldsInKnownFieldRuleEnumeration:(_Bool)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
