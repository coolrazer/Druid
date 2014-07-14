//
//  DRArrayDataSource.h
//  Druid
//
//  Created by kuying on 14-7-14.
//  Copyright (c) 2014年 kuying. All rights reserved.
//

#import <UIKit/UITableView.h>

typedef void (^TableViewCellConfigureBlock)(id cell, id item);

@interface DRArrayDataSource : NSObject <UITableViewDataSource>

- (id)initWithItems:(NSArray *)anItems cellIdentifier:(NSString *)aCellIdentifier configureCellBlock:(TableViewCellConfigureBlock)aConfigureCellBlock;

- (id)itemAtIndexPath:(NSIndexPath *)indexPath;

@end
