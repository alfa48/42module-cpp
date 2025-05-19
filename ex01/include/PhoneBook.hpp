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
    Contact contats[MaxIndex];

private:
    std::string getFistName(int index);
    std::string getLastName(int index);
    std::string getNickname(int index);
    std::string getPhoneNumber(int index);
    std::string getDarkestSecret(int index);

public:
    void setContactIndex(int index, std::string first, std::string last, std::string nick, std::string number, std::string secret)
    {
        contats[index].setFirstName(first);
        contats[index].setLastName(last);
        contats[index].setNickname(nick);
        contats[index].setPhoneNumber(number);
        contats[index].setDarkestSecret(secret);
    }

    int isContactUsed(index){
        return contats[index].isUsed();
    }   
};

#endif