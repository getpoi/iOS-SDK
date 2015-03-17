//
//  Poi.h
//  Beacon
//
//  Created by Salih zeki Cimen on 11/11/14.
//  Copyright (c) 2014 GetPoi. All rights reserved.
//

@interface Poi : NSObject
{
    NSMutableArray<NSObject> *scanResult;
    NSNumber *major;
    NSNumber *minor;
    NSString *serviceUUID;
}

@property NSMutableArray<NSObject> *scanResult;
@property NSNumber *major;
@property NSNumber *minor;
@property NSString *serviceUUID;

-(NSDictionary *)dictionary;

-(id) copyWithZone:(NSZone *)zone;


@end