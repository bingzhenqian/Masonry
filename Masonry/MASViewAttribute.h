//
//  MASViewAttribute.h
//  Masonry
//
//  Created by Jonas Budelmann on 21/07/13.
//  Copyright (c) 2013 cloudling. All rights reserved.
//

#import "MASUtilities.h"

/**
 *  An immutable tuple which stores the view and the related NSLayoutAttribute.
 *  Describes part of either the left or right hand side of a constraint equation
 */
@interface MASViewAttribute : NSObject
//MASViewAttribute 封装了 view 对象view和NSLayoutAttribute属性
/**
 *  The view which the reciever relates to. Can be nil if item is not a view.
 */

//相对约束对象
@property (nonatomic, weak, readonly) MAS_VIEW *view;

/**
 *  The item which the reciever relates to.
 */
//该对象可以被约束的部分 
@property (nonatomic, weak, readonly) id item;

/**
 *  The attribute which the reciever relates to
 */
//约束属性
@property (nonatomic, assign, readonly) NSLayoutAttribute layoutAttribute;

/**
 *  Convenience initializer.
 */
//初始化方法
- (id)initWithView:(MAS_VIEW *)view layoutAttribute:(NSLayoutAttribute)layoutAttribute;

/**
 *  The designated initializer.
 */
- (id)initWithView:(MAS_VIEW *)view item:(id)item layoutAttribute:(NSLayoutAttribute)layoutAttribute;

/**
 *	Determine whether the layoutAttribute is a size attribute
 *
 *	@return	YES if layoutAttribute is equal to NSLayoutAttributeWidth or NSLayoutAttributeHeight
 */
//判断是否NSLayoutAttributeWidth或者NSLayoutAttributeHeight，因为这两个约束直接添加到当前view，即item
- (BOOL)isSizeAttribute;

@end
