#include <iostream>
#include <cmath>

int main()
{
	double people;
	std::cin >> people;
	double tax, bedPrice, umbrellaPrice;
	std::cin >> tax >> bedPrice >> umbrellaPrice;

	double totalTax = people * tax;
	double umbrellaNum = ceil(people / 2);
	double totalUmbrellaPrice = umbrellaNum * umbrellaPrice;
	double bedNum = ceil(0.75 * people);
	double totalBedPrice = bedNum * bedPrice;
	double total = totalTax + totalUmbrellaPrice + totalBedPrice;

	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);

	std::cout << total << " lv.";

	return 0;		
}