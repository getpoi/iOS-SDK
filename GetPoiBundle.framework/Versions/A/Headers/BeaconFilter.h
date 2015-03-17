//
//  BeaconFilter.h
//  Beacon
//
//  Created by Salih zeki Cimen on 10/11/14.
//  Copyright (c) 2014 GetPoi. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface BeaconFilter : NSObject
{
    int majorId;
    NSString *serviceUUID;
}

@property int majorId;
@property NSString *serviceUUID;

@end
