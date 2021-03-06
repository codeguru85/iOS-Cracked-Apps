//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ReadInJoyUGCPicInfo : NSObject
{
    unsigned int _width;
    unsigned int _height;
    unsigned int _type;
    unsigned int _style;
    NSString *_md5;
    NSString *_url;
    NSString *_thumbnailUrl;
}

+ (id)ugcPicInfoFromMsgDecoder:(struct CPBMessageDecoder *)arg1;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
- (void)dealloc;
- (void)toEncoder:(struct CPBMessageEncoder *)arg1;

@end

