//
//  LkH5icon.h
//
//  Created by   on 2017/6/21
//  Copyright (c) 2017 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface LkH5icon : NSObject <NSCoding, NSCopying>

@property (nonatomic, strong) NSArray *other;
@property (nonatomic, assign) double main;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
