//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TBIconFontButton, TBSCCommentBtnOperation, TBSCSocialParam, UIButton, UIImage, UILabel;

@interface TBSCCommentButtonView : UIView
{
    TBIconFontButton *_commentIconButton;	// 8 = 0x8
    _Bool _titleEnable;	// 16 = 0x10
    TBSCSocialParam *_socialParam;	// 24 = 0x18
    UIButton *_commentButton;	// 32 = 0x20
    UILabel *_commentLabel;	// 40 = 0x28
    UIImage *_commentImg;	// 48 = 0x30
    NSString *_commentBtnString;	// 56 = 0x38
    unsigned long long _accountId;	// 64 = 0x40
    TBSCCommentBtnOperation *_operate;	// 72 = 0x48
    long long _commentCnt;	// 80 = 0x50
    CDUnknownBlockType _finishBlock;	// 88 = 0x58
}

@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(nonatomic) long long commentCnt; // @synthesize commentCnt=_commentCnt;
@property(retain, nonatomic) TBSCCommentBtnOperation *operate; // @synthesize operate=_operate;
@property(nonatomic) unsigned long long accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) NSString *commentBtnString; // @synthesize commentBtnString=_commentBtnString;
@property(retain, nonatomic) UIImage *commentImg; // @synthesize commentImg=_commentImg;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) TBSCSocialParam *socialParam; // @synthesize socialParam=_socialParam;
@property(nonatomic) _Bool titleEnable; // @synthesize titleEnable=_titleEnable;
- (void).cxx_destruct;
- (void)updateCommentBtn;
- (void)commentClicked:(id)arg1;
- (void)setWithCommentImage:(id)arg1;
- (void)deleteCommentCount;
- (void)addCommentCount;
- (void)dealloc;
- (id)initWithParam:(id)arg1 withAccountId:(unsigned long long)arg2 withFrame:(struct CGRect)arg3 withFinishBlock:(CDUnknownBlockType)arg4;

@end

