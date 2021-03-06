//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString;

@interface OrderListSearchHistoryView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_historysArr;
    id <OrderListSearchHistoryViewDelegate> _delegateForOrderListSearchHistoryView;
}

@property(nonatomic) __weak id <OrderListSearchHistoryViewDelegate> delegateForOrderListSearchHistoryView; // @synthesize delegateForOrderListSearchHistoryView=_delegateForOrderListSearchHistoryView;
@property(retain, nonatomic) NSMutableArray *historysArr; // @synthesize historysArr=_historysArr;
- (void).cxx_destruct;
- (id)configHeaderView;
- (id)configFooterview;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)addNewFloderIfNeedWithParentFloderPath:(id)arg1 childFloderName:(id)arg2;
- (id)getFilePath;
- (void)deleteHistory;
- (id)readHistory;
- (void)saveHistoryWithArray:(id)arg1;
- (void)clearHistoryAction;
- (void)reloadDataForHistoryView;
- (void)saveKeywordToHistoryWithKeyword:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

