#include <iostream>
#include <string>

int main()
{
	std::string name;
	std::getline(std::cin, name);

	int currPoints = 0; // for Player 1
	int newPoints = 0; // for Player 2

	std::string player1 = "";
	std::string player2 = "";

	while (name != "Stop")
	{
		if (player1 == "")
		{
			player1 = name;
		}
		else
		{
			player2 = name;
		}

		int nameLength = name.length();

		for (int i = 0; i < nameLength; i++)
		{
			int number;
			std::cin >> number;
			std::cin.ignore();

			int ascii = name[i];

			if (number == ascii)
			{
				newPoints += 10;
			}
			else
			{
				newPoints += 2;
			}
			
		}

		if (currPoints == 0)
		{
			currPoints = newPoints;
			newPoints = 0;
		}

		std::getline(std::cin, name);
	}

	if (currPoints == newPoints || newPoints > currPoints)
	{
		std::cout << "The winner is " << player2
			<< " with " << newPoints << " points!";
	}
	else if (currPoints > newPoints)
	{
		std::cout << "The winner is " << player1
			<< " with " << currPoints << " points!";
	}


	return 0;
}