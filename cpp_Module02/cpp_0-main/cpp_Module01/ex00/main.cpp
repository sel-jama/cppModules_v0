/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:35:43 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/01 08:36:03 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main()
{
        std::cout << "Zombies having brain snack ..in the stack\n" << std::endl;

        randomChump("Random");

        std::cout << std::endl ;
        std::cout << "Zombies of the heap graveyard\n" << std::endl;

        Zombie* z1 = newZombie("Ava");
        z1->announce();
        delete z1;

}