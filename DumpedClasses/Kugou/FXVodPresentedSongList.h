//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSArray<FXVodPresentedSongModel>;

@interface FXVodPresentedSongList : FXBaseJSONModel
{
    long long _price;
    long long _count;
    NSArray<FXVodPresentedSongModel> *_list;
}

@property(retain, nonatomic) NSArray<FXVodPresentedSongModel> *list; // @synthesize list=_list;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long price; // @synthesize price=_price;
- (void).cxx_destruct;

@end

