#include "constants.h"
#include <iostream>

void calculateHeight(double initialHeight)
{
	int zzz{ 1 };
	for (int seconds{ 0 }; seconds < zzz; ++seconds)
	{
		double distanceFallen{ myConstants::gravity * seconds * seconds / 2 };
		double heightNow{ initialHeight - distanceFallen };
		++zzz;

		// Проверка на проваливание под землю;
		if (heightNow < myConstants::groundSurface)
		{
			std::cout << myConstants::groundSurface << '\n';
			break;
		}
		else
		{
			std::cout << heightNow << " Sec: " << seconds << '\n';
		}
	}
}