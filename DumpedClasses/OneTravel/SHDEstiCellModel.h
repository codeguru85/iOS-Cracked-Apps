//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEOperationCellModel.h"

@class NSArray, NSString;

@interface SHDEstiCellModel : ONEOperationCellModel
{
    _Bool _isLoading;
    NSArray *_priceModels;
    NSString *_failDesc;
    double _cellHeight;
}

@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(copy, nonatomic) NSString *failDesc; // @synthesize failDesc=_failDesc;
@property(copy, nonatomic) NSArray *priceModels; // @synthesize priceModels=_priceModels;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (double)heightForCell;

@end

