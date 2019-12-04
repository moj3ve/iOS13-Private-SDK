//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPMLSchema, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableString, NSString;
@protocol CPMLAlgorithmProtocol, OS_dispatch_queue;

@interface CPMLDB : NSObject
{
    unsigned long long *repFields;
    unsigned long long maxFieldCount;
    unsigned int commitCountMax;
    unsigned int currentCommitCount;
    unsigned int rowCount;
    double *cardinality;
    double *min;
    double *max;
    double *mean;
    double *sumOfX;
    double *sumOfXX;
    double *sigma;
    CPMLSchema *cpSchema;
    NSMutableArray *indexer;
    NSMutableDictionary *vectorListCardinality;
    NSMutableString *dbTableName;
    double currentTimeInterval;
    double minTimeToLogIndex;
    int _openCPMLDBOptions;
    NSDictionary *_cInfo;
    NSString *_trainingModelFileAndPath;
    NSString *_trainingFile;
    id <CPMLAlgorithmProtocol> _thedelegate;
    NSObject<OS_dispatch_queue> *_dispatch_queue;
    struct sqlite3 *db;
    NSString *_dbFileName;
}

+ (id)getConfigurationFromPlist:(id)arg1;
@property(readonly) NSString *dbFileName; // @synthesize dbFileName=_dbFileName;
@property(readonly, nonatomic) struct sqlite3 *db; // @synthesize db;
@property(readonly) CPMLSchema *cpSchema; // @synthesize cpSchema;
- (id)getDispatchQueue;
- (void)setDispatchQueue:(id)arg1;
- (id)getDelegate;
- (void)setCPMLAlgorithm:(id)arg1;
- (_Bool)reset;
- (void)removeTrainingRowData:(double)arg1;
- (void)removeTrainingRow:(id)arg1;
- (id)extractRow:(id)arg1;
- (id)fileProtectionClassRequest:(id)arg1;
- (id)addValues:(int)arg1;
- (void)printFormat:(id)arg1;
- (id)getRemapTable;
- (int)getYColumnPosition;
- (int)getVectorContent:(unsigned long long)arg1;
- (int)getSchemaType:(unsigned long long)arg1;
- (id)getColumnName:(unsigned long long)arg1;
- (void)indexTable:(id)arg1 withColumn:(id)arg2;
- (void)updateStatistics;
- (_Bool)loadStatisticTable;
- (void)initStatisticsTable;
- (double)updateStatisticsString:(id)arg1 colPosition:(unsigned long long)arg2;
- (void)updateStatisticsReal:(double)arg1 colPosition:(unsigned long long)arg2;
- (_Bool)isColumnContinousData:(unsigned int)arg1;
- (double)columnQueryFor:(unsigned int)arg1 withQuery:(id)arg2;
- (double)getMaxFor:(unsigned int)arg1;
- (double)getMinFor:(unsigned int)arg1;
- (double)getStdDevFor:(unsigned int)arg1;
- (double)getMeanFor:(unsigned int)arg1;
- (unsigned long long)getRowCount;
- (unsigned long long)getColumnCount;
- (unsigned long long)getCardinality:(unsigned int)arg1;
- (unsigned long long)getCombinedRemapTableCardinality:(unsigned int)arg1;
- (void)dropCommands:(id)arg1;
- (void)deleteAllRows:(id)arg1;
- (void)deleteRow:(id)arg1 whereMatch:(id)arg2;
- (void)updateTable:(id)arg1 withAttribute:(id)arg2 whereMatch:(id)arg3;
- (void)queryDatabase:(id)arg1 whereMatch:(id)arg2;
- (void)insertIntoTable:(id)arg1 withTuple:(id)arg2;
- (void)addColumnToTable:(id)arg1 withNewColumn:(id)arg2;
- (void)createTable:(id)arg1 withSchema:(id)arg2 withExistingTable:(_Bool)arg3;
- (void)execSQLCommand:(id)arg1;
- (_Bool)logNSDataDouble:(id)arg1;
- (_Bool)logNSDataFloat:(id)arg1;
- (_Bool)logBatchNSDictionary:(id)arg1;
- (_Bool)logNSDictionary:(id)arg1;
- (_Bool)logBatchNSArray:(id)arg1;
- (_Bool)logNSArray:(id)arg1;
- (_Bool)logNSObjectV:(id)arg1;
- (_Bool)logCTypesV:(void *)arg1;
- (id)prepInsertStatementForMainTable;
- (void)flushDB;
- (void)restart;
- (void)dealloc;
- (void)loadTables;
- (void)doInitializeWithDataFile:(id)arg1 dataFromFile:(id)arg2 withConfiguration:(id)arg3 withWriteOptions:(int)arg4;
- (id)initWithDBName:(id)arg1 dataFromFile:(id)arg2 withConfiguration:(id)arg3 withWriteOptions:(int)arg4;
- (id)initWithDBName:(id)arg1 dataFromFile:(id)arg2 withPlistPath:(id)arg3 withWriteOptions:(int)arg4;
- (void)doInitialize:(id)arg1 withConfiguration:(id)arg2 withWriteOptions:(int)arg3;
- (void)doInitCommon:(id)arg1 withDict:(id)arg2 withFileExists:(_Bool *)arg3 withWriteOptions:(int)arg4;
- (id)initWithDBName:(id)arg1 withConfiguration:(id)arg2 withWriteOptions:(int)arg3;
- (id)initWithDBName:(id)arg1 withPlistPath:(id)arg2 withWriteOptions:(int)arg3;
- (void)initMaxSizeStatistics:(unsigned long long)arg1;

@end
