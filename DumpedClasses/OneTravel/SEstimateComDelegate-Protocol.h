//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBaseComProtocol.h"

@class SEstimateCom, SGuideRespModel;

@protocol SEstimateComDelegate <SBaseComProtocol>
- (void)estimateComDidQuitConfirmOrderPage:(SEstimateCom *)arg1;
- (void)estimateComShowGuideView:(SEstimateCom *)arg1 guideRespModel:(SGuideRespModel *)arg2 operateBlock:(void (^)(_Bool, SGuideRespModel *))arg3;
- (void)estimateCom:(SEstimateCom *)arg1 didClickCarpool:(_Bool)arg2;
- (void)estimateCom:(SEstimateCom *)arg1 didFinished:(_Bool)arg2;
- (void)estimateComWillBeginEstimate:(SEstimateCom *)arg1;
@end

