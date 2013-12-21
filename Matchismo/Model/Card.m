//
//  Card.m
//  Matchismo
//
//  Created by Kai Ren on 12/18/13.
//  Copyright (c) 2013 Kai Ren. All rights reserved.
//

#import "Card.h"

@implementation Card
-(int)match:(NSArray *)otherCards;
{
    int score = 0;
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score =1;
        }
    }
    return score;
}
@end
