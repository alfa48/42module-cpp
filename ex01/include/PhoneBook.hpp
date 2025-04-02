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
# define PHONE_BOOK_HPP

#include <iostream>
#include "header.hpp"

class PhoneBook{
    Contact contatos[MaxIndex];

    private:
        std::string getFistName(int index){};
        std::string getLastName(int index){};
        std::string getNickname(int index){};
        std::string getPhoneNumber(int index){};
        std::string getDarkestSecret(int index){};

    public:
        void setContactId(){};

};

#endif