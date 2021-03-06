//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class DCAvatarView, DCMessagePhoneView, DCOrderInfoTimeLabel, DCRichView, DCRouteOrderListItem, UIView;

@interface DCShoppingCartPsgrCell : UITableViewCell
{
    DCRouteOrderListItem *_cellModel;
    CDUnknownBlockType _cellIMActionBlock;
    CDUnknownBlockType _cellPhoneActionBlock;
    CDUnknownBlockType _cellAvatarActionBlock;
    UIView *_containerView;
    DCRichView *_timeDestRichView;
    UIView *_cellAboveView;
    UIView *_cellBelowView;
    UIView *_separateLine;
    DCAvatarView *_avatarImgView;
    DCOrderInfoTimeLabel *_priceLabel;
    DCRichView *_userTagsView;
    DCMessagePhoneView *_messagePhoneView;
    UIView *_seperateView;
}

+ (id)shoppingCartPsgrCellWithTableView:(id)arg1;
@property(nonatomic) __weak UIView *seperateView; // @synthesize seperateView=_seperateView;
@property(nonatomic) __weak DCMessagePhoneView *messagePhoneView; // @synthesize messagePhoneView=_messagePhoneView;
@property(nonatomic) __weak DCRichView *userTagsView; // @synthesize userTagsView=_userTagsView;
@property(nonatomic) __weak DCOrderInfoTimeLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak DCAvatarView *avatarImgView; // @synthesize avatarImgView=_avatarImgView;
@property(nonatomic) __weak UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(nonatomic) __weak UIView *cellBelowView; // @synthesize cellBelowView=_cellBelowView;
@property(nonatomic) __weak UIView *cellAboveView; // @synthesize cellAboveView=_cellAboveView;
@property(nonatomic) __weak DCRichView *timeDestRichView; // @synthesize timeDestRichView=_timeDestRichView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType cellAvatarActionBlock; // @synthesize cellAvatarActionBlock=_cellAvatarActionBlock;
@property(copy, nonatomic) CDUnknownBlockType cellPhoneActionBlock; // @synthesize cellPhoneActionBlock=_cellPhoneActionBlock;
@property(copy, nonatomic) CDUnknownBlockType cellIMActionBlock; // @synthesize cellIMActionBlock=_cellIMActionBlock;
@property(retain, nonatomic) DCRouteOrderListItem *cellModel; // @synthesize cellModel=_cellModel;
- (void).cxx_destruct;
- (void)clickAvatar;
- (void)clickPhoneAction;
- (void)clickIMAction;
- (void)updateMessagePhone:(id)arg1;
- (void)setupTripTags:(id)arg1;
- (void)setupPriceLabelWithPrice:(id)arg1;
- (void)updateTimeDestRichView:(id)arg1;
- (void)updatePriceLabelConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

