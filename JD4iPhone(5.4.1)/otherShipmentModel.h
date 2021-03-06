//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class BigItemPromiseModel, NSArray, NSNumber, NSString;

@interface otherShipmentModel : JDModel
{
    _Bool _selected;
    _Bool _available;
    NSNumber *_Id;
    NSString *_descriptionString;
    NSString *_name;
    NSArray *_showSku;
    NSString *_imageDomain;
    NSNumber *_bigItemShipIndex;
    NSArray *_bigItemInstallDatesList;
    NSArray *_bigItemShipDates;
    NSNumber *_bigItemInstallIndex;
    BigItemPromiseModel *_bigItemPromiseModel;
}

@property(retain, nonatomic) BigItemPromiseModel *bigItemPromiseModel; // @synthesize bigItemPromiseModel=_bigItemPromiseModel;
@property(retain, nonatomic) NSNumber *bigItemInstallIndex; // @synthesize bigItemInstallIndex=_bigItemInstallIndex;
@property(retain, nonatomic) NSArray *bigItemShipDates; // @synthesize bigItemShipDates=_bigItemShipDates;
@property(retain, nonatomic) NSArray *bigItemInstallDatesList; // @synthesize bigItemInstallDatesList=_bigItemInstallDatesList;
@property(retain, nonatomic) NSNumber *bigItemShipIndex; // @synthesize bigItemShipIndex=_bigItemShipIndex;
@property(retain, nonatomic) NSString *imageDomain; // @synthesize imageDomain=_imageDomain;
@property(retain, nonatomic) NSArray *showSku; // @synthesize showSku=_showSku;
@property(nonatomic) _Bool available; // @synthesize available=_available;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSNumber *Id; // @synthesize Id=_Id;
- (void).cxx_destruct;
- (id)getSelectedbigInstallTime;
- (id)getSelectedBigShipTime;
- (void)setDataWithDic:(id)arg1;
- (id)createBigInstallDataWithArr:(id)arg1;
- (id)createBigCodeWithArr:(id)arg1;
- (id)createShowSkuWithArr:(id)arg1;

@end

