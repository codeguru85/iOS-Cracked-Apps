//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Train6BaseModel.h"

@class NSArray, NSDictionary, NSString;

@interface Train12306PayInfo : Train6BaseModel
{
    NSString *_url;
    NSString *_method;
    long long _flag;
    NSDictionary *_bankParams;
    NSArray *_successFlag;
    NSDictionary *_bankInfo;
    NSString *_dZLPayPlatform;
}

@property(retain, nonatomic) NSString *dZLPayPlatform; // @synthesize dZLPayPlatform=_dZLPayPlatform;
@property(retain, nonatomic) NSDictionary *bankInfo; // @synthesize bankInfo=_bankInfo;
@property(retain, nonatomic) NSArray *successFlag; // @synthesize successFlag=_successFlag;
@property(retain, nonatomic) NSDictionary *bankParams; // @synthesize bankParams=_bankParams;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)bankInfoURLString;

@end
