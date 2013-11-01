//
//  ContextPusher.h
//  Context
//
//  Created by Waldemar Krumrick on 9/23/13.
//  Copyright (c) 2013 Intel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CloudConnector.h"
#import "CloudConnectorDelegate.h"

@interface ContextPusher : NSObject

@property(nonatomic,strong) CloudConnector *cloudConnector;
@property(nonatomic,strong) StateDAO *datasource;
@property(nonatomic,assign) BOOL isAlive;

- (id)initWithCloudConnector:(CloudConnector*)cloudConnector;

- (void)start;

@end
