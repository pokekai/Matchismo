//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Kai Ren on 12/19/13.
//  Copyright (c) 2013 Kai Ren. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
#import "Card.h"
@interface CardMatchingGame : NSObject
//designated initializer
-(instancetype)initWithCardCount:(NSUInteger)count usingDeck:
(Deck *)deck;
-(void)chooseCardAtIndex:(NSUInteger)index;
-(Card*)cardAtIndex:(NSUInteger)index;
@property (nonatomic,readonly)NSInteger score;

@end
