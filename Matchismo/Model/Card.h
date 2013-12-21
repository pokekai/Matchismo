//
//  Card.h
//  Matchismo
//
//  Created by Kai Ren on 12/18/13.
//  Copyright (c) 2013 Kai Ren. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject
@property (strong,nonatomic) NSString *contents;
@property (nonatomic,getter = isChosen) BOOL chosen;
@property (nonatomic,getter = isMatched) BOOL matched;
-(int)match:(NSArray *)otherCards;

@end
