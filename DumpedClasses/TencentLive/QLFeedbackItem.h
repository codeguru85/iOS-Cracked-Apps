//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QLFeedbackReplaceItem;

@interface QLFeedbackItem : NSObject
{
    long long _actionType;
    NSString *_feedbackKey;
    NSString *_actioSource;
    long long _appLocalOperationFromFlag;
    QLFeedbackReplaceItem *_replaceItem;
}

@property(retain, nonatomic) QLFeedbackReplaceItem *replaceItem; // @synthesize replaceItem=_replaceItem;
@property(nonatomic) long long appLocalOperationFromFlag; // @synthesize appLocalOperationFromFlag=_appLocalOperationFromFlag;
@property(copy, nonatomic) NSString *actioSource; // @synthesize actioSource=_actioSource;
@property(copy, nonatomic) NSString *feedbackKey; // @synthesize feedbackKey=_feedbackKey;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (id)feedbackInfo;
- (id)initActionType:(long long)arg1 datakey:(id)arg2 actionSource:(id)arg3 localActionSource:(long long)arg4;
- (id)initActionType:(long long)arg1 datakey:(id)arg2 actionSource:(id)arg3 localActionSource:(long long)arg4 replaceItem:(id)arg5;

@end

