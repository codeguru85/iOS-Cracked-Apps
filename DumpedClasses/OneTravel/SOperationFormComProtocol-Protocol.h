//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBaseComProtocol.h"

@class SOperationFormCellModel, SOperationFormCom;

@protocol SOperationFormComProtocol <SBaseComProtocol>
- (SOperationFormCellModel *)operationFormCom:(SOperationFormCom *)arg1 modelForCellType:(long long)arg2;

@optional
- (double)operationFormCom:(SOperationFormCom *)arg1 guideOffsetForFrame:(struct CGRect)arg2;
- (_Bool)canShowGuideInOperationFormCom:(SOperationFormCom *)arg1;
- (void)operationFormCom:(SOperationFormCom *)arg1 willTransferToHeight:(double)arg2 duration:(double)arg3 state:(long long)arg4;
- (void)sendOrderWithOperationFormCom:(SOperationFormCom *)arg1;
@end

