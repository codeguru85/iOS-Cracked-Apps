//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KTVSwipeCardViewCellModel : NSObject
{
    double _alpha;
    struct CGPoint _center;
    struct CGSize _scale;
}

+ (id)modelWithCenter:(struct CGPoint)arg1 scale:(struct CGSize)arg2 alpha:(double)arg3;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) struct CGSize scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (void)configCenter:(struct CGPoint)arg1 scale:(struct CGSize)arg2 alpha:(double)arg3;
- (id)initWithCenter:(struct CGPoint)arg1 scale:(struct CGSize)arg2 alpha:(double)arg3;

@end

