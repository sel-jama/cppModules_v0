/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 04:27:32 by sel-jama          #+#    #+#             */
/*   Updated: 2023/10/31 04:32:33 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string Name )
{
    Zombie *horde;

    std::cout << "\nPrepare for the horde: " << N << " zombies incoming ...\n" << std::endl;
    horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        horde[i] = Zombie(Name);
        // horde[i].name = Name;
    }
    return horde;
}
