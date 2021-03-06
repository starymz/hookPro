//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TBHLTopBarCellModel, UIControl, UIImageView, UILabel;

@interface TBHLTopBarCell : UIView
{
    _Bool _isActive;	// 8 = 0x8
    int _index;	// 12 = 0xc
    TBHLTopBarCellModel *_model;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    NSString *_titleText;	// 32 = 0x20
    double _width;	// 40 = 0x28
    UIControl *_targetControl;	// 48 = 0x30
    UILabel *_tagLabel;	// 56 = 0x38
    UIView *_bageView;	// 64 = 0x40
    UIImageView *_imageView;	// 72 = 0x48
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *bageView; // @synthesize bageView=_bageView;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UIControl *targetControl; // @synthesize targetControl=_targetControl;
@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TBHLTopBarCellModel *model; // @synthesize model=_model;
@property(nonatomic) int index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)badgeHidden;
- (void)layoutSubviews;
- (id)init;

@end

