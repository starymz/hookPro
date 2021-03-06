//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet;

@interface BrowseHistoryDataManager : NSObject
{
    NSMutableArray *_BHArray;
    NSMutableSet *_BHSelectedSet;
}

+ (id)shared;
@property(retain, nonatomic) NSMutableSet *BHSelectedSet; // @synthesize BHSelectedSet=_BHSelectedSet;
@property(retain, nonatomic) NSMutableArray *BHArray; // @synthesize BHArray=_BHArray;
- (void).cxx_destruct;
- (double)headerHeightForSection:(long long)arg1;
- (void)clear;
- (_Bool)isSelectedSection:(id)arg1;
- (_Bool)isSelectedAll;
- (void)selected:(_Bool)arg1 model:(id)arg2;
- (void)selected:(_Bool)arg1 models:(id)arg2;
- (void)selectedAll:(_Bool)arg1;
- (long long)itemsCount;
- (long long)indexFromIndexPath:(id)arg1;
- (id)sectionModelsFromIndexPath:(id)arg1;
- (id)modelFromIndexPath:(id)arg1;
- (id)stringSkusForSelectedModels;
- (void)deleteModel:(id)arg1;
- (void)deleteSelectedModels;
- (void)addSelectedModel:(id)arg1;
- (void)handleModels:(id)arg1;

@end

