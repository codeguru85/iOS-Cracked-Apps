//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FXWatchSingerAdInfoModel : NSObject
{
    _Bool _bFollowed;
    long long _uniqueId;
    long long _singerid;
    NSString *_singername;
    long long _userid;
    NSString *_username;
    NSString *_avatar;
    long long _videoid;
    NSString *_mvhash;
    long long _playcount;
    long long _timelength;
    NSString *_videoname;
    NSString *_desc;
    NSString *_img;
    long long _comment;
    long long _type;
    long long _albumid;
    NSString *_albumname;
    NSString *_url;
    NSString *_title;
    NSString *_imgurl;
    NSString *_intro;
    long long _is_settled;
}

+ (id)modelPropertyBlacklist;
+ (id)modelCustomPropertyMapper;
@property(nonatomic) _Bool bFollowed; // @synthesize bFollowed=_bFollowed;
@property(nonatomic) long long is_settled; // @synthesize is_settled=_is_settled;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(copy, nonatomic) NSString *imgurl; // @synthesize imgurl=_imgurl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *albumname; // @synthesize albumname=_albumname;
@property(nonatomic) long long albumid; // @synthesize albumid=_albumid;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *videoname; // @synthesize videoname=_videoname;
@property(nonatomic) long long timelength; // @synthesize timelength=_timelength;
@property(nonatomic) long long playcount; // @synthesize playcount=_playcount;
@property(copy, nonatomic) NSString *mvhash; // @synthesize mvhash=_mvhash;
@property(nonatomic) long long videoid; // @synthesize videoid=_videoid;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) long long userid; // @synthesize userid=_userid;
@property(copy, nonatomic) NSString *singername; // @synthesize singername=_singername;
@property(nonatomic) long long singerid; // @synthesize singerid=_singerid;
@property(nonatomic) long long uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;
- (id)getSeparatedLinesFromDescWithLabelSize:(struct CGSize)arg1;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

@end

