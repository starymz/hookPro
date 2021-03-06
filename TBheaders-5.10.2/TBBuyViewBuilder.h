//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBTradeLinkageProtocol-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, TBBuyQueryKey, TBTradeBuyEngine, UITableView, UITapGestureRecognizer, UIView, UIViewController;
@protocol TBBuyAliPayProtocol, TBBuyMiscInfoProtocol, TBBuyNavigationProtocol, TBBuyTableViewAdapterProtocol, TBBuyTrackProtocol, TBBuyViewInterceptProtocol;

@interface TBBuyViewBuilder : NSObject <TBTradeLinkageProtocol>
{
    UIViewController *_viewController;	// 8 = 0x8
    NSMutableDictionary *_queryParams;	// 16 = 0x10
    UIView *_bottomBar;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
    UIView *_floatTipsView;	// 40 = 0x28
    UITapGestureRecognizer *_tapTableViewRecognizer;	// 48 = 0x30
    NSArray *_eventHandlers;	// 56 = 0x38
    TBBuyQueryKey *_queryKey;	// 64 = 0x40
    TBTradeBuyEngine *_buyEngine;	// 72 = 0x48
    id <TBBuyTableViewAdapterProtocol> _tableViewAdapter;	// 80 = 0x50
    id <TBBuyAliPayProtocol> _alipayInvoker;	// 88 = 0x58
    id <TBBuyMiscInfoProtocol> _miscInfoProvider;	// 96 = 0x60
    id <TBBuyNavigationProtocol> _navigator;	// 104 = 0x68
    id <TBBuyViewInterceptProtocol> _viewInterceptor;	// 112 = 0x70
    id <TBBuyTrackProtocol> _tracker;	// 120 = 0x78
}

@property(retain, nonatomic) id <TBBuyTrackProtocol> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <TBBuyViewInterceptProtocol> viewInterceptor; // @synthesize viewInterceptor=_viewInterceptor;
@property(retain, nonatomic) id <TBBuyNavigationProtocol> navigator; // @synthesize navigator=_navigator;
@property(retain, nonatomic) id <TBBuyMiscInfoProtocol> miscInfoProvider; // @synthesize miscInfoProvider=_miscInfoProvider;
@property(retain, nonatomic) id <TBBuyAliPayProtocol> alipayInvoker; // @synthesize alipayInvoker=_alipayInvoker;
@property(retain, nonatomic) id <TBBuyTableViewAdapterProtocol> tableViewAdapter; // @synthesize tableViewAdapter=_tableViewAdapter;
@property(retain, nonatomic) TBTradeBuyEngine *buyEngine; // @synthesize buyEngine=_buyEngine;
@property(retain, nonatomic) TBBuyQueryKey *queryKey; // @synthesize queryKey=_queryKey;
@property(retain, nonatomic) NSArray *eventHandlers; // @synthesize eventHandlers=_eventHandlers;
@property(retain, nonatomic) UITapGestureRecognizer *tapTableViewRecognizer; // @synthesize tapTableViewRecognizer=_tapTableViewRecognizer;
@property(retain, nonatomic) UIView *floatTipsView; // @synthesize floatTipsView=_floatTipsView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) NSMutableDictionary *queryParams; // @synthesize queryParams=_queryParams;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)updateQueryParams:(id)arg1;
- (void)respondsToLinkage:(id)arg1 withAction:(unsigned long long)arg2;
- (void)clean;
- (void)handleTapTableView:(id)arg1;
- (void)backItemClicked:(id)arg1;
- (void)scrollToInvalidCell:(id)arg1;
- (void)confirmButtonClicked;
- (void)refreshFloatTipsView:(id)arg1;
- (void)refreshView;
- (void)reloadComponents:(id)arg1;
- (void)addNavigationBar;
- (void)loadDefaultImplementations;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithParams:(id)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

