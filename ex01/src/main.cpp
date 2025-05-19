/*
 * HEADER 42 MANNADRE
 *
 * */

#include <unistd.h>
#include <stdio.h>
#include "PhoneBook.hpp"

// utils
bool isOnlySpaces(const std::string &str)
{
	unsigned int i = 0;
	while (i < str.length())
	{
		if (str[i] != ' ')
			return false;
		i++;
	}
	return true;
}

int main(void)
{
	std::cout << "Your PhoneBook\n";
	sleep(3);
	std::system("clear");

	while (1)
	{
		std::system("clear");
		std::cout << "Please input option...\n";
		std::string input;
		std::cin >> input;
		std::system("clear");
		if (input == "ADD")
		{
			std::string firstName;
			std::string lastName;
			std::string phoneNumber;

			std::cout << "[ADD]\n";
			sleep(1);
			std::system("clear");
			std::cout << "Enter your firstName:\n";
			std::cin.ignore();
			while (firstName.empty() || isOnlySpaces(firstName))
			{
				std::getline(std::cin, firstName);
				if (firstName.empty() || isOnlySpaces(firstName))
				{
					std::cout << "your don't have empty first name.\nPlease enter you first name:\n";
					std::getline(std::cin, firstName);
				}
			}

			std::cout << "Enter your lastName:\n";
			while (firstName.empty() || isOnlySpaces(lastName))
			{
				std::getline(std::cin, lastName);
				if (lastName.empty() || isOnlySpaces(lastName))
				{
					std::cout << "your don't have empty lastName.\nPlease enter you lastName:\n";
					std::getline(std::cin, lastName);
				}
			}

			std::cout << "Your first name is: " << firstName << "and Your last name is: " << lastName << std::endl;
			sleep(2);
		}
		else if (input == "SEARCH")
		{
			std::cout << "voce digitou SEARCH\n";
		}
		else if (input == "EXIT")
		{
			std::cout << "voce digitou EXIT\n";
			return (0);
		}
	}
}