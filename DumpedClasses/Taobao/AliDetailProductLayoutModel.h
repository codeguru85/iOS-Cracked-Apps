//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailProductComponents, AliDetailProductPageData, NSArray<AliDetailApiUnit>;

@interface AliDetailProductLayoutModel : TBJSONModel
{
    AliDetailProductComponents *_components;
    AliDetailProductPageData *_page;
    NSArray<AliDetailApiUnit> *_requestApi;
}

@property(retain, nonatomic) NSArray<AliDetailApiUnit> *requestApi; // @synthesize requestApi=_requestApi;
@property(retain, nonatomic) AliDetailProductPageData *page; // @synthesize page=_page;
@property(retain, nonatomic) AliDetailProductComponents *components; // @synthesize components=_components;
- (void).cxx_destruct;

@end

