//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate;

@interface MDIAdMuster : NSObject
{
    NSArray *iAds;
    NSDate *sysTime;
    unsigned int version;
    _Bool allowClose;
    long long areaCode;
}

@property(nonatomic) NSDate *sysTime; // @synthesize sysTime;
@property(nonatomic) long long areaCode; // @synthesize areaCode;
@property(nonatomic) _Bool allowClose; // @synthesize allowClose;
@property(nonatomic) unsigned int version; // @synthesize version;
@property(retain, nonatomic) NSArray *iAds; // @synthesize iAds;
- (void)dealloc;
- (id)description;
- (unsigned long long)iadCount;
- (id)iadAtIndex:(unsigned long long)arg1;
- (id)nextIAd:(id)arg1;
- (void)setWithDic:(id)arg1;
- (id)initWithAreaCodeWithAreaCode:(long long)arg1;

@end

