#include <iostream>
#include <string>
#include <cmath>
#include <climits>

int main()
{
	std::string word;
	std::getline(std::cin, word);

	int theMostPowerful = INT_MIN;
	std::string theWord = "";

	while (word != "End of words")
	{
		int wordLength = word.length();
		int wordSum = 0;

		for (int i = 0; i < wordLength; i++)
		{
			int ascii = word[i];
			wordSum += ascii;
		}

		char first = tolower(word[0]);

		if (first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u' || first == 'y')
		{
			wordSum *= wordLength;
		}
		else
		{
			wordSum /= wordLength;
		}


		if (wordSum > theMostPowerful)
		{
			theMostPowerful = wordSum;
			theWord = word;
		}

		std::getline(std::cin, word);
	}

	std::cout << "The most powerful word is " << theWord << " - " << theMostPowerful << std::endl;

	return 0;
}