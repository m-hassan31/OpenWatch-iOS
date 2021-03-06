//
//  OWAccount.h
//  OpenWatch
//
//  Created by Christopher Ballinger on 11/13/12.
//  Copyright (c) 2012 OpenWatch FPC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OWUser.h"
#import <Accounts/Accounts.h>
#import "OWMission.h"

@interface OWAccount : NSObject


@property (nonatomic, strong) NSNumber *accountID;
@property (nonatomic, strong) NSString *email;
@property (nonatomic, strong) NSString *publicUploadToken;
@property (nonatomic, strong) NSString *privateUploadToken;
@property (nonatomic, strong) NSString *password;
@property (nonatomic, strong) NSString *username;
@property (nonatomic, strong) NSString* twitterAccountIdentifier;
@property (nonatomic) BOOL secretAgentEnabled;
@property (nonatomic) BOOL hasCompletedOnboarding;
@property (nonatomic) BOOL missionsDescriptionDismissed;
@property (nonatomic, strong) OWMission *lastSelectedMission;

- (OWUser*) user;

- (void) clearAccountData;
- (BOOL) isLoggedIn;


@end
