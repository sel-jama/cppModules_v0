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
    
    obj.setName("CLAP1");
    obj.attack("CLAP2");
    obj.takeDamage(3);
    obj.beRepaired(2);

    ClapTrap obj1( obj );
    obj1.attack("another");
    return 0;
}