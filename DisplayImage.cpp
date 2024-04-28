#include <opencv2/opencv.hpp>
#include <stdio.h>

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		printf("\n\n\tusage: <application name> <Image File Path> \n\n");
		
		return -1;
	}

	cv::Mat img;
	img = cv::imread(argv[1], 1);

	if (!img.data)
	{
		printf("\n\n\tNo image data.\n\n");

		return -1;
	}

	cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);
	cv::imshow("Display Image",img);
	cv::waitKey(0);

	return 0;
};
