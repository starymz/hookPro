//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UILongPressGestureRecognizer, UITableView;

@interface TBOfficalAccountChatView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hasMore;	// 8 = 0x8
    _Bool _isLoading;	// 9 = 0x9
    CDUnknownBlockType _selectHandler;	// 16 = 0x10
    CDUnknownBlockType _deleteHandler;	// 24 = 0x18
    CDUnknownBlockType _loadMoreHandler;	// 32 = 0x20
    UITableView *_tableView;	// 40 = 0x28
    NSMutableArray *_messages;	// 48 = 0x30
    UILongPressGestureRecognizer *_longPressRecognizer;	// 56 = 0x38
    double _lastScrollingSpeed;	// 64 = 0x40
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) double lastScrollingSpeed; // @synthesize lastScrollingSpeed=_lastScrollingSpeed;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType loadMoreHandler; // @synthesize loadMoreHandler=_loadMoreHandler;
@property(copy, nonatomic) CDUnknownBlockType deleteHandler; // @synthesize deleteHandler=_deleteHandler;
@property(copy, nonatomic) CDUnknownBlockType selectHandler; // @synthesize selectHandler=_selectHandler;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;
- (void)setDisplayData:(id)arg1;
- (void)finishedPullToRefresh;
- (id)indexPathForItem:(id)arg1;
- (void)longPreess:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateItem:(id)arg1;
- (void)deleteItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 messages:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
