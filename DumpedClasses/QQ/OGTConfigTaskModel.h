//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray, NSString, OGTSceneModel;

@interface OGTConfigTaskModel : QQModel
{
    double _configDate;
    NSString *_taskID;
    NSArray *_titles;
    NSArray *_highlightedTitles;
    NSArray *_favoriteTitles;
    NSArray *_favoriteHighlightedTitles;
    NSString *_linkURL;
    float _priority;
    long long _timesDaily;
    long long _timesPeriod;
    _Bool _timeDailyControl;
    NSArray *_timeRanges;
    OGTSceneModel *_scene;
    NSArray *_randomWordings;
    NSString *_url;
    NSString *_md5;
    _Bool _downloaded;
    int _xo;
    NSArray *_favoriteTitlesForSelf;
    NSArray *_favoriteHighlightedTitlesForSelf;
    NSArray *_favoriteTitlesForOther;
    NSArray *_favoriteHighlightedTitlesForOther;
    unsigned long long _AIOType;
    unsigned long long _SexType;
}

@property(nonatomic) _Bool downloaded; // @synthesize downloaded=_downloaded;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long SexType; // @synthesize SexType=_SexType;
@property(nonatomic) unsigned long long AIOType; // @synthesize AIOType=_AIOType;
@property(retain, nonatomic) NSArray *favoriteHighlightedTitlesForOther; // @synthesize favoriteHighlightedTitlesForOther=_favoriteHighlightedTitlesForOther;
@property(retain, nonatomic) NSArray *favoriteTitlesForOther; // @synthesize favoriteTitlesForOther=_favoriteTitlesForOther;
@property(retain, nonatomic) NSArray *favoriteHighlightedTitlesForSelf; // @synthesize favoriteHighlightedTitlesForSelf=_favoriteHighlightedTitlesForSelf;
@property(retain, nonatomic) NSArray *favoriteTitlesForSelf; // @synthesize favoriteTitlesForSelf=_favoriteTitlesForSelf;
- (void).cxx_destruct;
- (id)highlightedTitlesWithValue:(id)arg1;
- (id)titlesWithValue:(id)arg1;
- (id)timeRangesWithValue:(id)arg1;
- (unsigned long long)sexTypeWithValue:(id)arg1;
- (unsigned long long)AIOTypeWithValue:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)parseFromDictionary:(id)arg1 withConfigDate:(double)arg2 url:(id)arg3 md5:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic) double configDate; // @dynamic configDate;
@property(retain, nonatomic) NSArray *highlightedTitles; // @dynamic highlightedTitles;
@property(copy, nonatomic) NSString *linkURL; // @dynamic linkURL;
@property(nonatomic) float priority; // @dynamic priority;
@property(retain, nonatomic) NSArray *randomWordings; // @dynamic randomWordings;
@property(retain, nonatomic) OGTSceneModel *scene; // @dynamic scene;
@property(copy, nonatomic) NSString *taskID; // @dynamic taskID;
@property(nonatomic) _Bool timeDailyControl; // @dynamic timeDailyControl;
@property(retain, nonatomic) NSArray *timeRanges; // @dynamic timeRanges;
@property(nonatomic) long long timesDaily; // @dynamic timesDaily;
@property(nonatomic) long long timesPeriod; // @dynamic timesPeriod;
@property(retain, nonatomic) NSArray *titles; // @dynamic titles;

@end

