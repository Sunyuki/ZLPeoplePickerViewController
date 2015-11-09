//
//  APContact+Sorting.h
//  ZLPeoplePickerViewControllerDemo
//
//  Created by Zhixuan Lai on 11/5/14.
//  Copyright (c) 2014 Zhixuan Lai. All rights reserved.
//

#import "APContact.h"

@interface APContact (Sorting)

@property (nullable, nonatomic, strong, readonly) NSString *firstName;
@property (nullable, nonatomic, strong, readonly) NSString *lastName;
@property (nullable, nonatomic, strong, readonly) NSString *middleName;
@property (nullable, nonatomic, strong, readonly) NSString *compositeName;

//@property (strong,nonatomic) NSArray *santrizedPhones;

- (NSString  * _Nullable )firstNameOrCompositeName;
- (NSString  * _Nullable )lastNameOrCompositeName;
//- (NSArray *)linkedContacts;

@end
