//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMDatabase.h"

@class NSMutableSet;

@interface TTIMDB : FMDatabase
{
    NSMutableSet *_existsTable;
}

@property(retain, nonatomic) NSMutableSet *existsTable; // @synthesize existsTable=_existsTable;
- (void).cxx_destruct;
- (void)groupMsg1To2;
- (void)updateDB;
- (void)resetExitTables;
- (void)removeInExitTables:(id)arg1;
- (id)allTablesInDB;
- (id)queryAllTablesInDB;
- (void)createSessionListTable;
- (void)createGroupListTable;
- (void)createChatTable:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

