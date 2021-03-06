//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HLFeedCell.h"

@class HLIconNumView, NSString, UIButton, UILabel, UIView<HLNumViewProtocol>;

@interface HLVideoListFeedCell : HLFeedCell
{
    _Bool _isFavoured;
    NSString *_feedId;
    long long _favourNum;
    UIButton *_videoBtn;
    UIButton *_shareBtn;
    UILabel *_timeLbl;
    UIButton *_commentBtn;
    HLIconNumView *_commentView;
    UIButton *_favorBtn;
    HLIconNumView *_favorView;
    UIView<HLNumViewProtocol> *_readNumView;
}

@property(retain, nonatomic) UIView<HLNumViewProtocol> *readNumView; // @synthesize readNumView=_readNumView;
@property(retain, nonatomic) HLIconNumView *favorView; // @synthesize favorView=_favorView;
@property(retain, nonatomic) UIButton *favorBtn; // @synthesize favorBtn=_favorBtn;
@property(retain, nonatomic) HLIconNumView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) UIButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) UILabel *timeLbl; // @synthesize timeLbl=_timeLbl;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UIButton *videoBtn; // @synthesize videoBtn=_videoBtn;
@property(nonatomic) long long favourNum; // @synthesize favourNum=_favourNum;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) _Bool isFavoured; // @synthesize isFavoured=_isFavoured;
- (void).cxx_destruct;
- (void)onCommentBtnClickHandler:(id)arg1;
- (void)onFavorBtnClickHandler:(id)arg1;
- (void)onVideoBtnClickHandler:(id)arg1;
- (void)onShareBtnClickHandler:(id)arg1;
- (void)updateCell:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutCommentAndFavorView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

