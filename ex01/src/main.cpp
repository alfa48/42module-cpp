/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manandre <manandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 20:24:04 by manandre          #+#    #+#             */
/*   Updated: 2025/05/29 20:40:49 by manandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "PhoneBook.hpp"

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
			while (phoneNumber.empty() || isOnlySpaces(phoneNumber) || isValidNumber(phoneNumber))
			{
				std::getline(std::cin, phoneNumber);
				if (phoneNumber.empty() || isOnlySpaces(phoneNumber))
				{
					std::system("clear");
					std::cout << "Invalid phone number\nPlease enter phone number: ";
				}
			}

			std::cout << "Enter darkest secret: ";
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
			std::cout << "\nType index for full informations: ";
			std::string input;
			std::cin >> input;
			const char *input2 = input.c_str();

			int id = atoi(input2);

			if (!isValidNumber(input) || id < 0 || id > MaxIndex || !phonebook.isContactUsed(id))
			{
				std::cout << "Invalid index\n";
				sleep(1);
				std::system("clear");
				continue;
			}

			std::system("clear");
			phonebook.printContactId(id);
			std::cin.ignore(10000, '\n');
			std::cout << "Press Enter to continue...";
			std::cin.get();
		}
		else if (input == "EXIT")
		{
			std::cout << "Exit Your PhoneBook\n";
			sleep(1);
			return (0);
		}
	}
}
