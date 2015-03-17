//
//  BeaconResponse.h
//  Beacon
//
//  Created by Salih zeki Cimen on 11/11/14.
//  Copyright (c) 2014 GetPoi. All rights reserved.
//

@interface GPBeaconResponse : NSObject
{
    BOOL *showLocalNotiff;
    NSString *title;
    NSString *body;
    NSString *url;
}

@property BOOL *showLocalNotiff;
@property NSString *title;
@property NSString *body;
@property NSString *url;

@end