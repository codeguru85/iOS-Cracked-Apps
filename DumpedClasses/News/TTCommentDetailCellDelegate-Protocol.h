//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TTCommentDetailReplyCommentModel, UITableViewCell;

@protocol TTCommentDetailCellDelegate <NSObject>

@optional
- (void)tt_commentCell:(UITableViewCell *)arg1 quotedNameOnClickedWithCommentModel:(TTCommentDetailReplyCommentModel *)arg2;
- (void)tt_commentCell:(UITableViewCell *)arg1 nameViewonClickedWithCommentModel:(TTCommentDetailReplyCommentModel *)arg2;
- (void)tt_commentCell:(UITableViewCell *)arg1 digCommentWithCommentModel:(TTCommentDetailReplyCommentModel *)arg2;
- (void)tt_commentCell:(UITableViewCell *)arg1 deleteCommentWithCommentModel:(TTCommentDetailReplyCommentModel *)arg2;
- (void)tt_commentCell:(UITableViewCell *)arg1 avatarTappedWithCommentModel:(TTCommentDetailReplyCommentModel *)arg2;
- (void)tt_commentCell:(UITableViewCell *)arg1 replyButtonClickedWithModel:(TTCommentDetailReplyCommentModel *)arg2;
@end

