//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSString;

@interface UIScrollView (FAMJRefresh)
@property(copy, nonatomic) NSString *fa_headerRefreshingText;
@property(copy, nonatomic) NSString *fa_headerReleaseToRefreshText;
@property(copy, nonatomic) NSString *fa_headerPullToRefreshText;
@property(copy, nonatomic) NSString *fa_footerRefreshingText;
@property(copy, nonatomic) NSString *fa_footerReleaseToRefreshText;
@property(copy, nonatomic) NSString *fa_footerPullToRefreshText;
@property(readonly, nonatomic, getter=isFa_footerRefreshing) _Bool fa_footerRefreshing;
@property(nonatomic, getter=isFa_footerHidden) _Bool fa_footerHidden;
- (void)fa_footerEndRefreshing;
- (void)fa_footerBeginRefreshing;
- (void)fa_removeFooter;
- (void)fa_addFooterWithTarget:(id)arg1 action:(SEL)arg2;
- (void)fa_addFooterWithCallback:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isFa_headerRefreshing) _Bool fa_headerRefreshing;
@property(nonatomic, getter=isFa_headerHidden) _Bool fa_headerHidden;
- (void)fa_headerEndRefreshingWithoutAnimate:(_Bool)arg1;
- (void)fa_headerEndRefreshing;
- (void)fa_headerBeginRefreshing;
- (void)fa_removeHeader;
- (void)fa_addHeaderWithTarget:(id)arg1 action:(SEL)arg2 dateKey:(id)arg3;
- (void)fa_addHeaderWithTarget:(id)arg1 action:(SEL)arg2;
- (void)fa_addHeaderWithCallback:(CDUnknownBlockType)arg1 dateKey:(id)arg2;
- (void)fa_addHeaderWithCallback:(CDUnknownBlockType)arg1;
- (id)fa_Footer;
- (void)setFa_Footer:(id)arg1;
- (id)fa_Header;
- (void)setFa_Header:(id)arg1;
@end

