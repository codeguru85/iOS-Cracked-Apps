//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGThemeLabel;

@interface MVLoadMoreCell : UITableViewCell
{
    KGThemeLabel *_tipLabel;
    int _state;
}

@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)setLoadingMessage;
- (void)setDefaultMessage;
- (id)initWithReuseIdentifier:(id)arg1;

@end

