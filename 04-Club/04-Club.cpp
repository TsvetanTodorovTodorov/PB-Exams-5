#include <iostream>
#include <string>

int main()
{
	double goal;
	std::cin >> goal;
	std::cin.ignore();
	std::string cocktail;
	std::getline(std::cin, cocktail);
	double income = 0.0;

	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);

	while (cocktail != "Party!")
	{
		int cocktailsCount;
		std::cin >> cocktailsCount;
		std::cin.ignore();
		int pricePerDrink = cocktail.length();
		int price = cocktailsCount * pricePerDrink;

		if (price % 2 != 0)
		{
			income += price * 0.75;
		}
		else
		{
			income += price;
		}

		if (income >= goal)
		{
			std::cout << "Target acquired.\n";
			break;
		}

		std::getline(std::cin, cocktail);
	}

	if (cocktail == "Party!")
	{
		std::cout << "We need " << goal - income << " leva more.\n";
	}
	std::cout << "Club income - " << income << " leva.";
	return 0;
}
