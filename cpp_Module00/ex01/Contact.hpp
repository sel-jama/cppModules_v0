/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:28:05 by sel-jama          #+#    #+#             */
/*   Updated: 2023/10/27 01:07:10 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <limits>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;

    public:
         void set_contact(const std::string& first, const std::string& last,
                        const std::string& nick, const std::string& phone,
                        const std::string& secret);
        std::string get_first_name() const;
        std::string get_last_name() const;
        std::string get_nickname() const;
        std::string get_phone_number() const;
        std::string get_secret() const;

        int     is_digit(const std::string input);
        int     checkInput(const std::string& input, int num);
        void    validateLine(std::string& input, int num);

};

#endif

