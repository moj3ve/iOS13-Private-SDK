//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SANPAddOutputDevicesToGroup : SABaseClientBoundCommand
{
}

+ (id)addOutputDevicesToGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addOutputDevicesToGroup;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(copy, nonatomic) NSString *groupID;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

