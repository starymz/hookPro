//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol GDMActionSheetViewDelegate;

@interface GDMActionSheetView : UIView
{
    id <GDMActionSheetViewDelegate> _delegate;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <GDMActionSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)unfollow:(id)arg1;
- (void)cancel:(id)arg1;
- (void)tap:(id)arg1;
- (id)init;

@end
