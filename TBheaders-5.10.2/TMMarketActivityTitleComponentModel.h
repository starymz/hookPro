//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMMarketComponentBaseModel.h"

@class NSString;

@interface TMMarketActivityTitleComponentModel : TMMarketComponentBaseModel
{
    NSString *_itemUrl;	// 16 = 0x10
    NSString *_activityTitle;	// 24 = 0x18
    NSString *_nextTitle;	// 32 = 0x20
    NSString *_activityUrl;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *activityUrl; // @synthesize activityUrl=_activityUrl;
@property(retain, nonatomic) NSString *nextTitle; // @synthesize nextTitle=_nextTitle;
@property(retain, nonatomic) NSString *activityTitle; // @synthesize activityTitle=_activityTitle;
@property(retain, nonatomic) NSString *itemUrl; // @synthesize itemUrl=_itemUrl;
- (void).cxx_destruct;
- (id)reuseIdentifier;
- (void)setItemFrame:(struct CGRect)arg1;
- (struct CGRect)itemFrame;
- (struct NSString *)itemType;
- (id)initWithDictionary:(id)arg1;

@end

