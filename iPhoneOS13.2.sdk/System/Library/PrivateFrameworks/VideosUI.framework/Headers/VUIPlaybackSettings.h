//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIPlaybackSettings : NSObject
{
    int _preferencesNotifyToken;
    _Bool _preferencesNotifyTokenIsValid;
    _Bool _cellularDataEnabled;
    NSString *_preferredAudioLanguageCode;
    long long _networkStatus;
    long long _preferredWifiPlaybackQuality;
    long long _preferredCellularPlaybackQuality;
}

+ (id)sharedSettings;
@property(nonatomic) long long preferredCellularPlaybackQuality; // @synthesize preferredCellularPlaybackQuality=_preferredCellularPlaybackQuality;
@property(nonatomic) long long preferredWifiPlaybackQuality; // @synthesize preferredWifiPlaybackQuality=_preferredWifiPlaybackQuality;
@property(nonatomic) _Bool cellularDataEnabled; // @synthesize cellularDataEnabled=_cellularDataEnabled;
@property(nonatomic) long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (long long)_playbackQualityForString:(id)arg1;
- (void)_updatePropertiesFromUserPrefs;
- (void)_registerObserverForUserPrefsChange;
- (void)_networkTypeDidChange:(id)arg1;
- (void)_updateNetworkStatus;
@property(retain, nonatomic) NSString *preferredAudioLanguageCode; // @synthesize preferredAudioLanguageCode=_preferredAudioLanguageCode;
@property(readonly, nonatomic) long long preferredPlaybackQualityForCurrentNetworkStatus;
- (void)dealloc;
- (id)init;

@end
