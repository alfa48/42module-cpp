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

bool isNum(std::string input)
{
	bool rs = true;
	for (size_t i = 0; i < input.length(); ++i)
	{
		if (!isdigit(input[i]))
		{
			rs = false;
			break;
		}
	}
	return rs;
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
		std::cout << "[ADD]/[SEARCH]/[EXIT]: ";

		std::string input;
		std::cin >> input;
		std::system("clear");
		if (input == "ADD")
		{

			while (phonebook.isContactUsed(index))
			{
				if (index == MaxIndex)
				{
					index = 0;
					break;
				}
				index++;
			}

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
					std::cout << "First name don't have empty.\nPlease enter first name: ";
				}
			}

			std::cout << "Enter last name: ";
			while (firstName.empty() || isOnlySpaces(lastName))
			{
				std::getline(std::cin, lastName);
				if (lastName.empty() || isOnlySpaces(lastName))
				{
					std::cout << "Last name don't have empty.\nPlease enter last name: ";
				}
			}

			std::cout << "Enter nickname: ";
			while (nickName.empty() || isOnlySpaces(nickName))
			{
				std::getline(std::cin, nickName);
				if (nickName.empty() || isOnlySpaces(nickName))
				{
					std::cout << "Nickname don't have empty.\nPlease enter nickname: ";
				}
			}

			std::cout << "Enter phone number: ";
			while (phoneNumber.empty() || isOnlySpaces(phoneNumber))
			{
				std::getline(std::cin, phoneNumber);
				if (phoneNumber.empty() || isOnlySpaces(phoneNumber))
				{
					std::cout << "Phone number don't have empty.\nPlease enter phone number: ";
				}
			}

			std::cout << "Enter darkest secret: "; // pode estar emply
			while (darkestSecret.empty() || isOnlySpaces(darkestSecret))
			{
				std::getline(std::cin, darkestSecret);
				/*if (darkestSecret.empty() || isOnlySpaces(darkestSecret))
				{
					std::cout << "darkest secret don't have empty.\nPlease enter darkest secret:\n";
				}*/
			}

			// std::cout << "Your first name is: " << firstName << "and Your last name is: " << lastName << std::endl;
			sleep(1);
			phonebook.setContactIndex(index, firstName, lastName, nickName, phoneNumber, darkestSecret);
		}
		else if (input == "SEARCH")
		{
			std::system("clear");
			phonebook.ListPhoneBook();
			std::cout << "\nenter the index for complete information: ";
			std::string input;
			std::cin >> input;
			const char *input2 = input.c_str();
			int ptr = atoi(input2);
			if (!isNum(input) || ptr < 0 || ptr > 7 || !phonebook.isContactUsed(ptr))
			{
				std::cout << "Invalid index. \n";
				sleep(1);
				std::system("clear");
				continue;
			}
			std::system("clear");
			phonebook.showContactIndex(ptr);
			std::cout << "\nType something to exit: \n";
			std::cin >> input;
		}
		else if (input == "EXIT")
		{
			std::cout << "Exit Your PhoneBook\n";
			sleep(1);
			return (0);
		}
	}
}