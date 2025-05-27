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

bool isValidNumber(const std::string &str)
{
	if (str.empty())
		return false;
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

int main(void)
{
	std::cout << "Your PhoneBook\n";
	sleep(1);
	std::system("clear");
	PhoneBook phonebook;
	int index = 0;

	while (1)
	{
		std::system("clear");
		std::cout << "Please input option...\n";
		std::cout << "ADD; SEARCH; EXIT\n";

		std::string input;
		std::cin >> input;
		std::system("clear");
		if (input == "ADD")
		{
			std::cout << "DEBUG::::::: " << index << std::endl;

			// lógica circular

			std::string firstName;
			std::string lastName;
			std::string nickName;
			std::string darkestSecret;
			std::string phoneNumber;

			std::cout << "[ADD]\n";
			sleep(1);
			std::system("clear");
			std::cout << "Enter first name: ";
			std::cin.ignore();
			while (firstName.empty() || isOnlySpaces(firstName))
			{
				std::getline(std::cin, firstName);
				if (firstName.empty() || isOnlySpaces(firstName))
				{
					std::system("clear");
					std::cout << "First name don't have empty.\nPlease enter first name: ";
				}
			}

			std::cout << "Enter last name: ";
			while (firstName.empty() || isOnlySpaces(lastName))
			{
				std::getline(std::cin, lastName);
				if (lastName.empty() || isOnlySpaces(lastName))
				{
					std::system("clear");
					std::cout << "Last name don't have empty.\nPlease enter last name: ";
				}
			}

			std::cout << "Enter nickname: ";
			while (nickName.empty() || isOnlySpaces(nickName))
			{
				std::getline(std::cin, nickName);
				if (nickName.empty() || isOnlySpaces(nickName))
				{
					std::system("clear");
					std::cout << "Nickname don't have empty.\nPlease enter nickname: ";
				}
			}

			std::cout << "Enter phone number: ";
			while (phoneNumber.empty() || isOnlySpaces(phoneNumber))
			{
				std::getline(std::cin, phoneNumber);
				if (phoneNumber.empty() || isOnlySpaces(phoneNumber))
				{
					std::system("clear");
					std::cout << "Phone number don't have empty.\nPlease enter phone number: ";
				}
			}

			std::cout << "Enter darkest secret: "; // pode estar emply
			std::getline(std::cin, darkestSecret);

			phonebook.setContactIndex(index, firstName, lastName, nickName, phoneNumber, darkestSecret);
			index = (index + 1) % MaxIndex;
			std::cout << "contact added successfully\n";
			sleep(1);
		}
		else if (input == "SEARCH")
		{
			std::system("clear");
			phonebook.listPhoneBook();
			std::cout << "\nType id for full informations: ";
			std::string input;
			std::cin >> input;
			const char *input2 = input.c_str();

			int id = atoi(input2);

			if (!isValidNumber(input) || id < 0 || id > 7 || !phonebook.isContactUsed(id))
			{
				std::cout << "Invalid index\n";
				sleep(1);
				std::system("clear");
				continue;
			}

			std::system("clear");
			phonebook.printContactId(id);
			sleep(3);
		}
		else if (input == "EXIT")
		{
			std::cout << "EXIT Your PhoneBook\n";
			sleep(1);
			return (0);
		}
	}
}