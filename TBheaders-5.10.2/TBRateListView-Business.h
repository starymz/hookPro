//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRateListView.h"

#import "TBRateBaseCellDelegate-Protocol.h"

@class NSString;

@interface TBRateListView (Business) <TBRateBaseCellDelegate>
- (void)editRate;
- (void)likeRate:(id)arg1;
- (void)commentRate:(id)arg1;
- (void)appendRate:(id)arg1;
- (void)anonyRate:(id)arg1;
- (void)deleteRate:(id)arg1;
- (void)modifyRate:(id)arg1;
- (void)picsClicked:(id)arg1 cell:(id)arg2 imageButton:(id)arg3;
- (void)openItemDetail:(id)arg1;
- (void)configLoadMoreShown;
- (void)configLoadMoreFinished;
- (void)configLoadMore;
- (void)requestLikeSuccess:(id)arg1;
- (void)requestAnonySuccess:(id)arg1;
- (void)requestDeleteSuccess:(id)arg1;
- (void)addPartialRenewalNotification;
- (void)partialRenewal:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

