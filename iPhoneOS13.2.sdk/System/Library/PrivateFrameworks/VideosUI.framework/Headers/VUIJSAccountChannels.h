//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <VideosUI/VUIJSAccountChannelsInterface-Protocol.h>

@class VSAccountStore;

__attribute__((visibility("hidden")))
@interface VUIJSAccountChannels : IKJSObject <VUIJSAccountChannelsInterface>
{
    VSAccountStore *_accountStore;
}

@property(retain, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void)fetchMSOProviderStatus:(id)arg1;
- (void)_sendVideoSubscriberChangedNotificationToTheJavaScript;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;

@end
