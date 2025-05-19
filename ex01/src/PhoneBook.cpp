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

std::string PhoneBook::getFistName(int index){
    return PhoneBook::contats[index].getFirstName();
}

std::string PhoneBook::getLastName(int index){
    return PhoneBook::contats[index].getLastName();
}

std::string PhoneBook::getNickname(int index){
    return PhoneBook::contats[index].getNickname();
}

std::string PhoneBook::getPhoneNumber(int index){
    return PhoneBook::contats[index].getPhoneNumber();
}

void setContactIndex(int index, std::string first, std::string last, std::string nick, std::string number, std::string secret){

}