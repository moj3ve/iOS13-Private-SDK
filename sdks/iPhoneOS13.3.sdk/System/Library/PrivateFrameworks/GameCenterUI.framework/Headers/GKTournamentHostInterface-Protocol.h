//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKSocialGamingHostInterface-Protocol.h>

@class GKTournament, NSString;

@protocol GKTournamentHostInterface <GKSocialGamingHostInterface>
- (oneway void)playTournament:(GKTournament *)arg1 withTryToken:(NSString *)arg2;
@end

