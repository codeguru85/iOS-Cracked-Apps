//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSString, UIButton, UIImage, UIImageView, UILabel;

@interface CFT_UIFaceToFaceSmallView : UIView
{
    UIImageView *_bgview;
    UIImageView *_introduceIconImgview;
    UILabel *_introduceDescLabel;
    UIButton *_downLoadBt;
    UIImageView *_qrBgimgview;
    UILabel *_wishLabel;
    UILabel *_redNumLabel;
    UIView *_totalHeadview;
    NSMutableArray *_headerUinArry;
    NSMutableArray *_headerImgViewArry;
    NSMutableArray *_uinQueue;
    UIButton *_detailButton;
    _Bool _isAnimation;
    _Bool _isSaveComplete;
    CDUnknownBlockType _pushRedDetailBlock;
    NSString *_listid;
    NSString *_strNick;
    NSString *_strWish;
    UIImage *_qrCodeImg;
}

@property(retain, nonatomic) UIImage *qrCodeImg; // @synthesize qrCodeImg=_qrCodeImg;
@property(retain, nonatomic) NSString *strWish; // @synthesize strWish=_strWish;
@property(retain, nonatomic) NSString *strNick; // @synthesize strNick=_strNick;
@property(retain, nonatomic) NSString *listid; // @synthesize listid=_listid;
@property(copy, nonatomic) CDUnknownBlockType pushRedDetailBlock; // @synthesize pushRedDetailBlock=_pushRedDetailBlock;
- (void)dealloc;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;

@end

