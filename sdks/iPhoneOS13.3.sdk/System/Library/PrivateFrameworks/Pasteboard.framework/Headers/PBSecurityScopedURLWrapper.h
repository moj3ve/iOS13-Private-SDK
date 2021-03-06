//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class FPItem, NSData, NSURL;

@interface PBSecurityScopedURLWrapper : NSObject <NSSecureCoding>
{
    NSData *_scope;
    BOOL _readonly;
    BOOL _backedByFileProvider;
    NSURL *_url;
    FPItem *_fpItem;
    NSURL *_deleteAfterUseURL;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSURL *deleteAfterUseURL; // @synthesize deleteAfterUseURL=_deleteAfterUseURL;
@property(readonly, nonatomic) FPItem *fpItem; // @synthesize fpItem=_fpItem;
@property(readonly, nonatomic, getter=isBackedByFileProvider) BOOL backedByFileProvider; // @synthesize backedByFileProvider=_backedByFileProvider;
@property(readonly, nonatomic, getter=isReadonly) BOOL readonly; // @synthesize readonly=_readonly;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)_deleteTemporaryFilesWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)deleteTemporaryFilesWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)nsURLWrapper;
- (id)initWithNSURLWrapper:(id)arg1;
- (id)initWithURL:(id)arg1 readonly:(BOOL)arg2 extensionClass:(id)arg3;
- (id)initWithURL:(id)arg1 readonly:(BOOL)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithFPItem:(id)arg1;

@end

