//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDate, NSFileHandle, NSString, PARRequest, PARSessionConfiguration;

@protocol PARDaemonXPC <NSObject>
- (void)getImageMap:(void (^)(NSDictionary *))arg1;
- (void)updateParameters:(double)arg1 safariLast1day:(double)arg2 safariLast1week:(double)arg3 safariLast1month:(double)arg4 safariAll:(double)arg5 safariMostRecent:(double)arg6 minThresholdToSend:(double)arg7;
- (void)addCompletion:(NSString *)arg1 forInput:(NSString *)arg2;
- (void)clearEngagedCompletionsFromDate:(NSDate *)arg1 toDate:(NSDate *)arg2;
- (void)fileHandleForWritingFeedbackType:(NSUInteger)arg1 reply:(void (^)(NSFileHandle *, NSError *))arg2;
- (void)fileHandleAndAttributesForResource:(NSString *)arg1 completion:(void (^)(NSFileHandle *, NSDictionary *, NSError *))arg2;
- (void)listSessions:(void (^)(NSArray *))arg1;
- (void)stopSessions:(void (^)(NSError *))arg1;
- (void)teeFeedbackTo:(NSFileHandle *)arg1 prettyPrint:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
- (void)reportFeedbackPayloadData:(PARSessionConfiguration *)arg1 payloadData:(NSData *)arg2 queryId:(NSUInteger)arg3;
- (void)request:(PARSessionConfiguration *)arg1 request:(PARRequest *)arg2 reply:(void (^)(NSUInteger, PARReply *, NSError *))arg3;
- (void)forceFetchBag:(PARSessionConfiguration *)arg1 reply:(void (^)(PARBag *, NSError *))arg2;
- (void)bag:(PARSessionConfiguration *)arg1 reply:(void (^)(PARBag *, NSError *))arg2;
- (void)configure:(PARSessionConfiguration *)arg1 reply:(void (^)(NSXPCListenerEndpoint *))arg2;
@end

