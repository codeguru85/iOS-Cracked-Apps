//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightInlandInvoiceTypeInformationModel : CTBusinessBean
{
    int _invoiceType;
    NSString *_invoiceName;
}

@property(copy, nonatomic) NSString *invoiceName; // @synthesize invoiceName=_invoiceName;
@property(nonatomic) int invoiceType; // @synthesize invoiceType=_invoiceType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
