//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ILTranslucentView, NSDictionary, UIButton, UILabel;

@interface TBWopcAuthView : UIView
{
    CDUnknownBlockType _onAuth;
    CDUnknownBlockType _onCancel;
    NSDictionary *_authInfo;
    UIView *_parentView;
    UIView *_backgroundView;
    ILTranslucentView *_blurView;
    UILabel *_titleLabel;
    UIView *_logoView;
    UIView *_descriptionView;
    UIButton *_hintButton;
    UIButton *_cancelButton;
    UIButton *_authButton;
}

@property(retain, nonatomic) UIButton *authButton; // @synthesize authButton=_authButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *hintButton; // @synthesize hintButton=_hintButton;
@property(retain, nonatomic) UIView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UIView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) ILTranslucentView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) NSDictionary *authInfo; // @synthesize authInfo=_authInfo;
@property(copy, nonatomic) CDUnknownBlockType onCancel; // @synthesize onCancel=_onCancel;
@property(copy, nonatomic) CDUnknownBlockType onAuth; // @synthesize onAuth=_onAuth;
- (void).cxx_destruct;
- (void)hint:(id)arg1;
- (void)cancel:(id)arg1;
- (void)auth:(id)arg1;
- (void)dismiss;
- (void)show;
- (void)sepratorLine;
- (void)setupView:(id)arg1;
- (id)initWithReferenceView:(id)arg1 authInfo:(id)arg2;
- (id)initWithReferenceView:(id)arg1;

@end

