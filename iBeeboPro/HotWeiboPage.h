//
//  HotWeiboPage.h
//
//  Created by   on 2017/6/19
//  Copyright (c) 2017 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class HotCardlistInfo;

@interface HotWeiboPage : NSObject <NSCoding, NSCopying>

@property (nonatomic, assign) double ok;
@property (nonatomic, assign) double seeLevel;
@property (nonatomic, strong) HotCardlistInfo *cardlistInfo;
@property (nonatomic, strong) NSArray *cards;
@property (nonatomic, assign) double showAppTips;
@property (nonatomic, strong) NSString *scheme;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
