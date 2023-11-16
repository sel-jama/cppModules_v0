/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 04:11:17 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/16 00:37:29 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
        int LastIdea;
        
    public:
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        const std::string getIdea(int i) const;
        void setIdea(const std::string idea);
        ~Brain();
};

#endif