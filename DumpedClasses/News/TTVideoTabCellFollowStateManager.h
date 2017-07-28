//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMutableDictionary;

@interface TTVideoTabCellFollowStateManager : NSObject
{
    NSMutableDictionary *_followDict;
    NSMutableDictionary *_followerCountDict;
    NSHashTable *_notifyTable;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSHashTable *notifyTable; // @synthesize notifyTable=_notifyTable;
@property(retain, nonatomic) NSMutableDictionary *followerCountDict; // @synthesize followerCountDict=_followerCountDict;
@property(retain, nonatomic) NSMutableDictionary *followDict; // @synthesize followDict=_followDict;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 useingFollowerCountNotifyBlock:(CDUnknownBlockType)arg2;
- (long long)followerCountForUid:(id)arg1;
- (void)postNotiWithFollowerCount:(long long)arg1 uid:(id)arg2;
- (void)setFollowerCount:(long long)arg1 forUid:(id)arg2;
- (long long)followStateForUid:(id)arg1;
- (void)setFollowState:(long long)arg1 forUid:(id)arg2;
- (id)init;

@end
