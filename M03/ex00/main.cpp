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
    ClapTrap obj1("robot");
    
    obj.attack("Me");
    obj1.attack("another");
    return 0;
}