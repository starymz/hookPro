//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IAPExt-Protocol.h"
#import "WCOutGetProductListExt-Protocol.h"

@class NSString;
@protocol WCOutChargeLogicDelegate;

__attribute__((visibility("hidden")))
@interface WCOutChargeLogic : NSObject <WCOutGetProductListExt, IAPExt>
{
    _Bool _isAutoVerify;
    unsigned int _autoVerifyMode;
    unsigned int _autoVerifyRet;
    unsigned int _autoVerifyErrcode;
    id <WCOutChargeLogicDelegate> _delegate;
    NSString *_autoVerifyBeginTs;
    NSString *_autoVerifyEndTs;
}

+ (id)logicWithAutoVerify;
@property(nonatomic) unsigned int autoVerifyErrcode; // @synthesize autoVerifyErrcode=_autoVerifyErrcode;
@property(nonatomic) unsigned int autoVerifyRet; // @synthesize autoVerifyRet=_autoVerifyRet;
@property(nonatomic) unsigned int autoVerifyMode; // @synthesize autoVerifyMode=_autoVerifyMode;
@property(retain, nonatomic) NSString *autoVerifyEndTs; // @synthesize autoVerifyEndTs=_autoVerifyEndTs;
@property(retain, nonatomic) NSString *autoVerifyBeginTs; // @synthesize autoVerifyBeginTs=_autoVerifyBeginTs;
@property(nonatomic) _Bool isAutoVerify; // @synthesize isAutoVerify=_isAutoVerify;
@property(nonatomic) __weak id <WCOutChargeLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onPurchaseCancelForProduct:(id)arg1;
- (void)onPurchaseFailForProduct:(id)arg1 Err:(id)arg2;
- (void)onPurchaseSuccessForProduct:(id)arg1 ErrCode:(unsigned int)arg2;
- (int)buyItem:(id)arg1 extInfo:(id)arg2;
- (void)onGetProduct:(id)arg1 invalidProductID:(id)arg2;
- (void)updateListFromAppleForSKProduct:(id)arg1;
- (void)didReceiveResponse:(_Bool)arg1 Respone:(id)arg2;
- (void)getproductList:(id)arg1 reqCurrency:(id)arg2 responeDelegate:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
