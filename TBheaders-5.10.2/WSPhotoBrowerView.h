//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TBComboViewController, UIImageView, UILabel, UIScrollView;

@interface WSPhotoBrowerView : UIView <UIScrollViewDelegate>
{
    UIScrollView *itemScrollView;	// 8 = 0x8
    NSMutableArray *itemArray;	// 16 = 0x10
    NSMutableArray *photoViewArray;	// 24 = 0x18
    long long currentOffsetX;	// 32 = 0x20
    long long pageNumber;	// 40 = 0x28
    _Bool isNeedSwithItem;	// 48 = 0x30
    UILabel *goFrontLabel;	// 56 = 0x38
    UIImageView *goFrontImageView;	// 64 = 0x40
    UILabel *goBackLabel;	// 72 = 0x48
    UIImageView *goBackImageView;	// 80 = 0x50
    _Bool isFirstCombo;	// 88 = 0x58
    _Bool isLastCombo;	// 89 = 0x59
    CDUnknownBlockType _slideBlock;	// 96 = 0x60
    CDUnknownBlockType _needGoFront;	// 104 = 0x68
    CDUnknownBlockType _needGoBack;	// 112 = 0x70
    TBComboViewController *_rootVC;	// 120 = 0x78
}

@property(nonatomic) __weak TBComboViewController *rootVC; // @synthesize rootVC=_rootVC;
@property(copy, nonatomic) CDUnknownBlockType needGoBack; // @synthesize needGoBack=_needGoBack;
@property(copy, nonatomic) CDUnknownBlockType needGoFront; // @synthesize needGoFront=_needGoFront;
@property(copy, nonatomic) CDUnknownBlockType slideBlock; // @synthesize slideBlock=_slideBlock;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setLastState:(_Bool)arg1;
- (void)setFirstState:(_Bool)arg1;
- (void)moveToItemAtIndex:(long long)arg1;
- (void)setItem:(id)arg1;
- (void)initPhotoView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

