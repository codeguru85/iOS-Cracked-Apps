//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSString;

@interface SPayBillActItem : TRBaseModel
{
    NSString *_title;
    NSString *_url;
    long long _actId;
    long long _iconType;
}

@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(nonatomic) long long actId; // @synthesize actId=_actId;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

