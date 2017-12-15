//
//  Presenter.m
//  Patterns
//
//  Created by admin on 15.12.17.
//  Copyright © 2017 admin. All rights reserved.
//

#import "Presenter.h"
#import "CounterModel.h"
#import "ViewProtocol.h"

@interface Presenter ()

@property (nonatomic, weak) id<ViewProtocol> view;
@property (nonatomic, strong) CounterModel *model;

@end

@implementation Presenter

-(instancetype)initWithView:(id<ViewProtocol>)view;
{
    self = [super init];
    if (self)
    {
        _view = view;
        _model = [CounterModel new];
        _model.presenter = self;
    }
    return self;
}

- (void)decrementTapped
{
    
}

- (void)incrementTapped
{
    
}

@end
