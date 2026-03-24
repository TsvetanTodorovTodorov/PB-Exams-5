#include <iostream>
#include <string>

int main()
{
	std::string footballClub;
	std::getline(std::cin, footballClub);
	int matches;
	std::cin >> matches;

	if (matches == 0)
	{
		std::cout << footballClub
			<< " hasn't played any games during this season.";
		return 0;
	}

	char result;

	int points = 0;
	int winCount = 0;
	int drawCount = 0;
	int loseCount = 0;

	for (int i = 0; i < matches; i++)
	{
		std::cin >> result;
		if (result == 'W')
		{
			points += 3;
			winCount++;
		}
		else if (result == 'D')
		{
			points += 1;
			drawCount++;
		}
		else if (result == 'L')
		{
			loseCount++;
		}
	}

	std::cout << footballClub
		<< " has won " << points
		<< " points during this season." << std::endl;
	std::cout << "Total stats:" << std::endl;
	std::cout << "## W: " << winCount << std::endl;
	std::cout << "## D: " << drawCount << std::endl;
	std::cout << "## L: " << loseCount << std::endl;

	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);

	double percentageOfWins = (winCount * 1.0 / matches) * 100;
	std::cout << "Win rate: " << percentageOfWins << "%";

	return 0;
}