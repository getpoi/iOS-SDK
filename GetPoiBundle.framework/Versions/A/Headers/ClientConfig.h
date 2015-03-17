//
//  ClientConfig.h
//  Beacon
//
//  Created by Salih zeki Cimen on 08/11/14.
//  Copyright (c) 2014 GetPoi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BeaconFilter.h"

@interface ClientConfig : NSObject
{
    NSMutableArray *beaconFilter;
    NSString *messageURL;
    int messagingIntervalMilliseconds;

}

    @property NSMutableArray *beaconFilter;
    @property NSString *messageURL;
    @property int messagingIntervalMilliseconds;

@end