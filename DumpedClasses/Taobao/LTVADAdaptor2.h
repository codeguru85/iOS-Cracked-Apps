//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LTVADAdaptor2 : NSObject
{
    struct ps_decoder_s *ps;
    struct cmd_ln_s *config;
    int rv;
    _Bool inited;
    NSString *_compressedModel;
    NSString *_modelFoler;
}

@property(retain, nonatomic) NSString *modelFoler; // @synthesize modelFoler=_modelFoler;
@property(retain, nonatomic) NSString *compressedModel; // @synthesize compressedModel=_compressedModel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)recognize:(id)arg1;
- (id)end;
- (void)update:(id)arg1;
- (void)start;
- (id)testFile:(int)arg1;
- (void)psDestroy;
- (void)psInit;
- (id)initWithModelFile:(id)arg1 workFolder:(id)arg2;

@end

