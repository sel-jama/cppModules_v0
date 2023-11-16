/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 03:20:50 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/16 07:55:14 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    const int arraySize = 2;
    Animal* animalArray[arraySize];

    for (int i = 0; i < arraySize / 2; ++i) {
        animalArray[i] = new Dog();
    }

    for (int i = arraySize / 2; i < arraySize; ++i) {
        animalArray[i] = new Cat();
    }
    
    // for (int i = 0; i < arraySize; ++i) {
    //     //make sounds
    // }
    
    for (int i = 0; i < arraySize; ++i) {
        delete animalArray[i];
    }
    
    //deep copy 
    Cat obj;
    obj.getBrain()->setIdea("Cat1");
    
    Cat obj1(obj);
    obj1.getBrain()->setIdea("Cat2");

    // std::cout << obj.getBrain()->getIdea(0) << std::endl;
    // std::cout << obj1.getBrain()->getIdea(1) << std::endl;
    
    // const Animal* j =  new Dog();
    // const Animal* i = new Cat();
    // delete j;//should not create a leak
    // delete i;ls
    
    return 0;
}