//
//  UserPushNotifToken.h
//  GetPoi
//
//  Created by Salih zeki Cimen on 02/12/14.
//  Copyright (c) 2014 GetPoi. All rights reserved.
//

@interface UserPushNotifToken : NSObject
{
    NSString *UniqueId;
    NSString *PushNotifToken;
}

@property NSString *UniqueId;
@property NSString *PushNotifToken;

-(NSDictionary *)dictionary;

@end