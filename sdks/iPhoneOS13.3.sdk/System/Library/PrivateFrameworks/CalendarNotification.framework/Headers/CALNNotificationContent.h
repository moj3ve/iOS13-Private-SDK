//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CALNNotificationSound, NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface CALNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_body;
    NSString *_categoryIdentifier;
    NSString *_sectionIdentifier;
    NSDate *_date;
    NSDate *_expirationDate;
    NSURL *_defaultActionURL;
    NSString *_iconIdentifier;
    BOOL _shouldHideTime;
    BOOL _shouldSuppressSyncDismissalWhenRemoved;
    NSArray *_peopleIdentifiers;
    CALNNotificationSound *_sound;
    NSDictionary *_userInfo;
    NSString *_threadIdentifier;
    NSString *_summaryArgument;
    NSUInteger _summaryArgumentCount;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUInteger summaryArgumentCount; // @synthesize summaryArgumentCount=_summaryArgumentCount;
@property(readonly, copy, nonatomic) NSString *summaryArgument; // @synthesize summaryArgument=_summaryArgument;
@property(readonly, copy, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) CALNNotificationSound *sound; // @synthesize sound=_sound;
@property(readonly, copy, nonatomic) NSArray *peopleIdentifiers; // @synthesize peopleIdentifiers=_peopleIdentifiers;
@property(readonly, nonatomic) BOOL shouldSuppressSyncDismissalWhenRemoved; // @synthesize shouldSuppressSyncDismissalWhenRemoved=_shouldSuppressSyncDismissalWhenRemoved;
@property(readonly, copy, nonatomic) NSString *iconIdentifier; // @synthesize iconIdentifier=_iconIdentifier;
@property(readonly, nonatomic) BOOL shouldHideTime; // @synthesize shouldHideTime=_shouldHideTime;
@property(readonly, copy, nonatomic) NSURL *defaultActionURL; // @synthesize defaultActionURL=_defaultActionURL;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(readonly, copy, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqualForDiffingPurposesToContent:(id)arg1;
- (BOOL)isEqualToContent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)_initWithTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 categoryIdentifier:(id)arg4 sectionIdentifier:(id)arg5 date:(id)arg6 expirationDate:(id)arg7 defaultActionURL:(id)arg8 iconIdentifier:(id)arg9 shouldHideTime:(BOOL)arg10 shouldSuppressSyncDismissalWhenRemoved:(BOOL)arg11 peopleIdentifiers:(id)arg12 sound:(id)arg13 userInfo:(id)arg14 threadIdentifier:(id)arg15 summaryArgument:(id)arg16 summaryArgumentCount:(NSUInteger)arg17;

@end
