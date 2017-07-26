//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface APSHOPCENTERDynamicPageRequest : NSObject
{
    NSString *_systemType;
    NSString *_templateType;
    NSString *_templateParams;
    NSDictionary *_blockMd5s;
    NSString *_pageType;
    NSString *_pageRequest;
    double _longitude;
    double _latitude;
    NSString *_chInfo;
}

+ (Class)blockMd5sElementClass;
@property(retain, nonatomic) NSString *chInfo; // @synthesize chInfo=_chInfo;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *pageRequest; // @synthesize pageRequest=_pageRequest;
@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) NSDictionary *blockMd5s; // @synthesize blockMd5s=_blockMd5s;
@property(retain, nonatomic) NSString *templateParams; // @synthesize templateParams=_templateParams;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *systemType; // @synthesize systemType=_systemType;
- (void).cxx_destruct;

@end
