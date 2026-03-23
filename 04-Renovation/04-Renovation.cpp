#include <iostream>
#include <cmath>
#include <string>

int main()
{
	double height, width, percent;
	std::cin >> height >> width >> percent;
	std::string action;
	std::cin >> action;

	double area = height * width * 4;
	area -= (percent / 100) * area;

	double paintDone = 0.0;

	while (action != "Tired!")
	{
		double paint = stoi(action);

		paintDone += paint;

		if (paintDone > area)
		{
			std::cout << "All walls are painted and you have "
				<< ceil(paintDone - area) << " l paint left!";
			return 0;
		}
		else if (paintDone == area)
		{
			std::cout << "All walls are painted! Great job, Pesho!";
			return 0;
		}

		std::cin >> action;
	}

	std::cout << ceil(area - paintDone) << " quadratic m left.";

	return 0;
}