#include "convertImageToASCII.h"

int main()
{
	std::string path = "/repos/imageToASCII/imageToASCII/heart.jpg";
	convertToASCII* img = new convertToASCII(path);
	
	if (img->getImage().empty()) {
		std::cout << "Can not find an image" << std::endl;
		return 0;
	}

	img->imagetoASCII();
	img->displayOutput();
	img->showImage("window", img->getImage());

	return 1;
}