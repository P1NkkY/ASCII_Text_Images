#include "convertImageToASCII.h"

convertToASCII::convertToASCII(const std::string& filename)
{
	this->image = cv::imread(filename);
}

void convertToASCII::imagetoASCII()
{
	const int scale = 4; //!< every pixel has [R, G, B, A]
	for (int iter = 0; iter < image.rows; iter += scale) {
		std::string text;
		for (int jter = 0; jter < image.cols; jter += scale) {
			cv::Vec3b color = image.at<cv::Vec3b>(iter, jter);
			int colorInt = (color[0] + color[1] + color[2]) / 3;
			// gray color in range 0 to 255
			text += grayScale[std::ceil((grayScale.size() - 1) * colorInt / 255)];
			text += grayScale[std::ceil((grayScale.size() - 1) * colorInt / 255)];
		}
		this->outputASCII += (text + "\n");
	}
}

void convertToASCII::showImage(const std::string& windowName, const cv::Mat& image)
{
	cv::imshow(windowName, image);
	cv::waitKey(0);
}

void convertToASCII::displayOutput() const
{
	std::cout << this->outputASCII << std::endl;
}
