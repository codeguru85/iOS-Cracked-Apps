//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TightTableViewViewController.h"

@class NSArray;

@interface QQOlympicSettingViewController : TightTableViewViewController
{
    NSArray *_sectionDescriptions;
}

@property(retain, nonatomic) NSArray *sectionDescriptions; // @synthesize sectionDescriptions=_sectionDescriptions;
- (void).cxx_destruct;
- (void)receivedDidGetTorchDisableNotification:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)generateCellModels;
- (void)registerCellClass;
- (void)regenerateCellModels;
- (void)regenerateSectionDes;
- (_Bool)torchSwitchEnabled;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

