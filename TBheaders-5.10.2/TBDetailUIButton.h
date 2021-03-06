//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary, UIColor;

@interface TBDetailUIButton : UIButton
{
    _Bool hasAddStateTarget;	// 8 = 0x8
    _Bool setNormalBackground;	// 9 = 0x9
    UIColor *backgroundColor;	// 16 = 0x10
    UIColor *borderColor;	// 24 = 0x18
    NSMutableDictionary *_backgroundDic;	// 32 = 0x20
    NSMutableDictionary *_borderDic;	// 40 = 0x28
}

@property(retain, nonatomic) NSMutableDictionary *borderDic; // @synthesize borderDic=_borderDic;
@property(retain, nonatomic) NSMutableDictionary *backgroundDic; // @synthesize backgroundDic=_backgroundDic;
- (void).cxx_destruct;
- (void)updateButtonStyle;
- (unsigned long long)getCurrentState;
- (void)updateBorderColor:(unsigned long long)arg1;
- (void)updateBackgroundColor:(unsigned long long)arg1;
- (void)setBorderColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

