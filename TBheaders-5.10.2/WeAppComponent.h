//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WeAppDataValueObserverProtocal-Protocol.h"

@class NSMutableArray, NSString, UIView, WeAppActionManager, WeAppComponentItem, WeAppConfigContext, WeAppDataAgent, WeAppDataManager, WeAppEventManager, WeAppValidateManager, WeAppViewManager;

@interface WeAppComponent : NSObject <WeAppDataValueObserverProtocal>
{
    _Bool _optimizePerformenceForList;	// 8 = 0x8
    _Bool _forceRefresh;	// 9 = 0x9
    _Bool _onLoadNotFirstIn;	// 10 = 0xa
    _Bool _isLazyLoadConstructView;	// 11 = 0xb
    _Bool _isReleasedConstructView;	// 12 = 0xc
    _Bool _isNeedReOnLoad;	// 13 = 0xd
    _Bool _didChangeStyleBinding;	// 14 = 0xe
    _Bool _didUpdateForeachWithDataChange;	// 15 = 0xf
    _Bool _scrollEventDidAddObserver;	// 16 = 0x10
    _Bool _scrollEventObserverWorking;	// 17 = 0x11
    WeAppConfigContext *_configContext;	// 24 = 0x18
    WeAppComponentItem *_componentItem;	// 32 = 0x20
    WeAppValidateManager *_validateManager;	// 40 = 0x28
    WeAppDataManager *_dataManager;	// 48 = 0x30
    WeAppActionManager *_actionManager;	// 56 = 0x38
    WeAppViewManager *_viewManager;	// 64 = 0x40
    WeAppDataAgent *_dataAgent;	// 72 = 0x48
    WeAppEventManager *_eventManager;	// 80 = 0x50
    id _dataValue;	// 88 = 0x58
    id _dataExpressionValue;	// 96 = 0x60
    WeAppComponent *_parent;	// 104 = 0x68
    NSMutableArray *_subWeAppComponents;	// 112 = 0x70
    UIView *_view;	// 120 = 0x78
    long long _deep;	// 128 = 0x80
    struct CGPoint _scrollViewOffset;	// 136 = 0x88
    struct CGRect _frame;	// 152 = 0x98
}

@property(nonatomic) _Bool scrollEventObserverWorking; // @synthesize scrollEventObserverWorking=_scrollEventObserverWorking;
@property(nonatomic) _Bool scrollEventDidAddObserver; // @synthesize scrollEventDidAddObserver=_scrollEventDidAddObserver;
@property(nonatomic) _Bool didUpdateForeachWithDataChange; // @synthesize didUpdateForeachWithDataChange=_didUpdateForeachWithDataChange;
@property(nonatomic) _Bool didChangeStyleBinding; // @synthesize didChangeStyleBinding=_didChangeStyleBinding;
@property(nonatomic) long long deep; // @synthesize deep=_deep;
@property(nonatomic) _Bool isNeedReOnLoad; // @synthesize isNeedReOnLoad=_isNeedReOnLoad;
@property(nonatomic) _Bool isReleasedConstructView; // @synthesize isReleasedConstructView=_isReleasedConstructView;
@property(nonatomic) _Bool isLazyLoadConstructView; // @synthesize isLazyLoadConstructView=_isLazyLoadConstructView;
@property(nonatomic) _Bool onLoadNotFirstIn; // @synthesize onLoadNotFirstIn=_onLoadNotFirstIn;
@property(nonatomic) _Bool forceRefresh; // @synthesize forceRefresh=_forceRefresh;
@property(nonatomic) _Bool optimizePerformenceForList; // @synthesize optimizePerformenceForList=_optimizePerformenceForList;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSMutableArray *subWeAppComponents; // @synthesize subWeAppComponents=_subWeAppComponents;
@property(nonatomic) __weak WeAppComponent *parent; // @synthesize parent=_parent;
@property(nonatomic) struct CGPoint scrollViewOffset; // @synthesize scrollViewOffset=_scrollViewOffset;
@property(retain, nonatomic) id dataExpressionValue; // @synthesize dataExpressionValue=_dataExpressionValue;
@property(retain, nonatomic) id dataValue; // @synthesize dataValue=_dataValue;
@property(retain, nonatomic) WeAppEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property(nonatomic) __weak WeAppDataAgent *dataAgent; // @synthesize dataAgent=_dataAgent;
@property(nonatomic) __weak WeAppViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(nonatomic) __weak WeAppActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(nonatomic) __weak WeAppDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) WeAppValidateManager *validateManager; // @synthesize validateManager=_validateManager;
@property(retain, nonatomic) WeAppComponentItem *componentItem; // @synthesize componentItem=_componentItem;
@property(nonatomic) __weak WeAppConfigContext *configContext; // @synthesize configContext=_configContext;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeChangeValueForApiRequestPath:(id)arg1 WithDataManager:(id)arg2 changeData:(id)arg3 context:(id)arg4;
- (void)observeValueForApiRequestPath:(id)arg1 WithDataManager:(id)arg2 changeData:(id)arg3 context:(id)arg4;
- (void)requestDidCancel;
- (void)requestDidFail;
- (void)requestDidLoad;
- (void)requestDidStart;
- (void)apiRequestDidLoadEmpty:(id)arg1;
- (void)apiRequestDidLoad;
- (void)apiRequestDidCancel;
- (void)apiRequestDidFail;
- (void)apiRequestDidStart;
- (id)getRootViewManager;
- (id)getVisialLazyComponent;
- (void)updateForeach:(id)arg1;
- (void)removeForeachSubviews:(id)arg1;
- (_Bool)doValidateWithValue:(id)arg1 withModel:(unsigned long long)arg2;
- (_Bool)needValidate;
- (_Bool)doValidate:(id)arg1 withModel:(unsigned long long)arg2;
- (_Bool)doValidateWithModel:(unsigned long long)arg1;
- (void)createForeachComponent;
- (void)reCreateSubViews;
- (void)layout;
- (void)refreshView;
- (void)refreshComponentWithRefreshDataModel;
- (void)forceRefreshImagesAndCssForListPerformence;
- (void)refreshImageComponentInList;
- (void)updateForeachWithDataChange;
- (void)scrollViewDidScrollNotification:(id)arg1;
- (void)refreshData;
- (void)saveFormDataToPoolWithValue:(id)arg1 withComponentId:(id)arg2;
- (void)onLoadEnd;
- (void)refreshDataCssAndCondition;
- (void)refreshComponentCellModel;
- (struct CGSize)getContentSize;
- (int)getDefaultSize:(int)arg1 byMeasureSpec:(int)arg2;
- (void)setMeasuredDimension:(int)arg1 withHeight:(int)arg2 withSpecW:(int)arg3 withSpecH:(int)arg4;
- (void)onMeasureWithSpecW:(int)arg1 withSpecH:(int)arg2;
- (void)measureWithSpecW:(int)arg1 withSpecH:(int)arg2;
- (_Bool)needOnMeasure;
- (_Bool)needUpdateWithRefreshDataModel;
- (_Bool)needUpdateFrame;
- (void)updateFrame;
- (void)changeCss:(id)arg1;
- (void)scrollRectToOffsetWithAnimated:(_Bool)arg1;
- (void)setupDataValue;
- (void)setupDataValueAndConditon;
- (_Bool)needSetCss;
- (void)setCssShadowForContainer:(id)arg1;
- (void)setBorder:(id)arg1;
- (void)setCssVisible:(id)arg1;
- (void)setCssBackgroundColor:(id)arg1;
- (void)setCss;
- (void)setupEventWithArray:(id)arg1;
- (void)setupEvent;
- (void)updateEvent;
- (void)setupPagingLoad;
- (void)setupForeach;
- (void)setupService;
- (id)createView;
- (void)recycleReleaseConstrutView;
- (void)releaseConstrutView;
- (_Bool)needLazyLoadConstructView;
- (void)lazyConstructView;
- (void)constructView;
- (void)setupComponentItem:(id)arg1;
- (id)init;
- (id)initWithComponentItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

