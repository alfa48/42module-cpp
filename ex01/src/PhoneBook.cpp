/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manandre <manandre@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-02 13:43:34 by manandre          #+#    #+#             */
/*   Updated: 2025-04-02 13:43:34 by manandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string PhoneBook::getFirstName(int index)
{
	return PhoneBook::contacts[index].getFirstName();
}

std::string PhoneBook::getLastName(int index)
{
	return PhoneBook::contacts[index].getLastName();
}

std::string PhoneBook::getNickname(int index)
{
	return PhoneBook::contacts[index].getNickname();
}

std::string PhoneBook::getPhoneNumber(int index)
{
	return PhoneBook::contacts[index].getPhoneNumber();
}

void truncateAndReplace(std::string &str)
{
	if (str.length() > MaxIndex + 1)
	{
		str.resize(MaxIndex);
		str += ".";
	}
}

void PhoneBook::listPhoneBook()
{
	std::string separator = "+----------+----------+----------+----------+\n";
	std::cout << separator
			  << std::right
			  << "|" << std::setw(10) << "Index"
			  << "|" << std::setw(10) << "First Name"
			  << "|" << std::setw(10) << "Last Name"
			  << "|" << std::setw(10) << "Nick Name"
			  << "|\n"
			  << separator;
	for (int id = 0; id < MaxIndex; id++)
	{
		if (contacts[id].isUsed())
		{
			std::string firstname = getFirstName(id);
			truncateAndReplace(firstname);
			std::string lastname = getLastName(id);
			truncateAndReplace(lastname);
			std::string nickname = getNickname(id);
			truncateAndReplace(nickname);

			std::cout << "|" << std::setw(10) << id
					  << "|" << std::setw(10) << firstname
					  << "|" << std::setw(10) << lastname
					  << "|" << std::setw(10) << nickname
					  << "|" << std::endl;
		}
	}
	std::cout << separator;
}

void PhoneBook::printContactId(int index)
{
	contacts[index].showContact();
}