//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface FDViewAgent : NSObject
{
    id <FDControllerDelegate> _fdViewControlDelegate;
    id <FDViewDelegate> _fdViewDelegate;
    UIView *_sceneView;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIView *sceneView; // @synthesize sceneView=_sceneView;
@property(nonatomic) __weak id <FDViewDelegate> fdViewDelegate; // @synthesize fdViewDelegate=_fdViewDelegate;
@property(nonatomic) __weak id <FDControllerDelegate> fdViewControlDelegate; // @synthesize fdViewControlDelegate=_fdViewControlDelegate;
- (void).cxx_destruct;
- (void)onVolumeNotify:(float)arg1;
- (void)showEnvironmentView:(id)arg1;
- (void)playPhaseSound;
- (void)showPhaseView;
- (void)onRestartDetect;
- (void)onApplicationDidBecomeActive;
- (void)onApplicationWillResignActive;
- (void)onLivenessSuccess;
- (void)onGoBack;
- (id)createSceneView;

@end

