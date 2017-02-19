//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSString, TBMyTaobaoMyToolsItem, TBMyTaobaoToolsItem, TBMyTaobaoToolsView;

@interface TBMyTaobaoMainTableViewToolsCell : UITableViewCell
{
    TBMyTaobaoMyToolsItem *_toolsItem;	// 8 = 0x8
    TBMyTaobaoToolsView *_toolsView;	// 16 = 0x10
    long long _row;	// 24 = 0x18
    NSString *_titleName;	// 32 = 0x20
    NSArray *_cellData;	// 40 = 0x28
    TBMyTaobaoToolsItem *_superCell;	// 48 = 0x30
    unsigned long long _type;	// 56 = 0x38
}

+ (double)heightForType:(unsigned long long)arg1 numberOfRows:(long long)arg2 isMorePages:(_Bool)arg3;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) TBMyTaobaoToolsItem *superCell; // @synthesize superCell=_superCell;
@property(retain, nonatomic) NSArray *cellData; // @synthesize cellData=_cellData;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(nonatomic) long long row; // @synthesize row=_row;
@property(retain, nonatomic) TBMyTaobaoToolsView *toolsView; // @synthesize toolsView=_toolsView;
@property(retain, nonatomic) TBMyTaobaoMyToolsItem *toolsItem; // @synthesize toolsItem=_toolsItem;
- (void).cxx_destruct;
- (long long)pageItemNumber;
- (long long)pageNumber;
- (void)prepareForReuse;
- (void)processDataForSuperCellLogic;
- (void)setType:(unsigned long long)arg1 ToolsItem:(id)arg2;
- (void)setType:(unsigned long long)arg1 rowNumber:(long long)arg2 titleName:(id)arg3 cellData:(id)arg4 superCellData:(id)arg5;
- (void)setType:(unsigned long long)arg1 rowNumber:(long long)arg2 titleName:(id)arg3 cellData:(id)arg4;
- (void)setType:(unsigned long long)arg1 rowNumber:(long long)arg2 cellData:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
