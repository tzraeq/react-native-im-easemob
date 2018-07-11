//
//  ClientModule.h
//  RNEaseMob
//
//  Created by Xiaosong Gao on 2018/6/13.
//  Copyright © 2018年 Hecom. All rights reserved.
//

#import <React/RCTBridgeModule.h>
#import <Hyphenate/Hyphenate.h>
#import "Singleton.h"

@interface ClientDelegate : NSObject <RCTBridgeModule, EMClientDelegate>

DEFINE_SINGLETON_FOR_HEADER(ClientDelegate);

@end