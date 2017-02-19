//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseCell.h"

@class TBOTagListView, UIView;

@interface TBONotifyCardCell : TBOBaseCell
{
    UIView *_appsEntryView;	// 8 = 0x8
    UIView *_noticesContainView;	// 16 = 0x10
    TBOTagListView *_tagsListView;	// 24 = 0x18
}

+ (double)cellHeightForModel:(id)arg1 owner:(id)arg2;
@property(retain, nonatomic) TBOTagListView *tagsListView; // @synthesize tagsListView=_tagsListView;
@property(retain, nonatomic) UIView *noticesContainView; // @synthesize noticesContainView=_noticesContainView;
@property(retain, nonatomic) UIView *appsEntryView; // @synthesize appsEntryView=_appsEntryView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setModel:(id)arg1;

@end
