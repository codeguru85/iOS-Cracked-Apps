//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ReadInJoyChannelArticle, ReadInJoyEmotionLabel, UILabel;

@interface QQBiuRecommandEditArticleView : UIView
{
    UILabel *_titleView;
    ReadInJoyEmotionLabel *_infoView;
    unsigned long long _maxTextWidth;
    ReadInJoyChannelArticle *_feedsModel;
}

@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (void)layoutSubviews;
- (id)getInfoTextWithModel:(id)arg1;
- (id)getTitleTextWithModel:(id)arg1;
- (void)dealloc;
- (_Bool)hasCoverUrl:(id)arg1;
- (id)initWithArticleModel:(struct CGRect)arg1 articleModel:(id)arg2;

@end

