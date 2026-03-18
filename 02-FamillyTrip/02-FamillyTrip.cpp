#include <iostream>

int main()
{
	double budget;
	std::cin >> budget;
	int nights;
	std::cin >> nights;
	double nightPrice;
	std::cin >> nightPrice;
	double percentExpenses;
	std::cin >> percentExpenses;

	if (nights > 7)
	{
		nightPrice *= 0.95;
	}

	double totalNightsPrice = nights * nightPrice;
	double expenses = (percentExpenses / 100) * budget;
	double totalExpenses = totalNightsPrice + expenses;

	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);

	if (budget >= totalExpenses)
	{
		std::cout << "Ivanovi will be left with "
			<< budget - totalExpenses
			<< " leva after vacation.";
	}
	else
	{
		std::cout << totalExpenses - budget
			<< " leva needed.";
	}

	return 0;
}
	