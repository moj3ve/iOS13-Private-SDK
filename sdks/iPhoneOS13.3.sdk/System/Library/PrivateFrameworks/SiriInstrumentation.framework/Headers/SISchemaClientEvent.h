//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, SISchemaAudioFirstBufferRecorded, SISchemaAudioStopRecording, SISchemaClientEventMetadata, SISchemaClientFlow, SISchemaClientTransportEventMetadata, SISchemaConversationTrace, SISchemaDeviceDynamicContext, SISchemaDeviceFixedContext, SISchemaDialogOutput, SISchemaDictationContext, SISchemaInvocation, SISchemaLocation, SISchemaPunchOut, SISchemaSiriCue, SISchemaSpeechTranscription, SISchemaTextToSpeechBegin, SISchemaTextToSpeechEnd, SISchemaUIStateTransition, SISchemaUUFRPresented;

@interface SISchemaClientEvent : PBCodable
{
    NSUInteger _whichEvent_Type;
    SISchemaAudioFirstBufferRecorded *_audioFirstBufferRecorded;
    SISchemaAudioStopRecording *_audioStopRecording;
    SISchemaConversationTrace *_clientConversationTrace;
    SISchemaDeviceDynamicContext *_deviceDynamicContext;
    SISchemaDeviceFixedContext *_deviceFixedContext;
    SISchemaDictationContext *_dictationContext;
    SISchemaInvocation *_invocation;
    SISchemaLocation *_location;
    SISchemaPunchOut *_punchOut;
    SISchemaSiriCue *_siriCue;
    SISchemaUUFRPresented *_uufrPresented;
    SISchemaSpeechTranscription *_speechTranscription;
    SISchemaTextToSpeechBegin *_textToSpeechBegin;
    SISchemaTextToSpeechEnd *_textToSpeechEnd;
    SISchemaUIStateTransition *_uiStateTransition;
    SISchemaClientFlow *_clientFlow;
    SISchemaDialogOutput *_dialogOutput;
    SISchemaClientEventMetadata *_eventMetadata;
    SISchemaClientTransportEventMetadata *_transportMetadata;
}

+ (id)getTagForEventTypeClass:(Class)arg1;
+ (Class)getEventTypeClassForTag:(int)arg1;
@property(retain, nonatomic) SISchemaClientTransportEventMetadata *transportMetadata; // @synthesize transportMetadata=_transportMetadata;
@property(retain, nonatomic) SISchemaClientEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) NSUInteger whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
// - (void).cxx_destruct;
- (void)setEventType:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(retain, nonatomic) SISchemaDialogOutput *dialogOutput; // @synthesize dialogOutput=_dialogOutput;
@property(retain, nonatomic) SISchemaClientFlow *clientFlow; // @synthesize clientFlow=_clientFlow;
@property(retain, nonatomic) SISchemaUIStateTransition *uiStateTransition; // @synthesize uiStateTransition=_uiStateTransition;
@property(retain, nonatomic) SISchemaTextToSpeechEnd *textToSpeechEnd; // @synthesize textToSpeechEnd=_textToSpeechEnd;
@property(retain, nonatomic) SISchemaTextToSpeechBegin *textToSpeechBegin; // @synthesize textToSpeechBegin=_textToSpeechBegin;
@property(retain, nonatomic) SISchemaSpeechTranscription *speechTranscription; // @synthesize speechTranscription=_speechTranscription;
@property(retain, nonatomic) SISchemaUUFRPresented *uufrPresented; // @synthesize uufrPresented=_uufrPresented;
@property(retain, nonatomic) SISchemaSiriCue *siriCue; // @synthesize siriCue=_siriCue;
@property(retain, nonatomic) SISchemaPunchOut *punchOut; // @synthesize punchOut=_punchOut;
@property(retain, nonatomic) SISchemaLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) SISchemaInvocation *invocation; // @synthesize invocation=_invocation;
@property(retain, nonatomic) SISchemaDictationContext *dictationContext; // @synthesize dictationContext=_dictationContext;
@property(retain, nonatomic) SISchemaDeviceFixedContext *deviceFixedContext; // @synthesize deviceFixedContext=_deviceFixedContext;
@property(retain, nonatomic) SISchemaDeviceDynamicContext *deviceDynamicContext; // @synthesize deviceDynamicContext=_deviceDynamicContext;
@property(retain, nonatomic) SISchemaConversationTrace *clientConversationTrace; // @synthesize clientConversationTrace=_clientConversationTrace;
@property(retain, nonatomic) SISchemaAudioStopRecording *audioStopRecording; // @synthesize audioStopRecording=_audioStopRecording;
@property(retain, nonatomic) SISchemaAudioFirstBufferRecorded *audioFirstBufferRecorded; // @synthesize audioFirstBufferRecorded=_audioFirstBufferRecorded;
- (int)getAnyEventType;

@end
