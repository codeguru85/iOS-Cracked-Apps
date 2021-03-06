//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MusicBaseCell.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, RecommendSpecialButton, SpecialItem;

@interface RecommendSpecialCell : MusicBaseCell <UIGestureRecognizerDelegate>
{
    int _specailType;
    RecommendSpecialButton *_firstSpecialBtn;
    RecommendSpecialButton *_secondSpecialBtn;
    RecommendSpecialButton *_thirdSpecialBtn;
    SpecialItem *_firstSpecial;
    SpecialItem *_secondSpecial;
    SpecialItem *_thirdSpecial;
    SpecialItem *_selectedSpecial;
    id <RecommendSpecialCellDelegate> _delegate;
}

+ (double)calculateItemHeightWithDataSource:(id)arg1;
@property(nonatomic) int specailType; // @synthesize specailType=_specailType;
@property(nonatomic) __weak id <RecommendSpecialCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SpecialItem *selectedSpecial; // @synthesize selectedSpecial=_selectedSpecial;
@property(retain, nonatomic) SpecialItem *thirdSpecial; // @synthesize thirdSpecial=_thirdSpecial;
@property(retain, nonatomic) SpecialItem *secondSpecial; // @synthesize secondSpecial=_secondSpecial;
@property(retain, nonatomic) SpecialItem *firstSpecial; // @synthesize firstSpecial=_firstSpecial;
@property(retain, nonatomic) RecommendSpecialButton *thirdSpecialBtn; // @synthesize thirdSpecialBtn=_thirdSpecialBtn;
@property(retain, nonatomic) RecommendSpecialButton *secondSpecialBtn; // @synthesize secondSpecialBtn=_secondSpecialBtn;
@property(retain, nonatomic) RecommendSpecialButton *firstSpecialBtn; // @synthesize firstSpecialBtn=_firstSpecialBtn;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)thirdMusicPlay;
- (void)secondMusicPlay;
- (void)firstMusicPlay;
- (void)clickThirdSpecial;
- (void)clickSecondSpecial;
- (void)clickFirstSpecial;
- (void)layoutSubviews;
- (void)viewInit;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

