//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface TBSNSBasicListViewCell : UITableViewCell
{
    CDUnknownBlockType _prepareForReuseBlock;	// 8 = 0x8
    long long _indexR;	// 16 = 0x10
    void *_extraD;	// 24 = 0x18
    UIView *_myBackgroundView;	// 32 = 0x20
}

+ (id)getCellFromItem:(id)arg1;
@property(retain, nonatomic) UIView *myBackgroundView; // @synthesize myBackgroundView=_myBackgroundView;
@property(nonatomic) void *extraD; // @synthesize extraD=_extraD;
@property(nonatomic) long long indexR; // @synthesize indexR=_indexR;
@property(copy, nonatomic) CDUnknownBlockType prepareForReuseBlock; // @synthesize prepareForReuseBlock=_prepareForReuseBlock;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;

@end
