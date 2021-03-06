//
//  ZFString.h
//  ZFPlotExtension
//
//  Created by Aileen Nielsen on 11/9/15.
//  Copyright © 2015 SunnysideProductions. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString()
+(NSString*) stringMonthDayMonthDay:(NSDate*) date;
+(NSString*)yNumberWithUnits:(float)number withFractionDigits: (int)digits withUnits: (NSString *)units;
+(NSString*)pairNumber:(float)numberX andNumberY:(float)numberY withFractionDigits: (int)digits
                    withUnits: (NSString *)units withXUnits: (NSString *)xUnits;
@end
