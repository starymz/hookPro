//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JIMIBaseModel.h"

@class NSArray, NSNumber, NSString;

@interface JIMILoginModel : JIMIBaseModel
{
    _Bool _showPrefix;
    _Bool _showVoice;
    NSNumber *_entryWay;
    NSString *_domainName;
    NSString *_sessionKey;
    NSString *_mSource;
    NSString *_userImageUrl;
    NSString *_jimiImageUrl;
    NSArray *_componentList;
    NSString *_satisfyStyle;
    NSNumber *_prefixWordLimitA;
    NSNumber *_prefixWordLimitB;
    long long _inputType;
}

@property(nonatomic) long long inputType; // @synthesize inputType=_inputType;
@property(nonatomic) _Bool showVoice; // @synthesize showVoice=_showVoice;
@property(nonatomic) _Bool showPrefix; // @synthesize showPrefix=_showPrefix;
@property(retain, nonatomic) NSNumber *prefixWordLimitB; // @synthesize prefixWordLimitB=_prefixWordLimitB;
@property(retain, nonatomic) NSNumber *prefixWordLimitA; // @synthesize prefixWordLimitA=_prefixWordLimitA;
@property(copy, nonatomic) NSString *satisfyStyle; // @synthesize satisfyStyle=_satisfyStyle;
@property(retain, nonatomic) NSArray *componentList; // @synthesize componentList=_componentList;
@property(copy, nonatomic) NSString *jimiImageUrl; // @synthesize jimiImageUrl=_jimiImageUrl;
@property(copy, nonatomic) NSString *userImageUrl; // @synthesize userImageUrl=_userImageUrl;
@property(copy, nonatomic) NSString *mSource; // @synthesize mSource=_mSource;
@property(copy, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(copy, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
@property(retain, nonatomic) NSNumber *entryWay; // @synthesize entryWay=_entryWay;
- (void).cxx_destruct;
- (_Bool)setDic:(id)arg1;

@end
