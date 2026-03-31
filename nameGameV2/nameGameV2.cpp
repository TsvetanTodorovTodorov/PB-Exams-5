#include <iostream>
#include <string>

int main()
{
	std::string name;
	std::getline(std::cin, name);

	int winnerPoints = 0;
	int currPoints = 0;

	std::string winner = "";
	std::string currPlayer = "";

	while (name != "Stop")
	{

		int nameLength = name.length();

		for (int i = 0; i < nameLength; i++)
		{
			int number;
			std::cin >> number;
			std::cin.ignore();

			int ascii = name[i];

			if (number == ascii)
			{
				currPoints += 10;
			}
			else
			{
				currPoints += 2;
			}

		}

		if (winnerPoints == 0)
		{
			winnerPoints = currPoints;
			currPoints = 0;
			winner = name;
		}
		else if (currPoints >= winnerPoints)
		{
			winnerPoints = currPoints;
			currPoints = 0;
			winner = name;
		}

		currPoints = 0;
		std::getline(std::cin, name);
	}

		std::cout << "The winner is " << winner
			<< " with " << winnerPoints << " points!";

	return 0;
}