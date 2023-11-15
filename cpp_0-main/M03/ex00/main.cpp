/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 00:38:19 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/10 01:22:05 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
    ClapTrap obj;
    
    obj.setName("Anonymous");
    obj.attack("CLAP");
    obj.takeDamage(3);
    obj.beRepaired(2);

    std::cout << std::endl;
    ClapTrap obj1( obj );
    obj1.attack("another");

    std::cout << std::endl;
    ClapTrap obj2("Other");
    obj2.takeDamage(20);
    obj2.attack("CLAP2");
    return 0;
}