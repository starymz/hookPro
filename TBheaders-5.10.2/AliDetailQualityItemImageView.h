//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "TBDetailBigPhotoBrowserDelegate-Protocol.h"

@class AliDetailProductQualityContentModel, AliDetailQualityBottomView, NSArray, NSMutableArray, NSString, UILabel;

@interface AliDetailQualityItemImageView : UIImageView <TBDetailBigPhotoBrowserDelegate>
{
    long long _groupIndex;	// 8 = 0x8
    NSString *_eventToken;	// 16 = 0x10
    AliDetailProductQualityContentModel *_itemModel;	// 24 = 0x18
    unsigned long long _currentImageIndex;	// 32 = 0x20
    NSArray *_tappedImagePaths;	// 40 = 0x28
    NSArray *_allImagePaths;	// 48 = 0x30
    NSArray *_imageDesc;	// 56 = 0x38
    NSArray *_imageTags;	// 64 = 0x40
    NSMutableArray *_bigImagePaths;	// 72 = 0x48
    UILabel *_imageDescLabel;	// 80 = 0x50
    AliDetailQualityBottomView *_subTitleView;	// 88 = 0x58
}

@property(retain, nonatomic) AliDetailQualityBottomView *subTitleView; // @synthesize subTitleView=_subTitleView;
@property(retain, nonatomic) UILabel *imageDescLabel; // @synthesize imageDescLabel=_imageDescLabel;
@property(retain, nonatomic) NSMutableArray *bigImagePaths; // @synthesize bigImagePaths=_bigImagePaths;
@property(retain, nonatomic) NSArray *imageTags; // @synthesize imageTags=_imageTags;
@property(retain, nonatomic) NSArray *imageDesc; // @synthesize imageDesc=_imageDesc;
@property(retain, nonatomic) NSArray *allImagePaths; // @synthesize allImagePaths=_allImagePaths;
@property(retain, nonatomic) NSArray *tappedImagePaths; // @synthesize tappedImagePaths=_tappedImagePaths;
@property(nonatomic) unsigned long long currentImageIndex; // @synthesize currentImageIndex=_currentImageIndex;
@property(retain, nonatomic) AliDetailProductQualityContentModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(nonatomic) long long groupIndex; // @synthesize groupIndex=_groupIndex;
- (void).cxx_destruct;
- (id)photoBrowser:(id)arg1 subTitleDescViewForIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 captionForIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 photoModelAtIndex:(unsigned long long)arg2;
- (void)setAllImageDesc:(id)arg1;
- (void)setQualityItemModel:(id)arg1;
- (id)imageTag;
- (void)imageTaped;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

