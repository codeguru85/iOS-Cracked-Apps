//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VRUINode.h"

@interface VRUIButton : VRUINode
{
}

- (void)dealloc;
- (void)startLeaveAnimation;
- (void)startEnterAnimation:(float)arg1;
- (void)doAnimationWithGazeInput:(_Bool)arg1;
- (void)drawInContext:(struct VRContext)arg1;
- (void)setupContext;
- (void)buildProgram;
- (void)createRectWithOffsetX:(float)arg1 offsetY:(float)arg2 width:(float)arg3 height:(float)arg4 inParent:(id)arg5;
- (id)initWithID:(long long)arg1 normal:(id)arg2 focus:(id)arg3 disable:(id)arg4 offsetX:(float)arg5 offsetY:(float)arg6 width:(float)arg7 height:(float)arg8 inParent:(id)arg9;
- (id)initWithID:(long long)arg1 normal:(id)arg2 focus:(id)arg3 disable:(id)arg4 vecX:(float)arg5 vecY:(float)arg6 vecZ:(float)arg7 radius:(float)arg8 width:(float)arg9 height:(float)arg10;

@end

