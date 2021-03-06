//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDJPHeaderBaseView.h"

@class FlightInfoModel, UIImageView, UILabel;

@interface JDJPClassHeaderView : JDJPHeaderBaseView
{
    UIImageView *arrowView;
    UILabel *stopLabel;
    UILabel *stopCityLabel;
    UILabel *depTimeLabel;
    UILabel *arrTimeLabel;
    UILabel *dayChangeLabel;
    UILabel *depAirLabel;
    UILabel *arrAirLabel;
    UIImageView *flightIconView;
    UILabel *flightInfoLabel;
    FlightInfoModel *_flightInfoModel;
}

@property(retain, nonatomic) FlightInfoModel *flightInfoModel; // @synthesize flightInfoModel=_flightInfoModel;
- (void)setStopCityCN:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

