//
//  ADMobImp.h
//  VPN-iOS
//
//  Created by 宋扬 on 16/2/26.
//  Copyright © 2016年 handloft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdBaseImp.h"

@interface AdHLImp : AdBaseImp

- (BOOL)isInterstitialSplashLoaded;

- (BOOL)isInterstitialButtonLoaded;

- (void)showInterstitialSplash;

- (void)showInterstitialButton:(NSString *)positionTag;

@end
