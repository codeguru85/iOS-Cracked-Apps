//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString, ZXByteArray;

@interface ZXResult : NSObject
{
    int _barcodeFormat;
    NSString *_text;
    ZXByteArray *_rawBytes;
    NSMutableArray *_resultPoints;
    NSMutableDictionary *_resultMetadata;
    long long _timestamp;
}

+ (id)resultWithText:(id)arg1 rawBytes:(id)arg2 resultPoints:(id)arg3 format:(int)arg4 timestamp:(long long)arg5;
+ (id)resultWithText:(id)arg1 rawBytes:(id)arg2 resultPoints:(id)arg3 format:(int)arg4;
@property(readonly, nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSMutableDictionary *resultMetadata; // @synthesize resultMetadata=_resultMetadata;
@property(readonly, nonatomic) int barcodeFormat; // @synthesize barcodeFormat=_barcodeFormat;
@property(retain, nonatomic) NSMutableArray *resultPoints; // @synthesize resultPoints=_resultPoints;
@property(readonly, nonatomic) ZXByteArray *rawBytes; // @synthesize rawBytes=_rawBytes;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;
- (void)addResultPoints:(id)arg1;
- (void)putAllMetadata:(id)arg1;
- (void)putMetadata:(int)arg1 value:(id)arg2;
- (id)initWithText:(id)arg1 rawBytes:(id)arg2 resultPoints:(id)arg3 format:(int)arg4 timestamp:(long long)arg5;
- (id)initWithText:(id)arg1 rawBytes:(id)arg2 resultPoints:(id)arg3 format:(int)arg4;

@end

