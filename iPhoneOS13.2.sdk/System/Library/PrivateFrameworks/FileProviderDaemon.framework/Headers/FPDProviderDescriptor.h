//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSString, NSURL;

@interface FPDProviderDescriptor : NSObject <NSSecureCoding>
{
    _Bool _readonly;
    _Bool _enabledByDefault;
    _Bool _supportsEnumeration;
    _Bool _defaultDomainVisible;
    _Bool _shouldHideExtensionName;
    _Bool _canToggleDomainVisibility;
    _Bool _isAvailableSystemWide;
    _Bool _usesUniqueItemIdentifiersAcrossDevices;
    _Bool _supportsUnzippedPackages;
    _Bool _hasExplicitExtensionStorageURLs;
    _Bool _supportsPickingFolders;
    NSString *_identifier;
    NSString *_localizedName;
    NSString *_topLevelBundleIdentifier;
    NSString *_bundleVersion;
    NSString *_extensionPointVersion;
    NSString *_purposeIdentifier;
    NSURL *_extensionBundleURL;
    NSArray *_supportedFileTypes;
    NSArray *_supportedSearchFilters;
    NSArray *_extensionStorageURLs;
    NSArray *_requestedExtendedAttributes;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *requestedExtendedAttributes; // @synthesize requestedExtendedAttributes=_requestedExtendedAttributes;
@property(retain, nonatomic) NSArray *extensionStorageURLs; // @synthesize extensionStorageURLs=_extensionStorageURLs;
@property(retain, nonatomic) NSArray *supportedSearchFilters; // @synthesize supportedSearchFilters=_supportedSearchFilters;
@property(retain, nonatomic) NSArray *supportedFileTypes; // @synthesize supportedFileTypes=_supportedFileTypes;
@property(retain, nonatomic) NSURL *extensionBundleURL; // @synthesize extensionBundleURL=_extensionBundleURL;
@property(retain, nonatomic) NSString *purposeIdentifier; // @synthesize purposeIdentifier=_purposeIdentifier;
@property(nonatomic) _Bool supportsPickingFolders; // @synthesize supportsPickingFolders=_supportsPickingFolders;
@property(nonatomic) _Bool hasExplicitExtensionStorageURLs; // @synthesize hasExplicitExtensionStorageURLs=_hasExplicitExtensionStorageURLs;
@property(nonatomic) _Bool supportsUnzippedPackages; // @synthesize supportsUnzippedPackages=_supportsUnzippedPackages;
@property(nonatomic) _Bool usesUniqueItemIdentifiersAcrossDevices; // @synthesize usesUniqueItemIdentifiersAcrossDevices=_usesUniqueItemIdentifiersAcrossDevices;
@property(nonatomic) _Bool isAvailableSystemWide; // @synthesize isAvailableSystemWide=_isAvailableSystemWide;
@property(nonatomic) _Bool canToggleDomainVisibility; // @synthesize canToggleDomainVisibility=_canToggleDomainVisibility;
@property(nonatomic) _Bool shouldHideExtensionName; // @synthesize shouldHideExtensionName=_shouldHideExtensionName;
@property(nonatomic) _Bool defaultDomainVisible; // @synthesize defaultDomainVisible=_defaultDomainVisible;
@property(nonatomic) _Bool supportsEnumeration; // @synthesize supportsEnumeration=_supportsEnumeration;
@property(nonatomic) _Bool enabledByDefault; // @synthesize enabledByDefault=_enabledByDefault;
@property(nonatomic) _Bool readonly; // @synthesize readonly=_readonly;
@property(retain, nonatomic) NSString *extensionPointVersion; // @synthesize extensionPointVersion=_extensionPointVersion;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *topLevelBundleIdentifier; // @synthesize topLevelBundleIdentifier=_topLevelBundleIdentifier;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithExtension:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
