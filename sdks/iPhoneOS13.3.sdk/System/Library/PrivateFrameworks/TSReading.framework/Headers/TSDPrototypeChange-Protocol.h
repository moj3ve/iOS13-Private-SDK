//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TSSPropertySet;
@protocol TSSPropertySource;

@protocol TSDPrototypeChange <NSObject>
@property(readonly, retain) id <TSSPropertySource> propertiesAfterChange;
@property(readonly, retain) id <TSSPropertySource> propertiesBeforeChange;
@property(readonly, retain) id replacement;
@property(readonly, retain) id prototype;
@property(readonly) BOOL prototypeIsBeingDeleted;
@property(readonly) BOOL prototypeIsBeingModified;
@property(readonly) BOOL prototypeIsBeingReplaced;
- (BOOL)propertiesAreChanging:(TSSPropertySet *)arg1;
- (BOOL)propertyIsChanging:(int)arg1;
@end

