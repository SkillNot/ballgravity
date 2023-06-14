#include "Myfunc.h"
#include "constants.h"
#include <iostream>


int main()
{
	std::cout << "Enter the initial height of the tower in meters: ";
	double initialHeight;
	std::cin >> initialHeight;

	calculateHeight(initialHeight);

	return 0;
}