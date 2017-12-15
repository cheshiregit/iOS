//
//  Presenter.h
//  Patterns
//
//  Created by admin on 15.12.17.
//  Copyright © 2017 admin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PresenterOutputProtocol.h"

@protocol PresenterInputProtocol <NSObject>

@required
- (void)decrementTapped;
- (void)incrementTapped;

@end

@protocol PresenterOutputProtocol <NSObject>

@required
- (void)counterDidChanged;

@end

@protocol ViewProtocol

//@interface

@end
