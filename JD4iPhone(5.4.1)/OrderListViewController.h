//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastItemsViewDelegate.h"
#import "JDBaseToastViewDelegate.h"
#import "MasterOrderTableViewCellDelegate.h"
#import "MessageAndSearchItemDelegate.h"
#import "NewRefreshTableHeaderViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDFooterLoadingView, JDStoreNetwork, MessageAndSearchItem, MyOrderModel, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NewRefreshTableHeaderView, OrderListNoOrderView, UIBarButtonItem, UITableView;

@interface OrderListViewController : JDViewController <UITableViewDataSource, UITableViewDelegate, NewRefreshTableHeaderViewDelegate, UIActionSheetDelegate, MasterOrderTableViewCellDelegate, JDBaseToastViewDelegate, MessageAndSearchItemDelegate, JDBaseToastItemsViewDelegate>
{
    UITableView *orderTableView;
    NewRefreshTableHeaderView *refreshHeaderView;
    JDFooterLoadingView *footerView;
    _Bool isLoading;
    _Bool isGetMore;
    NSMutableArray *orderListArray;
    JDStoreNetwork *_componentsNet;
    JDStoreNetwork *orderNetwork;
    long long currentPage;
    NSString *operaOrderId;
    JDStoreNetwork *confirmNetwork;
    NSString *functionName;
    int orderlistPageSize;
    _Bool isNeedRefreshOperaOrder;
    OrderListNoOrderView *noOrderView;
    NSString *keyParam;
    NSString *_orderType;
    _Bool _isMessageShow;
    _Bool isUrging;
    NSMutableDictionary *_buttonsExpoJdmtaFlag;
    int _originReminderFlag;
    _Bool isBuyAgain;
    NSDictionary *_dicForRemainder;
    MessageAndSearchItem *messageAndSearchItem;
    UIBarButtonItem *_barButtonItem;
    _Bool isSearchOrderCanShow;
    _Bool isMessageShow;
    int _popUrgeResult;
    NSString *jdmtaHeadStr;
    MyOrderModel *_operaOrderModel;
    MyOrderModel *_layoutingOrder;
    NSArray *_avilableWareList;
    NSString *_passStr;
    NSString *_remindTip;
}

@property(retain, nonatomic) NSString *remindTip; // @synthesize remindTip=_remindTip;
@property(copy, nonatomic) NSString *passStr; // @synthesize passStr=_passStr;
@property(retain, nonatomic) NSArray *avilableWareList; // @synthesize avilableWareList=_avilableWareList;
@property(retain, nonatomic) MyOrderModel *layoutingOrder; // @synthesize layoutingOrder=_layoutingOrder;
@property(retain, nonatomic) MyOrderModel *operaOrderModel; // @synthesize operaOrderModel=_operaOrderModel;
@property(copy, nonatomic) NSString *operaOrderId; // @synthesize operaOrderId;
- (void)buyAgainAddCartWithModel:(id)arg1;
- (void)goCart;
- (void)addCartResult:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)getRedDotCompleted:(id)arg1;
- (void)messageCenterTapped;
- (void)setupNavView:(_Bool)arg1 isMessageShow:(_Bool)arg2;
- (void)getConfigState;
- (void)didReceiveMemoryWarning;
- (void)gotoReminderView:(id)arg1 orderId:(id)arg2;
- (void)urgeOrderWithOrderModel:(id)arg1;
- (void)endEditing;
- (void)setEXPOJdmtaWithLabelId:(id)arg1;
- (void)orderListCellAction:(int)arg1 withOrderModel:(id)arg2;
- (void)refreshData;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)loadMore;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showToast:(id)arg1;
- (void)addNewOrderWithDeltedOrderID:(id)arg1;
- (void)removeOrderFromListWithOrderModel:(id)arg1;
- (void)removeOrderFromListWithOrderId:(id)arg1;
- (void)orderDeleted:(id)arg1;
- (void)refreshOrderListData;
- (void)refreshOrderList:(id)arg1;
- (void)requestOrderList;
- (void)reconnect;
- (void)refreshOperationOrderInfo:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)addControllerObserver;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

