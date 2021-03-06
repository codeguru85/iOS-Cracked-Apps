//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FMSharePhraseItemDO : NSObject
{
    _Bool _isSelfShared;
    _Bool _isSetHide;
    NSString *_bizId;
    NSString *_sourceType;
    NSString *_longUrl;
    NSString *_picUrl;
    NSString *_title;
    NSString *_leftBtnText;
    NSString *_rightBtnText;
    NSString *_price;
    NSString *_targetUrl;
    NSString *_passwordType;
    NSString *_openAppName;
    NSString *_templateId;
    NSString *_extendInfo;
    unsigned long long _shareType;
    unsigned long long _itemType;
    NSString *_messageContent;
    NSArray *_buttonTitles;
    NSString *_phraseContent;
}

@property(copy, nonatomic) NSString *phraseContent; // @synthesize phraseContent=_phraseContent;
@property(copy, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
@property(copy, nonatomic) NSString *messageContent; // @synthesize messageContent=_messageContent;
@property(nonatomic) _Bool isSetHide; // @synthesize isSetHide=_isSetHide;
@property(nonatomic) _Bool isSelfShared; // @synthesize isSelfShared=_isSelfShared;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) unsigned long long shareType; // @synthesize shareType=_shareType;
@property(copy, nonatomic) NSString *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(copy, nonatomic) NSString *openAppName; // @synthesize openAppName=_openAppName;
@property(copy, nonatomic) NSString *passwordType; // @synthesize passwordType=_passwordType;
@property(copy, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *rightBtnText; // @synthesize rightBtnText=_rightBtnText;
@property(copy, nonatomic) NSString *leftBtnText; // @synthesize leftBtnText=_leftBtnText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *longUrl; // @synthesize longUrl=_longUrl;
@property(readonly, copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, copy, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
- (void).cxx_destruct;
- (id)init;

@end

