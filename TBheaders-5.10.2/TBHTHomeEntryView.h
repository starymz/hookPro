//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIImage;

@interface TBHTHomeEntryView : UIView
{
    NSMutableArray *_btnList;	// 8 = 0x8
    int _count;	// 16 = 0x10
    UIImage *_placeholder;	// 24 = 0x18
    NSArray *_model;	// 32 = 0x20
}

- (void).cxx_destruct;
- (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
- (void)btnClickEvent:(id)arg1;
- (void)setData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

