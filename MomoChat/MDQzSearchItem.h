//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDQuanziItem, NSString;

@interface MDQzSearchItem : NSObject
{
    NSString *_name;
    MDQuanziItem *_item;
    struct _NSRange _range;
}

@property(retain, nonatomic) MDQuanziItem *item; // @synthesize item=_item;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
