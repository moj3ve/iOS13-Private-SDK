//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <Notes/ICSearchIndexableNote-Protocol.h>

@class NSArray, NSData, NSDate, NSNumber, NSSet, NSString, NSURL, NoteBodyObject, NoteStoreObject;

@interface NoteObject : NSManagedObject <ICSearchIndexableNote>
{
}

- (_Bool)belongsToCollection:(id)arg1;
@property(nonatomic) unsigned long long sequenceNumber;
- (_Bool)containsAttachments;
@property(retain, nonatomic) NSString *externalContentRef;
@property(retain, nonatomic) NSData *externalRepresentation;
@property(readonly, nonatomic) _Bool hasValidServerIntId;
@property(nonatomic) long long serverIntId;
@property(nonatomic) unsigned long long flags;
@property(readonly, nonatomic) NSURL *noteId;
@property(readonly, nonatomic) _Bool isBeingMarkedForDeletion;
@property(readonly, nonatomic) _Bool isMarkedForDeletion;
- (void)markForDeletion;
@property(nonatomic) _Bool isPlainText;
@property(readonly, nonatomic) NSString *contentAsPlainTextPreservingNewlines;
@property(readonly, nonatomic) NSString *contentAsPlainText;
@property(retain, nonatomic) NSString *content;
@property(retain, nonatomic) NSString *title; // @dynamic title;
- (id)defaultTitleForEmptyNote;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)searchableItemAttributeSet;
- (id)userActivityContentAttributeSet;
- (id)searchDomainIdentifier;
- (id)contentIdentifier;
- (id)searchIndexingIdentifier;
- (id)dateForCurrentSortType;
- (id)contentInfoText;
- (id)noteAsPlainTextWithoutTitle;
@property(readonly, nonatomic) NSArray *noteCellKeyPaths;
- (id)authorsExcludingCurrentUser;
- (_Bool)isHiddenFromSearch;
- (_Bool)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultType;
- (unsigned long long)searchResultsSection;
- (long long)visibilityTestingType;
- (id)identifier;
- (id)accountName;
- (id)folderNameForNoteList;
- (id)folderName;
- (id)trimmedTitle;
- (_Bool)isMovable;
- (_Bool)isSharedReadOnly;
- (_Bool)isSharedViaICloudFolder;
- (_Bool)isSharedViaICloud;
@property(readonly, nonatomic) _Bool isModernNote;
- (_Bool)isPasswordProtected;

// Remaining properties
@property(retain, nonatomic) NSSet *attachments; // @dynamic attachments;
@property(retain, nonatomic) NSString *author; // @dynamic author;
@property(retain, nonatomic) NoteBodyObject *body; // @dynamic body;
@property(retain, nonatomic) NSNumber *containsCJK; // @dynamic containsCJK;
@property(retain, nonatomic) NSNumber *contentType; // @dynamic contentType;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) NSNumber *deletedFlag; // @dynamic deletedFlag;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSNumber *externalFlags; // @dynamic externalFlags;
@property(retain, nonatomic) NSNumber *externalSequenceNumber; // @dynamic externalSequenceNumber;
@property(retain, nonatomic) NSNumber *externalServerIntId; // @dynamic externalServerIntId;
@property(readonly, retain, nonatomic) NSString *guid; // @dynamic guid;
@property(readonly) NSUInteger hash;
@property(retain, nonatomic) NSNumber *integerId; // @dynamic integerId;
@property(retain, nonatomic) NSNumber *isBookkeepingEntry; // @dynamic isBookkeepingEntry;
@property(retain, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(retain, nonatomic) NSString *serverId; // @dynamic serverId;
@property(retain, nonatomic) NoteStoreObject *store; // @dynamic store;
@property(retain, nonatomic) NSString *summary; // @dynamic summary;
@property(readonly) Class superclass;

@end
