/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manandre <manandre@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-02 13:20:30 by manandre          #+#    #+#             */
/*   Updated: 2025-04-02 13:20:30 by manandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//constructor
Contact::Contact(std::string fistName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret){
    this->firstName = fistName;
    this->lastName = lastName;
    this->nickname = nickname;
    this->phoneNumber = phoneNumber;
    this->darkestSecret = darkestSecret;
    this->isUsed = 1;
}

//getters
std::string Contact::getFirstName(){
    return (this->firstName);
}

std::string Contact::getLastName(){
    return (this->lastName);
}

std::string Contact::getNickname(){
    return (this->nickname);
}

std::string Contact::getPhoneNumber(){
    return (this->phoneNumber);
}

std::string Contact::getDarkestSecret(){
    return (this->darkestSecret);
}

//setters
void Contact::setFirstName(std::string firstName){
    this->firstName = firstName;
}

void Contact::setLastName(std::string lastName){
    this->lastName = lastName;
}

void Contact::setNickname(std::string nickname){
    this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber){
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret){
    this->darkestSecret = darkestSecret;
}

int Contact::isUsed(){
    return this->isUsed;
}