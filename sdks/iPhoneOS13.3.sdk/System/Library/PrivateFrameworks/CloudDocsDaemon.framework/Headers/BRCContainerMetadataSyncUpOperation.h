//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

__attribute__((visibility("hidden")))
@interface BRCContainerMetadataSyncUpOperation : _BRCOperation <BRCOperationSubclass>
{
    BOOL _shouldPerformAnotherBatch;
}

@property(readonly, nonatomic) BOOL shouldPerformAnotherBatch; // @synthesize shouldPerformAnotherBatch=_shouldPerformAnotherBatch;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)performAfterSavingRecords:(id /* CDUnknownBlockType */)arg1;
- (id)createActivity;
- (id)initWithSession:(id)arg1;

@end

