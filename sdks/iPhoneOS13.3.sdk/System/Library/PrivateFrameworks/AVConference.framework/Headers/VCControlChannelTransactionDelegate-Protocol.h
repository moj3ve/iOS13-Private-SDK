//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData;

@protocol VCControlChannelTransactionDelegate <NSObject>
@property(readonly) BOOL isEncryptionEnabled;
- (NSData *)lastUsedMKIBytes;
- (void)scheduleAfter:(unsigned int)arg1 block:(void (^)(void))arg2;
- (BOOL)isParticipantActive:(NSUInteger)arg1;
- (void)addToReceivedStats:(int)arg1;
- (void)addToSentStats:(int)arg1;
@end

