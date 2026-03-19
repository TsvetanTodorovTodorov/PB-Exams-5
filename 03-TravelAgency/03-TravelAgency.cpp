#include <iostream>

int main()
{
	std::string town, package, vip;
	std::cin >> town >> package >> vip;
	int days;
	std::cin >> days;

	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);

	double pricePerDay = 0.0;

	if (days > 7)
	{
		days -= 1;
	}
	else if (days < 1)
	{
		std::cout << "Days must be positive number!";
		return 0;
	}

	if (town == "Bansko" || town == "Borovets")
	{
		if (package == "withEquipment")
		{
			pricePerDay = 100;
			if (vip == "yes")
			{
				pricePerDay *= 0.9;
			}
		}
		else if (package == "noEquipment")
		{
			pricePerDay = 80;
			if (vip == "yes")
			{
				pricePerDay *= 0.95;
			}
		}
		else
		{
			std::cout << "Invalid input!";
			return 0;
		}
	}
	else if (town == "Varna" || town == "Burgas")
	{
		if (package == "withBreakfast")
		{
			pricePerDay = 130;
			if (vip == "yes")
			{
				pricePerDay *= 0.88;
			}
		}
		else if (package == "noBreakfast")
		{
			pricePerDay = 100;
			if (vip == "yes")
			{
				pricePerDay *= 0.93;
			}
		}
		else
		{
			std::cout << "Invalid input!";
			return 0;
		}
	}
	else
	{
		std::cout << "Invalid input!";
		return 0;
	}

	double total = pricePerDay * days;

	std::cout << "The price is " << total
		<< "lv! Have a nice time!";

	return 0;
}