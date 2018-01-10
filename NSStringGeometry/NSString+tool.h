//
//  NSString+tool.h
//  WearJewelry
//
//  Created by TQ_Lemon on 2018/1/8.
//  Copyright © 2018年 TOBGO. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString  *const XCColorKey = @"color";
static NSString  *const XCFontKey = @"font";
static NSString  *const XCRangeKey = @"range";
/**
 range的校验结果
 */
typedef enum
{
    RangeCorrect = 0,
    RangeError = 1,
    RangeOut = 2,
    
}RangeFormatType;

@interface NSString (tool)

#pragma mark - 常用工具
/**
 *  获取当前Vindor标示符
 *
 *  @return deviceId
 */
+ (NSString *) getDeviceIdentifierForVendor;


/**
 *  转换为XXXX年XX月XX日
 *
 *  @param time 时间戳
 *
 *  @return 年月日
 */
+ (NSString*) format:(NSTimeInterval) time;

/**
 *  转化为XX时XX分XX秒
 *
 *  @param time 时间戳
 *
 *  @return 时:分:秒
 */
+ (NSString*) formatTime:(NSTimeInterval) time;

/**
 *  转化为XXXX年XX月XX日XX时XX分XX秒
 *
 *  @param time 时间戳
 *
 *  @return 年月日 时:分:秒
 */
+ (NSString *) formatDateAndTime:(NSTimeInterval)time;

#pragma mark - 校验NSRange
/**
 *  校验范围（NSRange）
 *
 *  @param range Range
 *
 *  @return 校验结果：RangeFormatType
 */
- (RangeFormatType)checkRange:(NSRange)range;

#pragma mark - 改变单个范围字体的大小和颜色
/**
 *  改变字体的颜色
 *
 *  @param color 颜色（UIColor）
 *  @param range 范围（NSRange）
 *
 *  @return 转换后的富文本（NSMutableAttributedString）
 */
- (NSMutableAttributedString *)changeColor:(UIColor *)color
                                  andRange:(NSRange)range;


/**
 *  改变字体大小
 *
 *  @param font  字体大小(UIFont)
 *  @param range 范围(NSRange)
 *
 *  @return 转换后的富文本（NSMutableAttributedString）
 */
- (NSMutableAttributedString *)changeFont:(UIFont *)font
                                 andRange:(NSRange)range;


/**
 *   改变字体的颜色和大小
 *
 *  @param colors      字符串的颜色
 *  @param colorRanges 需要改变颜色的字符串范围
 *  @param fonts       字体大小
 *  @param fontRanges  需要改变字体大小的字符串范围
 *
 *  @return 转换后的富文本（NSMutableAttributedString）
 */

- (NSMutableAttributedString *)changeColor:(UIColor *)color
                              andColorRang:(NSRange)colorRange
                                   andFont:(UIFont *)font
                              andFontRange:(NSRange)fontRange;

#pragma mark - 改变多个范围内的字体和颜色

/**
 *  改变多段字符串为一种颜色
 *
 *  @param color  字符串的颜色
 *  @param ranges 范围数组:[NSValue valueWithRange:NSRange]
 *
 *  @return 转换后的富文本（NSMutableAttributedString）
 */
- (NSMutableAttributedString *)changeColor:(UIColor *)color andRanges:(NSArray<NSValue *> *)ranges;

/**
 *  改变多段字符串为同一大小
 *
 *  @param font   字体大小
 *  @param ranges 范围数组:[NSValue valueWithRange:NSRange]
 *
 *  @return 转换后的富文本（NSMutableAttributedString）
 */
- (NSMutableAttributedString *)changeFont:(UIFont *)font andRanges:(NSArray<NSValue *> *)ranges;

@end
