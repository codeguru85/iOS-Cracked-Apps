//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "OHAttributedLabelDelegate.h"

@class NMAutoFMFreqSettingFailView, NMAutoFMFreqSettingView, NSString, OHAttributedLabel, UIButton;

@interface NMAutoFMFreqSettingViewController : UIViewController <OHAttributedLabelDelegate>
{
    NMAutoFMFreqSettingView *_fmFreqSettingView;
    NMAutoFMFreqSettingFailView *_connectFailView;
    OHAttributedLabel *_helpLabel;
    UIButton *_helpButton;
    UIButton *_stereoSettingButton;
    _Bool _initialConnect;
    long long _currentViewType;
}

@property(nonatomic) long long currentViewType; // @synthesize currentViewType=_currentViewType;
- (void).cxx_destruct;
- (void)dealloc;
- (void)receiveAutoFMSetting:(id)arg1;
- (void)receiveConnectState:(id)arg1;
- (void)retryConnect:(id)arg1;
- (void)updateFMFreq:(long long)arg1;
- (void)prepareUpdateFMFreq:(id)arg1;
- (void)gotoStereoSetting;
- (void)gotoHelp;
- (_Bool)attributedLabel:(id)arg1 shouldFollowLink:(id)arg2;
- (void)backAction:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)_refreshViewForSkin:(id)arg1;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
