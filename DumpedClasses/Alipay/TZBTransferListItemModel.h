//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TZBTransferListItemModel : NSObject
{
    _Bool _hasDetail;
    NSString *_amoutString;
    NSString *_memoString;
    NSString *_dateString;
    NSString *_timeStamp;
    NSString *_orderNo;
    NSString *_detailTitle;
}

@property(retain, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property(nonatomic) _Bool hasDetail; // @synthesize hasDetail=_hasDetail;
@property(retain, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
@property(retain, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(retain, nonatomic) NSString *memoString; // @synthesize memoString=_memoString;
@property(retain, nonatomic) NSString *amoutString; // @synthesize amoutString=_amoutString;
- (void).cxx_destruct;

@end

