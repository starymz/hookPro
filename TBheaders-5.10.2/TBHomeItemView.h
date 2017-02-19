//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TBPriceTextView, UIButton, UIColor, UIImageView, UILabel;

@interface TBHomeItemView : UIView
{
    NSString *_itemImageUrl;	// 8 = 0x8
    NSString *_itemTitle;	// 16 = 0x10
    NSString *_itemPrice;	// 24 = 0x18
    NSString *_itemInfoImageUrl;	// 32 = 0x20
    double _itemInfoImageWidth;	// 40 = 0x28
    NSString *_itemUrl;	// 48 = 0x30
    NSString *_trackCode;	// 56 = 0x38
    NSString *_trackExtraInfo;	// 64 = 0x40
    NSString *_itemId;	// 72 = 0x48
    NSString *_itemCartTitle;	// 80 = 0x50
    NSString *_sales;	// 88 = 0x58
    UIImageView *_itemImageView;	// 96 = 0x60
    UILabel *_itemTitleLabel;	// 104 = 0x68
    UIImageView *_itemInfoImageView;	// 112 = 0x70
    UIButton *_itemButton;	// 120 = 0x78
    UILabel *_itemCartLabel;	// 128 = 0x80
    UIColor *_itemCartLabelTextColor;	// 136 = 0x88
    UIColor *_itemCartLabelBgColor;	// 144 = 0x90
    UILabel *_salesLabel;	// 152 = 0x98
    TBPriceTextView *_priceTextView;	// 160 = 0xa0
}

@property(retain, nonatomic) TBPriceTextView *priceTextView; // @synthesize priceTextView=_priceTextView;
@property(retain, nonatomic) UILabel *salesLabel; // @synthesize salesLabel=_salesLabel;
@property(retain, nonatomic) UIColor *itemCartLabelBgColor; // @synthesize itemCartLabelBgColor=_itemCartLabelBgColor;
@property(retain, nonatomic) UIColor *itemCartLabelTextColor; // @synthesize itemCartLabelTextColor=_itemCartLabelTextColor;
@property(retain, nonatomic) UILabel *itemCartLabel; // @synthesize itemCartLabel=_itemCartLabel;
@property(retain, nonatomic) UIButton *itemButton; // @synthesize itemButton=_itemButton;
@property(retain, nonatomic) UIImageView *itemInfoImageView; // @synthesize itemInfoImageView=_itemInfoImageView;
@property(retain, nonatomic) UILabel *itemTitleLabel; // @synthesize itemTitleLabel=_itemTitleLabel;
@property(retain, nonatomic) UIImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
@property(retain, nonatomic) NSString *sales; // @synthesize sales=_sales;
@property(copy, nonatomic) NSString *itemCartTitle; // @synthesize itemCartTitle=_itemCartTitle;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *trackExtraInfo; // @synthesize trackExtraInfo=_trackExtraInfo;
@property(copy, nonatomic) NSString *trackCode; // @synthesize trackCode=_trackCode;
@property(copy, nonatomic) NSString *itemUrl; // @synthesize itemUrl=_itemUrl;
@property(nonatomic) double itemInfoImageWidth; // @synthesize itemInfoImageWidth=_itemInfoImageWidth;
@property(copy, nonatomic) NSString *itemInfoImageUrl; // @synthesize itemInfoImageUrl=_itemInfoImageUrl;
@property(copy, nonatomic) NSString *itemPrice; // @synthesize itemPrice=_itemPrice;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(copy, nonatomic) NSString *itemImageUrl; // @synthesize itemImageUrl=_itemImageUrl;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)colorFromARGB:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (void)setItemCartBackgroundColor:(id)arg1;
- (void)setItemCartTextColor:(id)arg1;
- (void)refreshView;
- (void)prepareForReuse;
- (id)init;

@end
