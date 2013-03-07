//
//  SampleDataObject.h
//  TestProject
//
//  Created by David Siebecker on 3/7/13.
//  Copyright (c) 2013 David Siebecker. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * @brief sample data object
 */
@interface SampleDataObject : NSObject


@property (nonatomic,strong) NSString *lastInput; /**< The last input string */
/**
 * @brief does some work
 * @param input the string with which to do some work
 */
-(void)doSomething:(NSString*)input;
@end
