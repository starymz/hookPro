//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class AliDetailPriceEntity, NSString;

@interface AliDetailPriceQiangGouModel : AliDetailComponentModel
{
    AliDetailPriceEntity *_price;	// 8 = 0x8
    AliDetailPriceEntity *_extraPrice;	// 16 = 0x10
    NSString *_bizCountTip;	// 24 = 0x18
    NSString *_timePrefix;	// 32 = 0x20
    NSString *_progressText;	// 40 = 0x28
    long long _baseTime;	// 48 = 0x30
    unsigned long long _progress;	// 56 = 0x38
    unsigned long long _buyStatus;	// 64 = 0x40
}

@property(nonatomic) unsigned long long buyStatus; // @synthesize buyStatus=_buyStatus;
@property(nonatomic) unsigned long long progress; // @synthesize progress=_progress;
@property(nonatomic) long long baseTime; // @synthesize baseTime=_baseTime;
@property(copy, nonatomic) NSString *progressText; // @synthesize progressText=_progressText;
@property(copy, nonatomic) NSString *timePrefix; // @synthesize timePrefix=_timePrefix;
@property(copy, nonatomic) NSString *bizCountTip; // @synthesize bizCountTip=_bizCountTip;
@property(retain, nonatomic) AliDetailPriceEntity *extraPrice; // @synthesize extraPrice=_extraPrice;
@property(retain, nonatomic) AliDetailPriceEntity *price; // @synthesize price=_price;
- (void).cxx_destruct;
- (void)parseDataFromDetailModel:(id)arg1;

@end
