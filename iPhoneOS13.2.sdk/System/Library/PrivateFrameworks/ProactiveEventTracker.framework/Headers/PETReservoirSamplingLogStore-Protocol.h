//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSData;

@protocol PETReservoirSamplingLogStore 
- (_Bool)attemptToRecreate;
- (_Bool)appendData:(NSData *)arg1 andReturnMapPointer:(struct **)arg2;
- (_Bool)changeLength:(unsigned long long)arg1;
- (CDStruct_39420a03 *)headerMap:(unsigned long long *)arg1;
- (CDStruct_39420a03 *)remap:(unsigned long long *)arg1;
- (unsigned long long)currentLength;
- (void)unlock;
- (_Bool)lock;
@end
