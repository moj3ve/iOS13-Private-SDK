//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSPasswordGenerationManager;

@interface SFStrongPasswordGenerator : NSObject
{
    WBSPasswordGenerationManager *_passwordGenerationManager;
}

// - (void).cxx_destruct;
- (id)generatedPasswordForAppWithAppID:(id)arg1 associatedDomains:(id)arg2 passwordRules:(id)arg3 confirmPasswordRules:(id)arg4;
- (id)init;

@end
