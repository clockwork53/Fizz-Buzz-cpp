// Fizz Fuzz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


bool startPrompt();
void runFizzFuzz(int = 100);

int main()
{
	if (startPrompt)
		runFizzFuzz();
	
    return 0;
}

bool startPrompt()
{
	while (true)
	{
		char holder;
		std::cout << "Start ? (Y/N)" << std::endl;
		std::cin >> holder;
		std::cin.get();
		switch (holder)
		{
		case 'Y':
		case 'y':
			return true;
			break;
		case 'N':
		case 'n':
			return false;
			break;
		default:
			std::cout << "Wrong Input! Please answer with y/n" << std::endl;
			continue;
		}
	}
}

void runFizzFuzz(int length)
{
	for (int i = 1; i <= length; i++)
	{
		if (!(i % 3 == 0 || i % 5 == 0))
			std::cout << i << std::endl;
		else if (i % 3 == 0 && i % 5 != 0)
			std::cout << "Fizz" << std::endl;
		else if (i % 3 != 0 && i % 5 == 0)
			std::cout << "Fuzz" << std::endl;
		else
			std::cout << "FizzFuzz" << std::endl;
	}
}