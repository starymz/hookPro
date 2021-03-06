//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MDAPICached, MDBaseMessage, UIImageView, UILabel;

@interface MDChatLocationView : UIView
{
    UIImageView *_mapView;
    UIImageView *_userLocationView;
    UIImageView *_customLocationView;
    UIView *_bottomContentView;
    UIImageView *_bottomIconView;
    UILabel *_locationLabel;
    MDAPICached *_apiCache;
    MDBaseMessage *_message;
}

@property(retain, nonatomic) MDBaseMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) MDAPICached *apiCache; // @synthesize apiCache=_apiCache;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UIImageView *bottomIconView; // @synthesize bottomIconView=_bottomIconView;
@property(retain, nonatomic) UIView *bottomContentView; // @synthesize bottomContentView=_bottomContentView;
@property(retain, nonatomic) UIImageView *customLocationView; // @synthesize customLocationView=_customLocationView;
@property(retain, nonatomic) UIImageView *userLocationView; // @synthesize userLocationView=_userLocationView;
@property(retain, nonatomic) UIImageView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)fetchSiteAddressSuccess:(id)arg1;
- (void)fetchSiteAddressWithLat:(double)arg1 lng:(double)arg2 identifier:(id)arg3;
- (void)updateWithMessage:(id)arg1;

@end

