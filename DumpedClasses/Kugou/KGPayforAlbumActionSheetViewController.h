//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGAlertLoginCopeCenter.h"
#import "KGAlertShowForRegisterCenter.h"
#import "KGAllCloseDelegate.h"
#import "WebViewWillRemoveDelegate.h"

@class KGGoodsAndRelateGoodsEntity, NSString, SongInfo;

@interface KGPayforAlbumActionSheetViewController : KGViewController <KGAlertShowForRegisterCenter, KGAllCloseDelegate, WebViewWillRemoveDelegate, KGAlertLoginCopeCenter>
{
    _Bool _isSingleSong;
    KGGoodsAndRelateGoodsEntity *_goodsEntity;
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _cancelCallback;
    unsigned long long _albumShowType;
    unsigned long long _behavior;
    SongInfo *_songInfo;
    id <KGAlertLoginCopeCenter> _alertLoginDelegate;
}

+ (id)shareAlbumActionSheetViewController;
+ (void)writeSelectedIndex:(int)arg1;
+ (int)readSelectedIndex;
@property(nonatomic) __weak id <KGAlertLoginCopeCenter> alertLoginDelegate; // @synthesize alertLoginDelegate=_alertLoginDelegate;
@property(retain, nonatomic) SongInfo *songInfo; // @synthesize songInfo=_songInfo;
@property(nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(nonatomic) unsigned long long albumShowType; // @synthesize albumShowType=_albumShowType;
@property(nonatomic) _Bool isSingleSong; // @synthesize isSingleSong=_isSingleSong;
@property(copy, nonatomic) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(copy, nonatomic) CDUnknownBlockType successCallback; // @synthesize successCallback=_successCallback;
@property(retain, nonatomic) KGGoodsAndRelateGoodsEntity *goodsEntity; // @synthesize goodsEntity=_goodsEntity;
- (void).cxx_destruct;
- (void)copeLoginWithAlert:(id)arg1 loginStatusCallBack:(CDUnknownBlockType)arg2;
- (void)webViewWillRemove;
- (void)closeCancelWithTag:(long long)arg1;
- (void)closeSuccessWithTag:(long long)arg1;
- (void)showToUrlAlbumShowTypeBuyWidthGoods:(id)arg1;
- (void)dismissLoading;
- (void)showLoadingStatus:(id)arg1;
- (void)show;
- (void)cancelAction;
- (id)cancelActionBtn;
- (void)buySuccessWithGoodsEntity:(id)arg1;
- (void)toMusicPkgControllerWithIsUpgrade:(_Bool)arg1;
- (void)showToUrlBuyWithGoods:(id)arg1 AndTypeStr:(id)arg2;
- (void)showAlertViewWithGoods:(id)arg1 AndTypeStr:(id)arg2 AndPayTypes:(id)arg3 AndBalance:(id)arg4;
- (id)albumNoNameBuyTips;
- (id)albumBuyTips;
- (void)showRetryPayWithGoods:(id)arg1 AndPayType:(int)arg2;
- (void)toRechargeKubiWithGoodsEntity:(id)arg1 AndUserKubiBalance:(long long)arg2;
- (void)toUseKubiToBuyWithGoodsEntity:(id)arg1;
- (void)toUseMusicPkgToBuyWithGoodsEntity:(id)arg1;
- (void)presentAlertView;
- (void)sendStatistics;
- (void)reset;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;
- (id)registerhash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

