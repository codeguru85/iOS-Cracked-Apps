//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBLiveBaseView.h"

@class TBLiveGoodsProcessor, UILabel, UIView;

@interface TBLiveGoodsPromptView : TBLiveBaseView
{
    long long _itemCount;
    long long _weexViewRenderState;
    _Bool _isWeexGoodsView;
    _Bool _isBroadCaster;
    _Bool _isLandscape;
    TBLiveGoodsProcessor *_goodsProcessor;
    id <TBLiveOverlayProtocol> _overlayView;
    UIView *_badgeView;
    UILabel *_itemLabel;
}

@property(retain, nonatomic) UILabel *itemLabel; // @synthesize itemLabel=_itemLabel;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) _Bool isBroadCaster; // @synthesize isBroadCaster=_isBroadCaster;
@property(nonatomic) _Bool isWeexGoodsView; // @synthesize isWeexGoodsView=_isWeexGoodsView;
@property(nonatomic) __weak id <TBLiveOverlayProtocol> overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) TBLiveGoodsProcessor *goodsProcessor; // @synthesize goodsProcessor=_goodsProcessor;
- (void).cxx_destruct;
- (void)setAllowOpenMiniPlay:(_Bool)arg1;
- (void)closeGoodsView;
- (id)getGoodsView;
- (void)actionWeexViewDegrade;
- (void)onTapGesture:(id)arg1;
- (void)addWeexDataWithShareMessage:(id)arg1;
- (void)addWeexDataWithGoodsList:(id)arg1;
- (void)addNativeGoodsListWithDetailModel:(id)arg1;
- (void)getNativeGoodsListData;
- (void)addNativeGoodItem:(id)arg1;
- (void)setNativeGoodsList:(id)arg1;
- (void)refreshWithItemCount:(long long)arg1;
- (void)updateLayoutConstraints;
- (void)setupGoodsListWeexView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

