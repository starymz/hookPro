//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface CNServiceProvider : TBJSONModel
{
    _Bool _showCupboardButton;	// 8 = 0x8
    float _score;	// 12 = 0xc
    unsigned long long _type;	// 16 = 0x10
    NSString *_typeDesc;	// 24 = 0x18
    NSString *_providerId;	// 32 = 0x20
    NSString *_providerName;	// 40 = 0x28
    NSString *_providerAvatar;	// 48 = 0x30
    NSString *_deliveryCode;	// 56 = 0x38
    NSString *_infoUrl;	// 64 = 0x40
    NSString *_mobilePhone;	// 72 = 0x48
}

@property(nonatomic) _Bool showCupboardButton; // @synthesize showCupboardButton=_showCupboardButton;
@property(copy, nonatomic) NSString *mobilePhone; // @synthesize mobilePhone=_mobilePhone;
@property(copy, nonatomic) NSString *infoUrl; // @synthesize infoUrl=_infoUrl;
@property(copy, nonatomic) NSString *deliveryCode; // @synthesize deliveryCode=_deliveryCode;
@property(nonatomic) float score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *providerAvatar; // @synthesize providerAvatar=_providerAvatar;
@property(copy, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
@property(copy, nonatomic) NSString *providerId; // @synthesize providerId=_providerId;
@property(copy, nonatomic) NSString *typeDesc; // @synthesize typeDesc=_typeDesc;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
