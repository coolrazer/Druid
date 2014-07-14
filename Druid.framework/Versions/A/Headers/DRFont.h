//
//  DRFont.h
//  Druid
//
//  Created by kuying on 14-7-14.
//  Copyright (c) 2014年 kuying. All rights reserved.
//

@interface DRFont : NSObject

+ (UIFont *)regularFontOfSize:(CGFloat)size;
+ (UIFont *)regularFontHeadLine;
+ (UIFont *)regularFontSubheadLine;
+ (UIFont *)regularFontBody;
+ (UIFont *)regularFontFoot;
+ (UIFont *)regularFontCaption;

+ (UIFont *)lightFontOfSize:(CGFloat)size;
+ (UIFont *)lightFontHeadLine;
+ (UIFont *)lightFontSubheadLine;
+ (UIFont *)lightFontBody;
+ (UIFont *)lightFontFoot;
+ (UIFont *)lightFontCaption;

@end
