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

std::string PhoneBook::getFirstName(int index){
    return PhoneBook::contacts[index].getFirstName();
}

std::string PhoneBook::getLastName(int index){
    return PhoneBook::contacts[index].getLastName();
}

std::string PhoneBook::getNickname(int index){
    return PhoneBook::contacts[index].getNickname();
}

std::string PhoneBook::getPhoneNumber(int index){
    return PhoneBook::contacts[index].getPhoneNumber();
}

void TruncateAndReplace(std::string &str) {
	if (str.length() > MaxIndex + 1) {
		str.resize(MaxIndex);
		str += ".";
	}
}

void PhoneBook::ListPhoneBook(){
	std::string separator = "+----------+----------+----------+----------+\n";
	std::cout << separator
		    << std::right
		    << "|" << std::setw(10) << "Index"
		    << "|" << std::setw(10) << "First Name"
		    << "|" << std::setw(10) << "Last Name"
		    << "|" << std::setw(10) << "Nick Name"
		    << "|\n" << separator;
	for (int id = 0; contacts[id].isUsed(); id++) {
		std::string firstname = getFirstName(id);
		TruncateAndReplace(firstname);
		std::string lastname = getLastName(id);
		TruncateAndReplace(lastname);
		std::string nickname = getNickname(id);
		TruncateAndReplace(nickname);
		std::cout << "|" << std::setw(10) << id
			    << "|" << std::setw(10) << firstname
			    << "|" << std::setw(10) << lastname
			    << "|" << std::setw(10) << nickname
			    << "|" << std::endl;
	}
	std::cout << separator;
}