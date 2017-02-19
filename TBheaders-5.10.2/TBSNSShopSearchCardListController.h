//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSCardListViewController.h"

#import "TBSNSSearchACDSLoaderDelegate-Protocol.h"

@class NSString, TBSNSListNetService, TBSNSSearchACDSLoader, TBSNSSearchLoadingView;

@interface TBSNSShopSearchCardListController : TBSNSCardListViewController <TBSNSSearchACDSLoaderDelegate>
{
    long long remainServiceCount;	// 8 = 0x8
    NSString *_keyword;	// 16 = 0x10
    TBSNSListNetService *_shopService;	// 24 = 0x18
    TBSNSListNetService *_feedService;	// 32 = 0x20
    TBSNSListNetService *_goodService;	// 40 = 0x28
    TBSNSSearchACDSLoader *_ACDSLoader;	// 48 = 0x30
    TBSNSSearchLoadingView *_loadingView;	// 56 = 0x38
}

@property(retain, nonatomic) TBSNSSearchLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TBSNSSearchACDSLoader *ACDSLoader; // @synthesize ACDSLoader=_ACDSLoader;
@property(retain, nonatomic) TBSNSListNetService *goodService; // @synthesize goodService=_goodService;
@property(retain, nonatomic) TBSNSListNetService *feedService; // @synthesize feedService=_feedService;
@property(retain, nonatomic) TBSNSListNetService *shopService; // @synthesize shopService=_shopService;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (void)searchLocal;
- (void)searchACDSLoaderFinished:(id)arg1 error:(id)arg2;
- (void)serviceDidFinishLoad:(id)arg1;
- (_Bool)checkEmpty;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)getNetData;
- (void)reloadData;
- (void)refreshNetData;
- (void)reloadNetData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
