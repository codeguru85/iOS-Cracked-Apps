//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, TTFeedRecommendHeaderModel, TTImageInfosModel, WDAnswerVideoModel;

@interface WDNativeListBaseCellViewModel : NSObject
{
    _Bool _hideAnswerAbstract;
    _Bool _showTopSeparator;
    _Bool _showBottomSeparator;
    _Bool _showDislike;
    NSString *_questionTitle;
    NSString *_answerAbstract;
    NSString *_accountName;
    NSNumber *_answerTotalCount;
    NSNumber *_starTotalCount;
    NSArray *_dislikeWords;
    NSString *_cellPrimaryId;
    TTImageInfosModel *_largeImageModel;
    TTImageInfosModel *_mediumImageModel;
    TTImageInfosModel *_smallImageModel;
    NSArray *_threeImageModels;
    WDAnswerVideoModel *_videoModel;
    TTFeedRecommendHeaderModel *_recommendHeaderModel;
    long long _cellShowType;
    NSString *_videoTypeName;
    NSString *_videoSourceName;
    NSNumber *_videoTypeColorType;
}

+ (id)getModelFromWDCategoryData:(id)arg1;
@property(retain, nonatomic) NSNumber *videoTypeColorType; // @synthesize videoTypeColorType=_videoTypeColorType;
@property(copy, nonatomic) NSString *videoSourceName; // @synthesize videoSourceName=_videoSourceName;
@property(copy, nonatomic) NSString *videoTypeName; // @synthesize videoTypeName=_videoTypeName;
@property(nonatomic) _Bool showDislike; // @synthesize showDislike=_showDislike;
@property(nonatomic) _Bool showBottomSeparator; // @synthesize showBottomSeparator=_showBottomSeparator;
@property(nonatomic) _Bool showTopSeparator; // @synthesize showTopSeparator=_showTopSeparator;
@property(nonatomic) _Bool hideAnswerAbstract; // @synthesize hideAnswerAbstract=_hideAnswerAbstract;
@property(nonatomic) long long cellShowType; // @synthesize cellShowType=_cellShowType;
@property(retain, nonatomic) TTFeedRecommendHeaderModel *recommendHeaderModel; // @synthesize recommendHeaderModel=_recommendHeaderModel;
@property(retain, nonatomic) WDAnswerVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(retain, nonatomic) NSArray *threeImageModels; // @synthesize threeImageModels=_threeImageModels;
@property(retain, nonatomic) TTImageInfosModel *smallImageModel; // @synthesize smallImageModel=_smallImageModel;
@property(retain, nonatomic) TTImageInfosModel *mediumImageModel; // @synthesize mediumImageModel=_mediumImageModel;
@property(retain, nonatomic) TTImageInfosModel *largeImageModel; // @synthesize largeImageModel=_largeImageModel;
@property(copy, nonatomic) NSString *cellPrimaryId; // @synthesize cellPrimaryId=_cellPrimaryId;
@property(retain, nonatomic) NSArray *dislikeWords; // @synthesize dislikeWords=_dislikeWords;
@property(retain, nonatomic) NSNumber *starTotalCount; // @synthesize starTotalCount=_starTotalCount;
@property(retain, nonatomic) NSNumber *answerTotalCount; // @synthesize answerTotalCount=_answerTotalCount;
@property(copy, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(copy, nonatomic) NSString *answerAbstract; // @synthesize answerAbstract=_answerAbstract;
@property(copy, nonatomic) NSString *questionTitle; // @synthesize questionTitle=_questionTitle;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initFromWDCategoryData:(id)arg1;

@end

