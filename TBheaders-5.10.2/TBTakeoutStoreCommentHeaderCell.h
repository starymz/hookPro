//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel;

@interface TBTakeoutStoreCommentHeaderCell : UITableViewCell
{
    _Bool _checked;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    UIButton *_checkBox;	// 24 = 0x18
    UILabel *_checkLabel;	// 32 = 0x20
}

@property(retain, nonatomic) UILabel *checkLabel; // @synthesize checkLabel=_checkLabel;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(retain, nonatomic) UIButton *checkBox; // @synthesize checkBox=_checkBox;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)check:(id)arg1;
- (void)configCell:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

