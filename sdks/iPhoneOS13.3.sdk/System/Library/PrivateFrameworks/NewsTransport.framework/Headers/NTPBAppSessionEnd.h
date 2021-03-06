//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface NTPBAppSessionEnd : PBCodable <NSCopying>
{
    long long _appSessionDuration;
    int _appsAutoSubscribeFeedCount;
    NSMutableArray *_autoSubscribedFeedIds;
    int _channelSubscriptionCount;
    NSMutableArray *_groupableFeedIds;
    int _internalAutoSubscribeFeedCount;
    NSMutableArray *_lastVisibleViews;
    NSMutableArray *_notificationChannelIds;
    int _notificationEnabledChannelsCount;
    int _notitificationsEnabledChannelsCount;
    NSMutableArray *_paidSubscriptionChannelIds;
    int _portraitAutoSubscribeFeedCount;
    int _safariAutoSubscribeFeedCount;
    int _sessionEndReason;
    NSMutableArray *_subscribedFeedIds;
    int _topicSubscriptionCount;
    BOOL _breakingNewsAvailableDuringSession;
    BOOL _breakingNewsDismissedDuringSession;
    BOOL _syncedOtherUserIdDuringSession;
    struct {
        unsigned int appSessionDuration:1;
        unsigned int appsAutoSubscribeFeedCount:1;
        unsigned int channelSubscriptionCount:1;
        unsigned int internalAutoSubscribeFeedCount:1;
        unsigned int notificationEnabledChannelsCount:1;
        unsigned int notitificationsEnabledChannelsCount:1;
        unsigned int portraitAutoSubscribeFeedCount:1;
        unsigned int safariAutoSubscribeFeedCount:1;
        unsigned int sessionEndReason:1;
        unsigned int topicSubscriptionCount:1;
        unsigned int breakingNewsAvailableDuringSession:1;
        unsigned int breakingNewsDismissedDuringSession:1;
        unsigned int syncedOtherUserIdDuringSession:1;
    } _has;
}

+ (Class)groupableFeedIdsType;
+ (Class)autoSubscribedFeedIdsType;
+ (Class)subscribedFeedIdsType;
+ (Class)notificationChannelIdsType;
+ (Class)paidSubscriptionChannelIdsType;
+ (Class)lastVisibleViewsType;
@property(nonatomic) BOOL syncedOtherUserIdDuringSession; // @synthesize syncedOtherUserIdDuringSession=_syncedOtherUserIdDuringSession;
@property(nonatomic) int internalAutoSubscribeFeedCount; // @synthesize internalAutoSubscribeFeedCount=_internalAutoSubscribeFeedCount;
@property(nonatomic) int appsAutoSubscribeFeedCount; // @synthesize appsAutoSubscribeFeedCount=_appsAutoSubscribeFeedCount;
@property(nonatomic) int safariAutoSubscribeFeedCount; // @synthesize safariAutoSubscribeFeedCount=_safariAutoSubscribeFeedCount;
@property(nonatomic) int portraitAutoSubscribeFeedCount; // @synthesize portraitAutoSubscribeFeedCount=_portraitAutoSubscribeFeedCount;
@property(retain, nonatomic) NSMutableArray *groupableFeedIds; // @synthesize groupableFeedIds=_groupableFeedIds;
@property(retain, nonatomic) NSMutableArray *autoSubscribedFeedIds; // @synthesize autoSubscribedFeedIds=_autoSubscribedFeedIds;
@property(nonatomic) BOOL breakingNewsDismissedDuringSession; // @synthesize breakingNewsDismissedDuringSession=_breakingNewsDismissedDuringSession;
@property(nonatomic) BOOL breakingNewsAvailableDuringSession; // @synthesize breakingNewsAvailableDuringSession=_breakingNewsAvailableDuringSession;
@property(retain, nonatomic) NSMutableArray *subscribedFeedIds; // @synthesize subscribedFeedIds=_subscribedFeedIds;
@property(nonatomic) int notificationEnabledChannelsCount; // @synthesize notificationEnabledChannelsCount=_notificationEnabledChannelsCount;
@property(retain, nonatomic) NSMutableArray *notificationChannelIds; // @synthesize notificationChannelIds=_notificationChannelIds;
@property(nonatomic) int notitificationsEnabledChannelsCount; // @synthesize notitificationsEnabledChannelsCount=_notitificationsEnabledChannelsCount;
@property(retain, nonatomic) NSMutableArray *paidSubscriptionChannelIds; // @synthesize paidSubscriptionChannelIds=_paidSubscriptionChannelIds;
@property(nonatomic) long long appSessionDuration; // @synthesize appSessionDuration=_appSessionDuration;
@property(nonatomic) int topicSubscriptionCount; // @synthesize topicSubscriptionCount=_topicSubscriptionCount;
@property(nonatomic) int channelSubscriptionCount; // @synthesize channelSubscriptionCount=_channelSubscriptionCount;
@property(retain, nonatomic) NSMutableArray *lastVisibleViews; // @synthesize lastVisibleViews=_lastVisibleViews;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSyncedOtherUserIdDuringSession;
@property(nonatomic) BOOL hasInternalAutoSubscribeFeedCount;
@property(nonatomic) BOOL hasAppsAutoSubscribeFeedCount;
@property(nonatomic) BOOL hasSafariAutoSubscribeFeedCount;
@property(nonatomic) BOOL hasPortraitAutoSubscribeFeedCount;
- (id)groupableFeedIdsAtIndex:(NSUInteger)arg1;
- (NSUInteger)groupableFeedIdsCount;
- (void)addGroupableFeedIds:(id)arg1;
- (void)clearGroupableFeedIds;
- (id)autoSubscribedFeedIdsAtIndex:(NSUInteger)arg1;
- (NSUInteger)autoSubscribedFeedIdsCount;
- (void)addAutoSubscribedFeedIds:(id)arg1;
- (void)clearAutoSubscribedFeedIds;
@property(nonatomic) BOOL hasBreakingNewsDismissedDuringSession;
@property(nonatomic) BOOL hasBreakingNewsAvailableDuringSession;
- (id)subscribedFeedIdsAtIndex:(NSUInteger)arg1;
- (NSUInteger)subscribedFeedIdsCount;
- (void)addSubscribedFeedIds:(id)arg1;
- (void)clearSubscribedFeedIds;
@property(nonatomic) BOOL hasNotificationEnabledChannelsCount;
- (id)notificationChannelIdsAtIndex:(NSUInteger)arg1;
- (NSUInteger)notificationChannelIdsCount;
- (void)addNotificationChannelIds:(id)arg1;
- (void)clearNotificationChannelIds;
@property(nonatomic) BOOL hasNotitificationsEnabledChannelsCount;
- (id)paidSubscriptionChannelIdsAtIndex:(NSUInteger)arg1;
- (NSUInteger)paidSubscriptionChannelIdsCount;
- (void)addPaidSubscriptionChannelIds:(id)arg1;
- (void)clearPaidSubscriptionChannelIds;
@property(nonatomic) BOOL hasAppSessionDuration;
@property(nonatomic) BOOL hasTopicSubscriptionCount;
@property(nonatomic) BOOL hasChannelSubscriptionCount;
- (id)lastVisibleViewsAtIndex:(NSUInteger)arg1;
- (NSUInteger)lastVisibleViewsCount;
- (void)addLastVisibleViews:(id)arg1;
- (void)clearLastVisibleViews;
@property(nonatomic) BOOL hasSessionEndReason;
@property(nonatomic) int sessionEndReason; // @synthesize sessionEndReason=_sessionEndReason;

@end

