//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <ScreenTimeCore/STSyncableSubObject-Protocol.h>
#import <ScreenTimeCore/STUniquelySerializableManagedObject-Protocol.h>

@class NSData, NSString, STBlueprint;
@protocol STSerializableManagedObject;

@interface STBlueprintConfiguration : NSManagedObject <STSyncableSubObject, STUniquelySerializableManagedObject>
{
}

+ (id)blueprintConfigurationTypeForDeclaration:(id)arg1;
+ (Class)cemDeclarationClassForConfigurationType:(id)arg1;
+ (id)cemConfigurationIdentifierWithType:(id)arg1 forUser:(id)arg2;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)setCemConfiguration:(id)arg1;
- (id)cemConfiguration;
@property(readonly) id <STSerializableManagedObject> syncableRootObject;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;

// Remaining properties
@property(retain, nonatomic) STBlueprint *blueprint; // @dynamic blueprint;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSData *payloadPlist; // @dynamic payloadPlist;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end
