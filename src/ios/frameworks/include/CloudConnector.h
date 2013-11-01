//
//  CloudConnector.h
//  Context
//
//  Created by Waldemar Krumrick on 9/23/13.
//  Copyright (c) 2013 Intel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StateDAO.h"
#import "CloudConnectorDelegate.h"
#import "ActionDataState.h"
#import "ItemContext.h"

@class ListItems;

@interface CloudConnector : NSObject <CloudConnectorDelegate>

@property(nonatomic,strong) StateDAO *dataSource;

- (id)initWithStateDAO:(StateDAO*)datasource;

- (void)pushSensingState:(State *)state;

- (void)pushContextState:(NSArray *)items;

@end
