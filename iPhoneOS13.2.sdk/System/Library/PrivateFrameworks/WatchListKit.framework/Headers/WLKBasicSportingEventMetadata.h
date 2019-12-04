//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSDate, NSString;

@interface WLKBasicSportingEventMetadata : WLKBasicContentMetadata
{
    NSDate *_startGameTime;
    NSString *_leagueName;
    NSString *_leagueShortName;
}

@property(readonly, copy, nonatomic) NSString *leagueShortName; // @synthesize leagueShortName=_leagueShortName;
@property(readonly, copy, nonatomic) NSString *leagueName; // @synthesize leagueName=_leagueName;
@property(readonly, copy, nonatomic) NSDate *startGameTime; // @synthesize startGameTime=_startGameTime;
- (id)initWithDictionary:(id)arg1;

@end
