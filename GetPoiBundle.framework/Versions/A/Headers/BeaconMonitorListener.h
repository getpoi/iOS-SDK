//
//  BeaconMonitorListener.h
//  GetPoi
//
//  Created by Salih zeki Cimen on 27/11/14.
//  Copyright (c) 2014 GetPoi. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BeaconMonitorListener <NSObject>

- (void) beaconsDetected:(NSArray *) beaconData;    // Push the beacon data which will be send to server with type of Poi Array
- (void) responseReceivedFromServer:(NSArray*) response;    // Push the response from server with type of GPBeaconResponse Array
//- (void) enterExitRegionInfo:(NSDictionary *) regionInfo;

@end
