//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSError, NSString, UIImage;

@interface SharedInfo : NSObject <NSCopying>
{
    _Bool _isNetErr;
    int _type;
    int _listID;
    NSString *_tryListenUrl;
    NSError *_tryListenUrlError;
    NSString *_text;
    NSString *_imgIconUrl;
    NSString *_title;
    NSString *_subTitle;
    NSString *_singerName;
    UIImage *_imgIcon;
    NSError *_shareCoverError;
    NSString *_strFileHash;
    NSString *_songUrl;
    NSString *_weixinSongUrl;
    id _extObj;
    unsigned long long _fromPageDetail;
    NSString *_fromPath;
    NSString *_adsSloganOfWeibo;
    long long _mediaType;
}

@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *adsSloganOfWeibo; // @synthesize adsSloganOfWeibo=_adsSloganOfWeibo;
@property(copy, nonatomic) NSString *fromPath; // @synthesize fromPath=_fromPath;
@property(nonatomic) unsigned long long fromPageDetail; // @synthesize fromPageDetail=_fromPageDetail;
@property(retain, nonatomic) id extObj; // @synthesize extObj=_extObj;
@property(nonatomic) int listID; // @synthesize listID=_listID;
@property(nonatomic) _Bool isNetErr; // @synthesize isNetErr=_isNetErr;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *weixinSongUrl; // @synthesize weixinSongUrl=_weixinSongUrl;
@property(copy, nonatomic) NSString *songUrl; // @synthesize songUrl=_songUrl;
@property(copy, nonatomic) NSString *strFileHash; // @synthesize strFileHash=_strFileHash;
@property(retain, nonatomic) NSError *shareCoverError; // @synthesize shareCoverError=_shareCoverError;
@property(retain, nonatomic) UIImage *imgIcon; // @synthesize imgIcon=_imgIcon;
@property(copy, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *imgIconUrl; // @synthesize imgIconUrl=_imgIconUrl;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSError *tryListenUrlError; // @synthesize tryListenUrlError=_tryListenUrlError;
@property(copy, nonatomic) NSString *tryListenUrl; // @synthesize tryListenUrl=_tryListenUrl;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

