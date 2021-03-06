//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UINavigationControllerDelegate.h"

@class NSString;

@interface MMPNaviVC : UINavigationController <UINavigationControllerDelegate>
{
    _Bool _isRealHidden;
    long long _statusBarStyle;
    double _originalViewY;
    double _originalViewHeight;
    double _originalStatusBarHeight;
}

@property(nonatomic) _Bool isRealHidden; // @synthesize isRealHidden=_isRealHidden;
@property(nonatomic) double originalStatusBarHeight; // @synthesize originalStatusBarHeight=_originalStatusBarHeight;
@property(nonatomic) double originalViewHeight; // @synthesize originalViewHeight=_originalViewHeight;
@property(nonatomic) double originalViewY; // @synthesize originalViewY=_originalViewY;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
- (void)layoutControllerSubViews:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)showInWindow;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (id)initWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

