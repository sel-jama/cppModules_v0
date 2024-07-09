/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 04:27:32 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/02 07:12:41 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string Name )
{
    std::cout << "\nPrepare for the horde: " << N << " zombies incoming ...\n" << std::endl;
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
       new (&horde[i]) Zombie(Name);
    }
    return horde;
}
