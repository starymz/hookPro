//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSString;

@interface AliDetailSKUBannerModel : AliDetailComponentModel
{
    NSString *_title;	// 8 = 0x8
    NSString *_sizeChartTip;	// 16 = 0x10
}

+ (_Bool)childFilter:(id)arg1 layoutModel:(id)arg2;
@property(retain, nonatomic) NSString *sizeChartTip; // @synthesize sizeChartTip=_sizeChartTip;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)exposureUserTrackParams;
- (void)parseDataFromDetailModel:(id)arg1;

@end
