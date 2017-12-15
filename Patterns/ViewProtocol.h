//
//  ViewProtocol.h
//  Patterns
//
//  Created by admin on 15.12.17.
//  Copyright © 2017 admin. All rights reserved.
//

@protocol ViewProtocol <NSObject>

- (void)setCounterText;
- (void)setDecrementButtonEnabled:(BOOL)enabled;

@end
