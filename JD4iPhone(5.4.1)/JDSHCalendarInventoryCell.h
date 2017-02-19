//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class JDSHCalendarInventoryCellViewModel, JDSHCalendarLineView, NewFinderImageView, UILabel, UIView;

@interface JDSHCalendarInventoryCell : UITableViewCell
{
    JDSHCalendarInventoryCellViewModel *_inventoryCellViewModel;
    UILabel *_titleLabel;
    UILabel *_descriptLabel;
    NewFinderImageView *_firstImgView;
    NewFinderImageView *_secondImgView;
    NewFinderImageView *_thirdImgView;
    double _imgWidth;
    UIView *_coverView;
    JDSHCalendarLineView *_lineView;
}

@property(retain, nonatomic) JDSHCalendarLineView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) double imgWidth; // @synthesize imgWidth=_imgWidth;
@property(retain, nonatomic) NewFinderImageView *thirdImgView; // @synthesize thirdImgView=_thirdImgView;
@property(retain, nonatomic) NewFinderImageView *secondImgView; // @synthesize secondImgView=_secondImgView;
@property(retain, nonatomic) NewFinderImageView *firstImgView; // @synthesize firstImgView=_firstImgView;
@property(retain, nonatomic) UILabel *descriptLabel; // @synthesize descriptLabel=_descriptLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDSHCalendarInventoryCellViewModel *inventoryCellViewModel; // @synthesize inventoryCellViewModel=_inventoryCellViewModel;
- (void).cxx_destruct;
- (double)calculateImgWidth;
- (id)initWithInventoryViewModel:(id)arg1;

@end
