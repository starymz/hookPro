//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MMPWebViewDelegate-Protocol.h"

@class ImmPayEventHandler, MMPWebVC, NSString;

@interface ImmPayBizLocEvent : NSObject <MMPWebViewDelegate>
{
    ImmPayEventHandler *_eventHandler;	// 8 = 0x8
    MMPWebVC *_webviewVC;	// 16 = 0x10
}

@property(retain, nonatomic) MMPWebVC *webviewVC; // @synthesize webviewVC=_webviewVC;
@property(nonatomic) __weak ImmPayEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (id)getDictFromEventParam:(id)arg1;
- (id)getArrayFromEventParam:(id)arg1;
- (void)closeFinger:(id)arg1;
- (void)processFingerprintAuthStatusWithResult:(id)arg1;
- (void)onDevPayQueryOrClose:(id)arg1;
- (id)devPassWithAct:(id)arg1 res:(long long)arg2 key:(id)arg3 data:(id)arg4;
- (void)devPassErr:(long long)arg1 func:(id)arg2 msg:(id)arg3 act:(id)arg4;
- (void)onFingerRes:(long long)arg1 key:(id)arg2 data:(id)arg3 action:(id)arg4 param:(id)arg5;
- (void)scanFingerWithTitle:(id)arg1 fingerValue:(id)arg2 fingerKey:(id)arg3 action:(id)arg4 andParam:(id)arg5;
- (void)onDevPay:(id)arg1 param:(id)arg2;
- (void)webViewAction:(id)arg1;
- (void)webViewClose:(id)arg1;
- (void)onDestroy:(id)arg1;
- (void)onShowTpl:(id)arg1;
- (void)onFlyBirdViewBuilder:(id)arg1;
- (void)onFlyBirdCallBack:(id)arg1;
- (void)onReturnData:(id)arg1;
- (void)onOpenWeb:(id)arg1;
- (void)onOpenUrl:(id)arg1;
- (void)onTel:(id)arg1;
- (void)onAlipay:(id)arg1;
- (void)onWappay:(id)arg1;
- (void)onExit;
- (void)onBack;
- (void)onSetResult:(id)arg1;
- (void)onCode:(id)arg1 Err:(id)arg2;
- (void)onEvent:(id)arg1 param:(id)arg2;
- (void)close;
- (id)initWithEventHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

