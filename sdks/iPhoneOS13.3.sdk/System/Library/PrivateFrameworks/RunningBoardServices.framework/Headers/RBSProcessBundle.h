//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/BSXPCSecureCoding-Protocol.h>

@class NSDictionary, NSString, RBSProcessInstance;
@protocol RBSProcessBundleDataSource;

@interface RBSProcessBundle : NSObject <BSXPCSecureCoding>
{
    NSDictionary *_plistValues;
    NSString *_identifier;
    NSString *_path;
    NSString *_executablePath;
    NSString *_extensionPointIdentifier;
    id <RBSProcessBundleDataSource> _dataSource;
    RBSProcessInstance *_instance;
}

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)bundleWithDataSource:(id)arg1;
@property(retain, nonatomic) RBSProcessInstance *instance; // @synthesize instance=_instance;
@property(readonly, nonatomic) __weak id <RBSProcessBundleDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy, nonatomic) NSString *extensionPointIdentifier; // @synthesize extensionPointIdentifier=_extensionPointIdentifier;
@property(readonly, copy, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)bundleInfoValuesForKeys:(id)arg1;
- (id)bundleInfoValueForKey:(id)arg1;

@end

