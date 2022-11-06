#include "swapFx.h"

void swapFx::inputSwap(int& hinkwu, int& pipiro)
{
	std::cout << "Enter the values for hinkwu" << endl;
	std::cin >> hinkwu;
	std::cout << "Enter the values for pipiro" << endl;
	std::cin >> pipiro;
}

void swapFx::swapFxp(int &hinkwu, int &pipiro)
{
	int panteree;

	panteree = hinkwu;
	hinkwu = pipiro;
	pipiro = panteree;
}

void swapFx::displaySwapBefore(int &hinkwu, int &pipiro)
{
	std::cout << "Before - hinkwu is: " << hinkwu << " while pipiro is: " << pipiro << endl;

}

void swapFx::displaySwapAfter(int& hinkwu, int& pipiro)
{

	std::cout << "After - hinkwu is: " << hinkwu << " while pipiro is: " << pipiro << endl;
}