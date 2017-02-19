//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSURL, PHImageRequestOptions;

@interface ASPhotosFrameworkImageRequest : NSObject <NSCopying>
{
    NSString *_assetIdentifier;
    long long _contentMode;
    PHImageRequestOptions *_options;
    struct CGSize _targetSize;
}

+ (id)requestWithURL:(id)arg1;
@property(retain, nonatomic) PHImageRequestOptions *options; // @synthesize options=_options;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSURL *url;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAssetIdentifier:(id)arg1;
- (id)init;

@end
