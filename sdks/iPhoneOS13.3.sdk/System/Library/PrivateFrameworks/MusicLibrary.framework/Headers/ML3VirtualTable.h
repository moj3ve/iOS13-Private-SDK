//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/ML3DatabaseModuleContext-Protocol.h>

@class ML3DatabaseConnection, ML3DatabaseModule, ML3DatabaseTable, NSString;
@protocol ML3VirtualTableDelegate;

@interface ML3VirtualTable : NSObject <ML3DatabaseModuleContext>
{
    NSString *_virtualTableName;
    ML3DatabaseModule *_module;
    id <ML3VirtualTableDelegate> _delegate;
    ML3DatabaseTable *_databaseTable;
    ML3DatabaseConnection *_connection;
    shared_ptr_c3e79333 _dataSource;
}

@property(readonly, nonatomic) ML3DatabaseConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) ML3DatabaseTable *databaseTable; // @synthesize databaseTable=_databaseTable;
@property(nonatomic) __weak id <ML3VirtualTableDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) shared_ptr_c3e79333 dataSource; // @synthesize dataSource=_dataSource;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (BOOL)unregister;
- (BOOL)registerWithConnection:(id)arg1;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithDatabaseTable:(id)arg1;

@end

