//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarAttributeEditorSectionItem-Protocol.h>
#import <AvatarUI/AVTAvatarAttributeEditorSectionItemPrefetching-Protocol.h>
#import <AvatarUI/AVTDiscardableContent-Protocol.h>

@class NSString, UIImage;

@interface AVTAvatarAttributeEditorSectionItem : NSObject <AVTAvatarAttributeEditorSectionItem, AVTDiscardableContent, AVTAvatarAttributeEditorSectionItemPrefetching>
{
    _Bool _selected;
    NSString *_localizedName;
    id /* block */ _avatarUpdater;
    id /* block */ discardableContentHandler;
    NSString *_identifier;
    UIImage *_cachedThumbnail;
    double _heightRatio;
    id /* block */ _thumbnailProvider;
    id /* block */ _presetResourcesProvider;
}

@property(readonly, copy, nonatomic) id /* block */ presetResourcesProvider; // @synthesize presetResourcesProvider=_presetResourcesProvider;
@property(readonly, copy, nonatomic) id /* block */ thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;
@property(readonly, nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
@property(retain, nonatomic) UIImage *cachedThumbnail; // @synthesize cachedThumbnail=_cachedThumbnail;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) id /* block */ discardableContentHandler; // @synthesize discardableContentHandler;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, copy, nonatomic) id /* block */ avatarUpdater; // @synthesize avatarUpdater=_avatarUpdater;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void)discardContent;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *prefetchingIdentifier;
- (id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 thumbnailProvider:(id /* block */)arg3 presetResourcesProvider:(id /* block */)arg4 avatarUpdater:(id /* block */)arg5 heightRatio:(double)arg6 selected:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
