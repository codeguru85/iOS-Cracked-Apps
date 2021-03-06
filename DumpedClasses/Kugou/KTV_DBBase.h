//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabase, NSString;

@interface KTV_DBBase : NSObject
{
    NSString *dbPath;
    FMDatabase *m_db;
}

@property(retain, nonatomic) FMDatabase *m_db; // @synthesize m_db;
@property(retain, nonatomic) NSString *dbPath; // @synthesize dbPath;
- (void).cxx_destruct;
- (_Bool)excuteSQL:(id)arg1;
- (_Bool)dropTable:(id)arg1;
- (_Bool)update:(id)arg1 condition:(id)arg2 withTableName:(id)arg3;
- (_Bool)deleteData:(id)arg1 withTableName:(id)arg2;
- (_Bool)deleteAllWithTableName:(id)arg1;
- (_Bool)insertIntoTable:(id)arg1 withTableName:(id)arg2;
- (_Bool)NSStringIsNULL:(id)arg1;
- (_Bool)CreateCityTable;
- (_Bool)CreateHotRecommendInfoTable;
- (_Bool)CreateSongNameAndSingerNameMappingTable;
- (_Bool)CreateTopicInfoTable;
- (_Bool)CreateHotSingerRegionTable;
- (_Bool)CreateHotSingerTable;
- (_Bool)CreateHotSongTable;
- (_Bool)CreateSystemMsgUserTable;
- (_Bool)CreateSystemMsgTable;
- (_Bool)CreateSingerTable;
- (id)getDbPath;
- (_Bool)MakeDBIsExistAndOpen;
- (id)init;

@end

