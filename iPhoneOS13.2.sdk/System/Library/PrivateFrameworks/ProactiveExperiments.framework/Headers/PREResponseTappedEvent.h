//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, PREResponsesGeneratedEvent;

@interface PREResponseTappedEvent : NSObject
{
    _Bool _hasQuestionMark;
    int _inputMethod;
    PREResponsesGeneratedEvent *_responsesGeneratedEvent;
    NSString *_selectedResponse;
    NSNumber *_selectedPosition;
    unsigned long long _timeToTap;
}

@property(nonatomic) _Bool hasQuestionMark; // @synthesize hasQuestionMark=_hasQuestionMark;
@property(nonatomic) int inputMethod; // @synthesize inputMethod=_inputMethod;
@property(nonatomic) unsigned long long timeToTap; // @synthesize timeToTap=_timeToTap;
@property(retain, nonatomic) NSNumber *selectedPosition; // @synthesize selectedPosition=_selectedPosition;
@property(retain, nonatomic) NSString *selectedResponse; // @synthesize selectedResponse=_selectedResponse;
@property(retain, nonatomic) PREResponsesGeneratedEvent *responsesGeneratedEvent; // @synthesize responsesGeneratedEvent=_responsesGeneratedEvent;

@end
