//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUINode.h"

#import "VUIAnimationListener.h"

@class NSMutableArray, NSString, TBVRDetailAnimationHelper, TBVRDetailUIHelper, TBVRImage360NodeTextureProvider, TBVRItemDetailScene, TBVRUIManager, VUIAnimation, VUIImage360Node, VUIScaleAnimation, VUITranslateAnimation;

@interface TBVRDetailNode : VUINode <VUIAnimationListener>
{
    VUIImage360Node *_image360Node;
    VUINode *_rippleNode;
    VUINode *_imageLeftButtonNode;
    VUINode *_imageRightButtonNode;
    _Bool _split;
    TBVRUIManager *_manager;
    id <TBVRDetailNodeDelegate> _delegate;
    TBVRItemDetailScene *_detailScene;
    TBVRImage360NodeTextureProvider *_provider;
    VUITranslateAnimation *_translationAnimation;
    VUIScaleAnimation *_scaleAnimation;
    VUIAnimation *_expLastAnimation;
    VUIAnimation *_shrLastAnimation;
    CDUnknownBlockType _expCompletion;
    CDUnknownBlockType _shrCompletion;
    NSMutableArray *_enterAnimations;
    NSMutableArray *_leaveAnimations;
    NSMutableArray *_itemAnimations;
    NSMutableArray *_imageAppendantAnimations;
    TBVRDetailUIHelper *_helper;
    TBVRDetailAnimationHelper *_animationHelper;
}

@property(retain, nonatomic) TBVRDetailAnimationHelper *animationHelper; // @synthesize animationHelper=_animationHelper;
@property(retain, nonatomic) TBVRDetailUIHelper *helper; // @synthesize helper=_helper;
@property(retain, nonatomic) NSMutableArray *imageAppendantAnimations; // @synthesize imageAppendantAnimations=_imageAppendantAnimations;
@property(retain, nonatomic) NSMutableArray *itemAnimations; // @synthesize itemAnimations=_itemAnimations;
@property(retain, nonatomic) NSMutableArray *leaveAnimations; // @synthesize leaveAnimations=_leaveAnimations;
@property(retain, nonatomic) NSMutableArray *enterAnimations; // @synthesize enterAnimations=_enterAnimations;
@property(copy, nonatomic) CDUnknownBlockType shrCompletion; // @synthesize shrCompletion=_shrCompletion;
@property(copy, nonatomic) CDUnknownBlockType expCompletion; // @synthesize expCompletion=_expCompletion;
@property(nonatomic) __weak VUIAnimation *shrLastAnimation; // @synthesize shrLastAnimation=_shrLastAnimation;
@property(nonatomic) __weak VUIAnimation *expLastAnimation; // @synthesize expLastAnimation=_expLastAnimation;
@property(retain, nonatomic) VUIScaleAnimation *scaleAnimation; // @synthesize scaleAnimation=_scaleAnimation;
@property(retain, nonatomic) VUITranslateAnimation *translationAnimation; // @synthesize translationAnimation=_translationAnimation;
@property(nonatomic) __weak TBVRImage360NodeTextureProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) __weak TBVRItemDetailScene *detailScene; // @synthesize detailScene=_detailScene;
@property(nonatomic) __weak id <TBVRDetailNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool split; // @synthesize split=_split;
@property(nonatomic) __weak TBVRUIManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)onCancel:(id)arg1;
- (void)onEnd:(id)arg1;
- (void)onRepeat:(id)arg1 isReverse:(_Bool)arg2;
- (void)onStart:(id)arg1;
- (void)playCartAnimation;
- (void)playLeaveAnimation:(CDUnknownBlockType)arg1;
- (void)playEnterAnimation:(CDUnknownBlockType)arg1;
- (void)addItemNodesWithModel:(id)arg1;
- (void)enableOperation:(_Bool)arg1;
- (void)dealloc;
- (id)initWithSplit:(_Bool)arg1 manager:(id)arg2;
- (void)onCloseButton;
- (void)onCartButton;
- (void)onBuyButton;
- (void)imageStop;
- (void)imageStopRight;
- (void)imageTurnRight;
- (void)imageStopLeft;
- (void)imageRurnLeft;
- (id)cartButtonNode;
- (id)buyButtonNode;
- (id)imageRightButtonNode;
- (id)imageLeftButtonNode;
- (void)triggerRotateGuiding;
- (id)imageNode;
- (id)rippleNode;
- (id)rightNode;
- (id)leftNode;
- (id)closeButtonNode;
- (id)bgNode;
- (void)showImageAppendantNodes;
- (void)addImageAppendantNodes;
- (void)addItemNodes;
- (void)addBackgroundNodes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

