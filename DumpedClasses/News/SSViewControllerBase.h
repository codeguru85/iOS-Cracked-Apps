//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface SSViewControllerBase : UIViewController
{
    long long _lastStyle;
    _Bool _viewBoundsChangedNotifyEnable;
    int modeChangeActionType;
    unsigned long long _statusBarStyle;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) unsigned long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) _Bool viewBoundsChangedNotifyEnable; // @synthesize viewBoundsChangedNotifyEnable=_viewBoundsChangedNotifyEnable;
@property(nonatomic) int modeChangeActionType; // @synthesize modeChangeActionType;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)themeChanged:(id)arg1;
- (void)reloadThemeUI;
- (void)_themeChanged:(id)arg1;
- (void)dismissSelf;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithBaseCondition:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

@end

