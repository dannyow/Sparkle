//
//  SPUInformationalUpdate.h
//  Sparkle
//
//  Created by Mayur Pawashe on 1/8/17.
//  Copyright © 2017 Sparkle Project. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SPUResumableUpdate.h"

NS_ASSUME_NONNULL_BEGIN

@interface SPUInformationalUpdate : NSObject <SPUResumableUpdate>

- (instancetype)initWithAppcastItem:(SUAppcastItem *)updateItem preventsAutoupdate:(BOOL)preventsAutoupdate;

@end

NS_ASSUME_NONNULL_END
