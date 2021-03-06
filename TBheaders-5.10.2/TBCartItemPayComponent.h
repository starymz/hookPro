//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TBCartItemPayComponent : NSObject
{
    NSString *_currencySymbol;	// 8 = 0x8
    double _currencyUnitFactor;	// 16 = 0x10
    NSMutableDictionary *_data;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
@property(nonatomic) double currencyUnitFactor; // @synthesize currencyUnitFactor=_currencyUnitFactor;
@property(retain, nonatomic) NSString *currencySymbol; // @synthesize currencySymbol=_currencySymbol;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *totalNowPriceTitle;
@property(nonatomic) long long totalNowPrice;
@property(retain, nonatomic) NSString *originTitle;
@property(nonatomic) long long origin;
@property(retain, nonatomic) NSString *nowTitle;
@property(nonatomic) long long now;
- (id)initWithData:(id)arg1;

@end

