#include <iostream>

int main()
{
	std::string bevarage, sugar;
	std::cin >> bevarage >> sugar;
	int number;
	std::cin >> number;

	double price = 0.0;

	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);

	if (bevarage == "Espresso")
	{
		if (sugar == "Without")
		{
			price = number * 0.9;
		}
		else if (sugar == "Normal")
		{
			price = number * 1;
		}
		else if (sugar == "Extra")
		{
			price = number * 1.20;
		}
	}
	else if (bevarage == "Cappuccino")
	{
		if (sugar == "Without")
		{
			price = number * 1;
		}
		else if (sugar == "Normal")
		{
			price = number * 1.2;
		}
		else if (sugar == "Extra")
		{
			price = number * 1.60;
		}
	}
	else if (bevarage == "Tea")
	{
		if (sugar == "Without")
		{
			price = number * 0.5;
		}
		else if (sugar == "Normal")
		{
			price = number * 0.6;
		}
		else if (sugar == "Extra")
		{
			price = number * 0.7;
		}
	}

	if (sugar == "Without")
	{
		price *= 0.65;
	}

	if (bevarage == "Espresso" && number >= 5)
	{
		price *= 0.75;
	}

	if (price > 15.00)
	{
		price *= 0.8;
	}


	std::cout << "You bought " << number << " cups of "
		<< bevarage << " for " << price << " lv.";

	return 0;
}