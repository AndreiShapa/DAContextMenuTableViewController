//
//  DAСontextMenuCell.h
//  DAContextMenuTableViewControllerDemo
//
//  Created by Daria Kopaliani on 7/24/13.
//  Copyright (c) 2013 Daria Kopaliani. All rights reserved.
//

#import <UIKit/UIKit.h>


@class DAContextMenuCell;

@protocol DAContextMenuCellDelegate <NSObject>

- (BOOL)shouldShowMenuOptionsViewInCell:(DAContextMenuCell *)cell;
- (void)contextMenuDidShowInCell:(DAContextMenuCell *)cell;
- (void)contextMenuCellDidSelectMoreOption:(DAContextMenuCell *)cell;
@optional
- (void)contextMenuCellDidSelectDeleteOption:(DAContextMenuCell *)cell;

@end


@interface DAContextMenuCell : UITableViewCell

@property (strong, nonatomic) NSString *moreOptionsButtonTitle;
@property (strong, nonatomic) NSString *deleteButtonTitle;
//@property (strong, nonatomic) UIColor *backgroundColor;
@property (assign, nonatomic) BOOL editable;
@property (readonly, assign, nonatomic, getter = isContextMenuHidden) BOOL contextMenuHidden;
@property (weak, nonatomic) id<DAContextMenuCellDelegate> delegate;

- (void)setMenuOptionsViewHidden:(BOOL)hidden animated:(BOOL)animated;

@end
