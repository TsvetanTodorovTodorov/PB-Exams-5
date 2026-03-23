#include <iostream>
#include <string>

int main()
{
	int numberOfGames;
	std::cin >> numberOfGames;
	std::cin.ignore();

	double percentHearthstone = 0.0;
	double percentFortnite = 0.0;
	double percentOverwatch = 0.0;
	double percentOthers = 0.0;

	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);

	for (int i = 0; i < numberOfGames; i++)
	{
		std::string game;
		std::getline(std::cin, game);

		if (game == "Hearthstone")
		{
			percentHearthstone++;
		}
		else if (game == "Fornite")
		{
			percentFortnite++;
		}
		else if (game == "Overwatch")
		{
			percentOverwatch++;
		}
		else
		{
			percentOthers++;
		}

	}

	std::cout << "Hearthstone - " << (percentHearthstone / numberOfGames) * 100 << "%" << std::endl;
	std::cout << "Fornite - " << (percentFortnite / numberOfGames) * 100 << "%" << std::endl;
	std::cout << "Overwatch - " << (percentOverwatch / numberOfGames) * 100 << "%" << std::endl;
	std::cout << "Others - " << (percentOthers / numberOfGames) * 100 << "%" << std::endl;

	return 0;
}