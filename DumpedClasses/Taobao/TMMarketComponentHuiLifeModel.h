//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMMarketComponentBaseModel.h"

@class NSArray, NSString;

@interface TMMarketComponentHuiLifeModel : TMMarketComponentBaseModel
{
    NSArray *_itemModels;
    double _itemMargin;
    double _itemBgCornerRadius;
    double _itemAspectRatio;
    NSString *_tipsPull;
    NSString *_tipsRelease;
    NSString *_tipsColor;
    NSString *_tipsBgColor;
}

@property(copy, nonatomic) NSString *tipsBgColor; // @synthesize tipsBgColor=_tipsBgColor;
@property(copy, nonatomic) NSString *tipsColor; // @synthesize tipsColor=_tipsColor;
@property(copy, nonatomic) NSString *tipsRelease; // @synthesize tipsRelease=_tipsRelease;
@property(copy, nonatomic) NSString *tipsPull; // @synthesize tipsPull=_tipsPull;
@property(nonatomic) double itemAspectRatio; // @synthesize itemAspectRatio=_itemAspectRatio;
@property(nonatomic) double itemBgCornerRadius; // @synthesize itemBgCornerRadius=_itemBgCornerRadius;
@property(nonatomic) double itemMargin; // @synthesize itemMargin=_itemMargin;
@property(retain, nonatomic) NSArray *itemModels; // @synthesize itemModels=_itemModels;
- (void).cxx_destruct;
- (id)reuseIdentifier;
- (id)imgUrls;
- (id)initWithDictionary:(id)arg1;

@end

