//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecord;

__attribute__((visibility("hidden")))
@interface CKDGetUserRecordURLRequest : CKDURLRequest
{
    id /* block */ _recordFetchedBlock;
    CKRecord *_userRecord;
}

@property(retain, nonatomic) CKRecord *userRecord; // @synthesize userRecord=_userRecord;
@property(copy, nonatomic) id /* block */ recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;

@end
