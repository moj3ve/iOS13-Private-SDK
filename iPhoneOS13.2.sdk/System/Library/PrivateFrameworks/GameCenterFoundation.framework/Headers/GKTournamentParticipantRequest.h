//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class GKTournamentParticipantRequestInternal, NSArray;

@interface GKTournamentParticipantRequest : NSObject <NSSecureCoding>
{
    GKTournamentParticipantRequestInternal *_internal;
}

+ (_Bool)supportsSecureCoding;
@property(retain) GKTournamentParticipantRequestInternal *internal; // @synthesize internal=_internal;
@property(nonatomic) struct _NSRange range; // @dynamic range;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool friendsOnly; // @dynamic friendsOnly;
@property(retain, nonatomic) NSArray *participantStates; // @dynamic participantStates;

@end
