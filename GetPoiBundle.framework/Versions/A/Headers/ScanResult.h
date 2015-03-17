//
//  ScanResult.h
//  Beacon
//
//  Created by Salih zeki Cimen on 11/11/14.
//  Copyright (c) 2014 GetPoi. All rights reserved.
//

@interface ScanResult : NSObject
{
    NSString *range;
    NSString *prevRange;
    NSNumber *rssi;
    NSString *timeStamp;
   
}

@property NSString *range;
@property NSString *prevRange;
@property NSNumber *rssi;
@property NSString *timeStamp;

-(NSDictionary *)dictionary;

@end
