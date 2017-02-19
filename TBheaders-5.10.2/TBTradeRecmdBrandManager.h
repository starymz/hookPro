//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBTradeRecmdManager-Protocol.h"

@class NSMutableArray, NSString, TBTradeRecmdBrandModel, TBTradeRecmdBrandView, TBTradeRecmdContext, UIView;
@protocol TBTradeRecmdManager;

@interface TBTradeRecmdBrandManager : NSObject <TBTradeRecmdManager>
{
    TBTradeRecmdContext *_context;	// 8 = 0x8
    double _adviceChildItemHeight;	// 16 = 0x10
    NSMutableArray<TBTradeRecmdManager> *_childManagers;	// 24 = 0x18
    id <TBTradeRecmdManager> _parent;	// 32 = 0x20
    double _itemHeight;	// 40 = 0x28
    TBTradeRecmdBrandView *_view;	// 48 = 0x30
    UIView *_totalView;	// 56 = 0x38
    TBTradeRecmdBrandModel *_model;	// 64 = 0x40
    NSString *_specailTitle;	// 72 = 0x48
}

@property(retain, nonatomic) NSString *specailTitle; // @synthesize specailTitle=_specailTitle;
@property(retain, nonatomic) TBTradeRecmdContext *context; // @synthesize context=_context;
@property(retain, nonatomic) TBTradeRecmdBrandModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *totalView; // @synthesize totalView=_totalView;
@property(retain, nonatomic) TBTradeRecmdBrandView *view; // @synthesize view=_view;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(retain, nonatomic) NSMutableArray<TBTradeRecmdManager> *childManagers; // @synthesize childManagers=_childManagers;
@property(nonatomic) __weak id <TBTradeRecmdManager> parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)updateCell:(id)arg1;
- (void)updateView:(id)arg1;
- (id)brandViewWithModel:(id)arg1;
- (id)childManagerAtIndex:(long long)arg1;
- (id)cell;
- (void)freeView;
- (void)setTotalItemHeight:(double)arg1;
- (double)totalItemHeight;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithData:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
