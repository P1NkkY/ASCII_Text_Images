#ifndef CONVERT_TO_ASCII
#define CONVERT_TO_ASCII

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include "opencv2/opencv.hpp"
#include "opencv2/imgproc.hpp"

class convertToASCII
{
public:
	/* Constructor */
	convertToASCII(const std::string& filename);
	/* Convertation image to ASCII*/
	void imagetoASCII();
	/* Show window with image */
	void showImage(const std::string& windowName, const cv::Mat& image);
	/* Display ASCII image */
	void displayOutput() const;
	/* Getter */
	const cv::Mat getImage() { return this->image; };

private:
	cv::Mat image;				//!< Current image in RGB
	std::string outputASCII;	//!< ASCII image
	const std::string grayScale = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/\|()1{}[]?-_+~i!lI;:,\"^`. ";
};

#endif // !CONVERT_TO_ASCII