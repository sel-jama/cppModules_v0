/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 04:27:15 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/02 07:12:15 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombies = zombieHorde(5, "Jim");

    for (int i = 0; i < 5; i++){
        zombies[i].announce();
    }
    delete[] zombies;
    
    return 0;
}