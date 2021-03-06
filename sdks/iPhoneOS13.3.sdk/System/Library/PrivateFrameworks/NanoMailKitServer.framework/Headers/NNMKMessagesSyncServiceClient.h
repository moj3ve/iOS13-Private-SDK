//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessagesSyncServiceClientDelegate;

@interface NNMKMessagesSyncServiceClient : NNMKSyncServiceEndpoint
{
    id <NNMKMessagesSyncServiceClientDelegate> _delegate;
}

@property(nonatomic) __weak id <NNMKMessagesSyncServiceClientDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)readProtobufData:(id)arg1 type:(NSUInteger)arg2;
- (void)connectivityChanged;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (id)updateMailboxSelection:(id)arg1;
- (id)sendMessage:(id)arg1;
- (void)requestCompactMessages:(id)arg1;
- (void)warnMessagesFilteredOut:(id)arg1;
- (id)deleteMessages:(id)arg1;
- (id)updateMessagesStatus:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end

