//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView;

@interface MDChatSessionTableHelper : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_rowCountBeforeEditing;
    UITableView *_table;
    id <MDChatSessionTableHelperDelegate> _delegate;
}

+ (id)bindingForTable:(id)arg1 templateClassNameList:(id)arg2 delegate:(id)arg3;
@property(nonatomic) __weak id <MDChatSessionTableHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *table; // @synthesize table=_table;
@property(retain, nonatomic) NSMutableArray *rowCountBeforeEditing; // @synthesize rowCountBeforeEditing=_rowCountBeforeEditing;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)dequeueCellAndBindInTable:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetRowCountBeforeEditing;
- (void)updateRowCountBeforeEditingValue:(id)arg1 at:(long long)arg2;
- (id)cellAtIndexPath:(id)arg1;
- (void)reloadData;
- (id)datas;
- (id)initWithTable:(id)arg1 templateClassNameList:(id)arg2 delegate:(id)arg3;
- (id)initWithTable:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

