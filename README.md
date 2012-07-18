## JPPageControl Library Files

First import the control into your the code file of your choice

	#import "JPPageControl.h"

Once you have imported this header, if you have 2 options.  If you are using a XIB file, you must go select the UIPageControl object and select the Custom Class as JPPageControl, then add the following to your code in the file you imported the JPPageControl into

	[pageControl setImageNormal:[UIImage imageNamed:@"normal.png"]];
	[pageControl setImageCurrent:[UIImage imageNamed:@"current.png"]];

If you are creating from code you can call the control like so:

	JPPageControl *pageControl = [[JPPageControl alloc] init];
	[pageControl ...];
	[pageControl setImageNormal:[UIImage imageNamed:@"normal.png"]];
	[pageControl setImageCurrent:[UIImage imageNamed:@"current.png"]];

	[self.view addSubview:pageControl];

If you have any questions, let me me know.