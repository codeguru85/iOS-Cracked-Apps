//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSMutableArray<AliDetailHotActivityItemModel>, NSString;

@interface AliDetailHotActivityChaoShiModel : AliDetailComponentModel
{
    NSMutableArray<AliDetailHotActivityItemModel> *_activityList;
    NSString *_itemId;
}

@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSMutableArray<AliDetailHotActivityItemModel> *activityList; // @synthesize activityList=_activityList;
- (void).cxx_destruct;
- (void)parseDataFromDetailModel:(id)arg1;

@end

