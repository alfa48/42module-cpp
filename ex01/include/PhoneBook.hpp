/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manandre <manandre@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-02 13:43:13 by manandre          #+#    #+#             */
/*   Updated: 2025-04-02 13:43:13 by manandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>
#include "header.hpp"

class PhoneBook
{
private:
    Contact contacts[MaxIndex];

private:
    std::string getFirstName(int index);
    std::string getLastName(int index);
    std::string getNickname(int index);
    std::string getPhoneNumber(int index);
    std::string getDarkestSecret(int index);

public:
    void setContactIndex(int index, std::string first, std::string last, std::string nick, std::string number, std::string secret)
    {
        contacts[index].setFirstName(first);
        contacts[index].setLastName(last);
        contacts[index].setNickname(nick);
        contacts[index].setPhoneNumber(number);
        contacts[index].setDarkestSecret(secret);
        contacts[index].usedContact();
    }

    int isContactUsed(int index){
        return contacts[index].isUsed();
    }

    void ListPhoneBook();   
};

#endif