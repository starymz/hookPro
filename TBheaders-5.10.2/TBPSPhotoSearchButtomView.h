//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSString, TBPSAVButton, TBPSCircularButton, UIImageView;
@protocol TBPSPhotoSearchButtomViewDelegate;

@interface TBPSPhotoSearchButtomView : UIView
{
    UIImageView *_allSearchImageView;	// 8 = 0x8
    TBPSAVButton *_btnAllSearch;	// 16 = 0x10
    UIImageView *_albumImageView;	// 24 = 0x18
    TBPSAVButton *_btnAlbum;	// 32 = 0x20
    UIView *_circleView;	// 40 = 0x28
    _Bool _hideAllSearch;	// 48 = 0x30
    NSString *_pssource;	// 56 = 0x38
    TBPSCircularButton *_btnCapture;	// 64 = 0x40
    NSString *_captureColor;	// 72 = 0x48
    id <TBPSPhotoSearchButtomViewDelegate> _delegate;	// 80 = 0x50
    NSDictionary *_buttonSetting;	// 88 = 0x58
}

@property(retain, nonatomic) NSDictionary *buttonSetting; // @synthesize buttonSetting=_buttonSetting;
@property(nonatomic) id <TBPSPhotoSearchButtomViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *captureColor; // @synthesize captureColor=_captureColor;
@property(retain, nonatomic) TBPSAVButton *btnAlbum; // @synthesize btnAlbum=_btnAlbum;
@property(retain, nonatomic) TBPSCircularButton *btnCapture; // @synthesize btnCapture=_btnCapture;
@property(nonatomic) _Bool hideAllSearch; // @synthesize hideAllSearch=_hideAllSearch;
@property(retain, nonatomic) NSString *pssource; // @synthesize pssource=_pssource;
- (void).cxx_destruct;
- (void)scanPhotoLibrary:(id)arg1;
- (void)capture:(id)arg1;
- (void)layoutSubviews;
- (void)clickedAllSearch:(id)arg1;
- (void)showButtonSetting:(id)arg1;
- (void)checkAllSearchSetting;
- (id)initWithFrame:(struct CGRect)arg1;

@end

