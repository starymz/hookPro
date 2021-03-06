//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LVProtocal-Protocol.h"

@class LView, NSString;

@interface LVAnimate : UIView <LVProtocal>
{
    float _time;	// 8 = 0x8
    LView *_lv_lview;	// 16 = 0x10
    struct _LVUserDataInfo *_lv_userData;	// 24 = 0x18
    id _mySelf;	// 32 = 0x20
}

+ (int)classDefine:(struct lv_State *)arg1;
@property(nonatomic) float time; // @synthesize time=_time;
@property(retain, nonatomic) id mySelf; // @synthesize mySelf=_mySelf;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LView *lv_lview; // @synthesize lv_lview=_lv_lview;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init:(struct lv_State *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

