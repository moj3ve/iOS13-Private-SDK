//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class BBAssertion, BSServiceConnectionEndpoint, NSArray, NSDictionary, NSString, NSURL;

@interface BBResponse : NSObject <NSSecureCoding>
{
    BBAssertion *_lifeAssertion;
    id /* CDUnknownBlockType */ _sendBlock;
    NSString *_bulletinID;
    BOOL _sent;
    NSString *_replyText;
    BOOL _activated;
    BOOL _didOpenApplication;
    NSArray *_lifeAssertions;
    long long _actionType;
    NSString *_buttonID;
    NSString *_actionID;
    NSURL *_actionLaunchURL;
    NSString *_originID;
    NSUInteger _actionActivationMode;
    long long _actionBehavior;
    BSServiceConnectionEndpoint *_endpoint;
    NSDictionary *_context;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(nonatomic) BOOL didOpenApplication; // @synthesize didOpenApplication=_didOpenApplication;
@property(copy, nonatomic) BSServiceConnectionEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) long long actionBehavior; // @synthesize actionBehavior=_actionBehavior;
@property(nonatomic) NSUInteger actionActivationMode; // @synthesize actionActivationMode=_actionActivationMode;
@property(nonatomic) BOOL activated; // @synthesize activated=_activated;
@property(copy, nonatomic) NSString *originID; // @synthesize originID=_originID;
@property(copy, nonatomic) NSURL *actionLaunchURL; // @synthesize actionLaunchURL=_actionLaunchURL;
@property(copy, nonatomic) NSString *actionID; // @synthesize actionID=_actionID;
@property(copy, nonatomic) NSString *buttonID; // @synthesize buttonID=_buttonID;
@property(copy, nonatomic) NSString *replyText; // @synthesize replyText=_replyText;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
@property(copy, nonatomic) id /* CDUnknownBlockType */ sendBlock; // @synthesize sendBlock=_sendBlock;
@property(copy, nonatomic) NSArray *lifeAssertions; // @synthesize lifeAssertions=_lifeAssertions;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)send;

@end
