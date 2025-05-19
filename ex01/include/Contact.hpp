/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manandre <manandre@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-31 11:27:31 by manandre          #+#    #+#             */
/*   Updated: 2025-03-31 11:27:31 by manandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>


class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
        int used;

    public:
        Contact(std::string firstName, std::string lastName,std::string nickname,std::string phoneNumber,std::string darkestSecret);
        ~Contact(){};

        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        std::string getPhoneNumber();
        std::string getDarkestSecret();

        void setFirstName(std::string fistName);
        void setLastName(std::string lastName);
        void setNickname(std::string nickName);
        void setPhoneNumber(std::string nickname);
        void setDarkestSecret(std::string darkestSecret);

        void showContact();
        int isUsed();
};

#endif