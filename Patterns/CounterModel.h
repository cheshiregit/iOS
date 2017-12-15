//
//  CounterModel.h
//  Patterns
//
//  Created by admin on 15.12.17.
//  Copyright © 2017 admin. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PresenterOutputProtocol;

@interface CounterModel : NSObject

//@property (nonatomic, strong) NSNumber *counter;
@property (nonatomic, weak) id<PresenterOutputProtocol> presenter;
@property (nonatomic, readonly) NSNumber *counter;

- (void)decrement;
- (void)increment;

@end
