//
//  FSPageControl.h
//  SIMS
//
//  Created by James Petersen on 7/18/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JPPageControl : UIPageControl {
    UIImage* mImageNormal;
    UIImage* mImageCurrent;
}

@property (nonatomic, readwrite, retain) UIImage* imageNormal;
@property (nonatomic, readwrite, retain) UIImage* imageCurrent;

@end
