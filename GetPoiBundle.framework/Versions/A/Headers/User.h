//
//  User.h
//  GetPoi
//
//  Created by Salih zeki Cimen on 28/11/14.
//  Copyright (c) 2014 GetPoi. All rights reserved.
//

@interface User : NSObject
{
    NSString *UniqueId;
    NSString *Name;
    NSString *Surname;
    NSString *Address;
    NSString *TCKN;
    NSString *AdvertisingId;
    NSString *Email;
    NSString *TelNo;
    NSString *Twitter;
    NSString *Facebook;
    NSString *MacAddress;
}

@property NSString *UniqueId;
@property NSString *Name;
@property NSString *Surname;
@property NSString *Address;
@property NSString *TCKN;
@property NSString *AdvertisingId;
@property NSString *Email;
@property NSString *TelNo;
@property NSString *Twitter;
@property NSString *Facebook;
@property NSString *MacAddress;

-(NSDictionary *)dictionary;

@end