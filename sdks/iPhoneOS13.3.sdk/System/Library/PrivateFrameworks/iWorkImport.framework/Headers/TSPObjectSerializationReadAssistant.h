//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPDecoderReadCoordinatorDelegate-Protocol.h>

@class NSDictionary, NSURL, TSPComponent, TSPObjectContext;

__attribute__((visibility("hidden")))
@interface TSPObjectSerializationReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate>
{
    TSPObjectContext *_context;
    NSURL *_resourcesFolderURL;
    NSDictionary *_identiferToResourceNameDictionary;
    NSDictionary *_identifierToObjectUUIDDictionary;
    NSDictionary *_dataInfos;
    TSPComponent *_rootObjectComponent;
    BOOL _deserializeAsPasteboard;
    BOOL _resetObjectUUIDs;
    BOOL _shouldDecodeMissingDataAsRemote;
    BOOL _isCrossDocumentPaste;
    BOOL _isCrossAppPaste;
}

@property(nonatomic) BOOL isCrossAppPaste; // @synthesize isCrossAppPaste=_isCrossAppPaste;
@property(nonatomic) BOOL isCrossDocumentPaste; // @synthesize isCrossDocumentPaste=_isCrossDocumentPaste;
// - (void).cxx_destruct;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property(readonly, nonatomic) NSUInteger fileFormatVersion;
- (BOOL)shouldDecodeMissingDataAsRemote;
- (id)dataInfoForIdentifier:(long long)arg1;
- (id)cachedDataForIdentifier:(long long)arg1;
- (id)objectUUIDForExternalReferenceToIdentifier:(long long)arg1;
- (long long)objectIdentifierForUUID:(id)arg1;
- (BOOL)shouldResolveExternalReferencesUsingObjectUUID;
- (BOOL)canResolveExternalReferences;
- (id)rootObjectComponent;
- (BOOL)processMetadataObject:(id)arg1 error:(id )arg2;
- (id)metadataComponent;
- (id)cachedMetadataObject;
- (id)decodeObjectWithData:(id)arg1 packageURL:(id)arg2 options:(id)arg3 error:(id )arg4;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

