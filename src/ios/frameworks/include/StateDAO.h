//
//  StateDAO.h
//  ContextSDK
//
//  Created by Waldemar Krumrick on 9/10/13.
//  Copyright (c) 2013 Intel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Types.h"
#import "Item.h"
#import "sqlite3.h"
#import "FMDatabase.h"

@interface StateDAO : NSObject <UIApplicationDelegate>

@property(nonatomic,strong) NSMutableDictionary *mRecentStates;

- (FMDatabase *)createDBInstance;

- (BOOL)storeState:(Item *)item;

- (BOOL)deleteState:(Item *)item;

- (NSArray *)getPendingStates:(int)limit;

@end
