/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:50:43 by vandre            #+#    #+#             */
/*   Updated: 2024/09/12 11:15:44 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	Animal::_type = "animal";
	std::cout << "1 animal create" << std::endl;
}

Animal::~Animal()
{
	
}

void Animal::makeSound() const
{
	std::cout << "i am an animal and i make sound" << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}