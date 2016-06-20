//
//  GameDayPrize.h
//  RabbitGame
//
//  Created by pai hong on 12-7-11.
//  Copyright 2012年 
//-------洪湃--------------
//---qq:  454077256-------
//---tel: 186 2159 2830---
//------------------------. . All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "EEMaskSprite.h"

@class EESpriteScaleBtn;

@interface GameDayPrize : EEMaskSprite {
    
    CCLabelAtlas *label_money;
    int dayNum;
}

-(BOOL)isNewDay;
-(BOOL)isNewDayRecommend;
-(void)insertNeed;
-(void)updateNewDayRecommend;

@end