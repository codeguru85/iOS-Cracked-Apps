//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCellComponent.h"

#import "FMCardParserProtocol.h"

@class FMFishpondQuestionCardCellDO, NSString;

@interface FMFishpondQuestionCardCellComponent : FMCellComponent <FMCardParserProtocol>
{
    FMFishpondQuestionCardCellDO *_cellDO;
}

@property(retain, nonatomic) FMFishpondQuestionCardCellDO *cellDO; // @synthesize cellDO=_cellDO;
- (void).cxx_destruct;
- (void)prepareForShow;
- (_Bool)parseCardData:(id)arg1 withType:(id)arg2;
- (Class)viewClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

