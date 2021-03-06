//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTMicroApplicationDelegate.h"
#import "HCInfosListViewControllerDelegate.h"

@class NSString, UIViewController;

@interface CardDetailAppDelegate : NSObject <HCInfosListViewControllerDelegate, DTMicroApplicationDelegate>
{
    UIViewController *_rootController;
}

@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
- (void).cxx_destruct;
- (id)getTopViewController;
- (void)relaunch:(id)arg1;
- (void)exitApp:(_Bool)arg1;
- (void)applicationWillTerminate:(id)arg1 animated:(_Bool)arg2;
- (void)convertinfoList:(id)arg1 srcContactInfos:(id)arg2 srcLoginIds:(id)arg3 dstInfos:(id)arg4 dstNotFoundList:(id)arg5;
- (id)createInfoListData:(id)arg1 infoListVC:(id)arg2 resultCallback:(CDUnknownBlockType)arg3;
- (void)createPersonListVC:(id)arg1;
- (void)createDetailVC:(id)arg1;
- (void)application:(id)arg1 didResumeWithOptions:(id)arg2;
- (void)application:(id)arg1 willResumeWithOptions:(id)arg2;
- (_Bool)applicationShouldStartMultapplication:(id)arg1 launchMode:(long long)arg2 sourceId:(id)arg3;
- (void)applicationWillPause:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (void)applicationDidCreate:(id)arg1;
- (id)rootControllerInApplication:(id)arg1;
- (void)infosListViewController:(id)arg1 didSelectRow:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

