//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class WWKCustomerInfoHeadView;

@interface WWKCustomerInfoHeaderCell : UITableViewCell
{
    WWKCustomerInfoHeadView *_headerView;
}

+ (id)identifier;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHeadView:(id)arg1 withDataItems:(id)arg2 withCustomer:(scoped_refptr_da27765f)arg3;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

