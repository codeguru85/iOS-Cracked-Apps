//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CTIdentityPickerViewDelegate.h"

@class CTPayWarningCellManager, NSDate, NSString;

@interface CTPCardInputCheckManager : NSObject <CTIdentityPickerViewDelegate>
{
    _Bool _isGuaranteed;
    _Bool _supportPreAuth;
    _Bool _isIdentityPickerViewDelete;
    id <CTPCardInputOwer> _inputOwer;
    NSDate *_lastGuranteeDay;
    CTPayWarningCellManager *_warningManager;
}

@property(nonatomic) _Bool isIdentityPickerViewDelete; // @synthesize isIdentityPickerViewDelete=_isIdentityPickerViewDelete;
@property(retain, nonatomic) CTPayWarningCellManager *warningManager; // @synthesize warningManager=_warningManager;
@property(retain, nonatomic) NSDate *lastGuranteeDay; // @synthesize lastGuranteeDay=_lastGuranteeDay;
@property(nonatomic) _Bool supportPreAuth; // @synthesize supportPreAuth=_supportPreAuth;
@property(nonatomic) _Bool isGuaranteed; // @synthesize isGuaranteed=_isGuaranteed;
@property(nonatomic) __weak id <CTPCardInputOwer> inputOwer; // @synthesize inputOwer=_inputOwer;
- (void).cxx_destruct;
- (void)cellIdCardFillinChangeValue:(id)arg1;
- (void)identityPickerView:(id)arg1 pickValue:(id)arg2 type:(int)arg3;
- (id)getIdCardToSend;
- (id)getExpireToSend;
- (_Bool)isSMSCodeNeedAfreshGet:(id)arg1;
- (void)checkValidPeriodOfCard:(id *)arg1;
- (id)checkCreditCardInfo:(_Bool)arg1 cardModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
