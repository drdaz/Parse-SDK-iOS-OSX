/**
 * Copyright (c) 2015-present, Parse, LLC.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import "../PFObjectController.h"

NS_ASSUME_NONNULL_BEGIN

@interface PFOfflineObjectController : PFObjectController

@property (nonatomic, weak, readonly) id<PFCommandRunnerProvider, PFOfflineStoreProvider> dataSource;

///--------------------------------------
#pragma mark - Init
///--------------------------------------

- (instancetype)initWithDataSource:(id<PFCommandRunnerProvider, PFOfflineStoreProvider>)dataSource NS_DESIGNATED_INITIALIZER;
+ (instancetype)controllerWithDataSource:(id<PFCommandRunnerProvider, PFOfflineStoreProvider>)dataSource;

@end

NS_ASSUME_NONNULL_END
