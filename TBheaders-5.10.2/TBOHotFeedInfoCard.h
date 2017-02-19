//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseCard.h"

#import "ITBOCellHeight-Protocol.h"

@class NSMutableArray, NSString;
@protocol TBOHotFeed;

@interface TBOHotFeedInfoCard : TBOBaseCard <ITBOCellHeight>
{
    double _hotFeedTitleHeight;	// 32 = 0x20
    double _hotFeedTitleWidth;	// 40 = 0x28
    double _hotFeedInfoCardCellHeight;	// 48 = 0x30
    NSString *_title;	// 56 = 0x38
    NSString *_subTitle;	// 64 = 0x40
    NSMutableArray<TBOHotFeed> *_hotFeedList;	// 72 = 0x48
    long long _topNum;	// 80 = 0x50
}

@property(nonatomic) long long topNum; // @synthesize topNum=_topNum;
@property(retain, nonatomic) NSMutableArray<TBOHotFeed> *hotFeedList; // @synthesize hotFeedList=_hotFeedList;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (double)getHotFeedTitleWidth;
- (double)getHotFeedTitleHeight;
- (double)cellHeightForModel:(id)arg1 owner:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
