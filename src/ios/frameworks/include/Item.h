//
//  Item.h
//  ContextSDK
//
//  Created by Waldemar Krumrick on 9/12/13.
//  Copyright (c) 2013 Intel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Types.h"
#import "SensingStates.h"
#import "ItemContext.h"

@interface Item : NSObject

@property(nonatomic,strong) NSNumber *_id;
@property(nonatomic,strong) State *state;
@property(nonatomic,strong) ItemContext *itemContext;
@property(nonatomic,strong) Type *type;

+ (Item *)createItemWithState:(State *)state type:(Type*)type itemContext:(ItemContext *)itemContext;

@end
