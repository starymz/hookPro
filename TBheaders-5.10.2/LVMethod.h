//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface LVMethod : NSObject
{
    id _nativeObject;	// 8 = 0x8
    SEL _sel;	// 16 = 0x10
    NSString *_selectName;	// 24 = 0x18
    long long _nargs;	// 32 = 0x20
}

@property(nonatomic) long long nargs; // @synthesize nargs=_nargs;
@property(copy, nonatomic) NSString *selectName; // @synthesize selectName=_selectName;
@property(nonatomic) SEL sel; // @synthesize sel=_sel;
@property(nonatomic) __weak id nativeObject; // @synthesize nativeObject=_nativeObject;
- (void).cxx_destruct;
- (int)performMethodWithArgs:(struct lv_State *)arg1;
- (long long)checkSelectorArgsNumber:(id)arg1;
- (id)initWithNativeObject:(id)arg1 sel:(SEL)arg2;

@end

