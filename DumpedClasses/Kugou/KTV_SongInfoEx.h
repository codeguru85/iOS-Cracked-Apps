//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTV_SongInfo.h"

@class NSDictionary, NSMutableArray<KTV_SongInfoEx>;

@interface KTV_SongInfoEx : KTV_SongInfo
{
    _Bool _hasRemmend;
    int _sourceType;
    int _expendNumber;
    NSDictionary *_grp;
    long long _songHot;
    NSMutableArray<KTV_SongInfoEx> *_grpArr;
}

+ (id)keyMapper;
@property(nonatomic) int expendNumber; // @synthesize expendNumber=_expendNumber;
@property(retain, nonatomic) NSMutableArray<KTV_SongInfoEx> *grpArr; // @synthesize grpArr=_grpArr;
@property(nonatomic) long long songHot; // @synthesize songHot=_songHot;
@property(retain, nonatomic) NSDictionary *grp; // @synthesize grp=_grp;
@property(nonatomic) _Bool hasRemmend; // @synthesize hasRemmend=_hasRemmend;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
- (void).cxx_destruct;
- (id)init;

@end

