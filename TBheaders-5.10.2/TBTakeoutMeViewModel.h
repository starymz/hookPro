//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTakeoutViewModel.h"

@class NSMutableArray, NSString, TBTakeoutMeModel;

@interface TBTakeoutMeViewModel : TBTakeoutViewModel
{
    NSString *_userName;	// 8 = 0x8
    NSString *_avatarImageUrl;	// 16 = 0x10
    NSMutableArray *_cellItemsArray;	// 24 = 0x18
    TBTakeoutMeModel *_model;	// 32 = 0x20
    NSString *_latitude;	// 40 = 0x28
    NSString *_longitude;	// 48 = 0x30
}

@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) TBTakeoutMeModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSMutableArray *cellItemsArray; // @synthesize cellItemsArray=_cellItemsArray;
@property(copy, nonatomic) NSString *avatarImageUrl; // @synthesize avatarImageUrl=_avatarImageUrl;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;
- (void)onCanceled;
- (void)onError:(id)arg1;
- (void)onSuccess;
- (void)parseResult:(id)arg1;
- (id)serviceApi;

@end

