/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:04:46 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/17 07:46:01 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    

    //additional tests
    ICharacter* other = new Character("other");
    other->unequip(0);
    other->unequip(10);
    
    //Create and equip more Materias
    AMateria* m;
    m = src->createMateria("cure");
    other->equip(m);
    m = src->createMateria("ice");
    other->equip(m);

    //using Materias
    ICharacter* spong = new Character("spong");
    other->use(0, *spong);
    other->use(1, *spong);
    other->use(2, *spong);
    other->use(3, *spong);

    // Unequip Materias
    other->unequip(0);
    other->unequip(1);

    //using Materias after unequipping
    other->use(0, *spong);
    other->use(1, *spong);
    
    delete other;
    delete spong;
    
    delete bob;
    delete me;
    delete src;


    // std::cout << "Deep copy tests" << std::endl;
    // Character* original = new Character("Original");
    // ICharacter* copy = new Character(*original);
    // copy->equip(m);
    // copy->use(0, *original);

   
    // Character* another = new Character("Another");
    // *another = *original;
    // another->use(0, *original);
    return 0;
}