/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 04:36:15 by sel-jama          #+#    #+#             */
/*   Updated: 2023/10/28 09:03:55 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() {
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
    std::string lvl[4];
    int index = -1;

    lvl[0] = "DEBUG";
    lvl[1] = "INFO";
    lvl[2] = "WARNING";
    lvl[3] = "ERROR";
    
    for (int i=0; i < 4; i++){
        if (lvl[i] == level)
            index = i;
    }
    switch (index)
    {
        void (Harl::*pmf)();
        case 0:
            pmf = &Harl::debug;
            (this->*pmf)();
            break;
        case 1:
            pmf = &Harl::info;
            (this->*pmf)();
            break ;
        case 2:
            pmf = &Harl::warning;
            (this->*pmf)();
            break ;
        case 3:
            pmf = &Harl::error;
            (this->*pmf)();
            break ;
        default:
            std::cout << "invalid input!!" << std::endl;
            break;
    }
}