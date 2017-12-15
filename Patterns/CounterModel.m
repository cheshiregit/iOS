//
//  CounterModel.m
//  Patterns
//
//  Created by admin on 15.12.17.
//  Copyright © 2017 admin. All rights reserved.
//

#import "CounterModel.h"
#import "PresenterOutputProtocol.h"

@implementation CounterModel

- (instancetype) init
{
    self = [super init];
    if (self)
    {
        _counter = @0;
    }
    return self;
}

- (void) 

- (void)setCounter:(NSNumber *)counter
{
    if (counter.integerValue > 0)
    {
        _counter = counter;
    }
}

@end
