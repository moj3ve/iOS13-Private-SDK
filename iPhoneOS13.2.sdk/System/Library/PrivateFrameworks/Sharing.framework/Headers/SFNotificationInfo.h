//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSString, NSURL, SFNotificationError;

@interface SFNotificationInfo : NSObject <NSSecureCoding, NSCopying>
{
    SFNotificationInfo *_cachedMediumBubbleVersion;
    unsigned char _deviceClass;
    unsigned char _interactionBehavior;
    unsigned char _interactionDirection;
    unsigned int _notificationType;
    NSURL *_attachmentURL;
    NSString *_body;
    SFNotificationError *_error;
    NSString *_header;
    NSString *_title;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned int notificationType; // @synthesize notificationType=_notificationType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned char interactionDirection; // @synthesize interactionDirection=_interactionDirection;
@property(nonatomic) unsigned char interactionBehavior; // @synthesize interactionBehavior=_interactionBehavior;
@property(retain, nonatomic) NSString *header; // @synthesize header=_header;
@property(retain, nonatomic) SFNotificationError *error; // @synthesize error=_error;
@property(nonatomic) unsigned char deviceClass; // @synthesize deviceClass=_deviceClass;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSURL *attachmentURL; // @synthesize attachmentURL=_attachmentURL;
@property(readonly, nonatomic) SFNotificationInfo *mediumBubbleVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
