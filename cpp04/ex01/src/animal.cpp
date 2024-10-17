/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:50:43 by vandre            #+#    #+#             */
/*   Updated: 2024/09/12 19:16:16 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

9#include "../include/Animal.hpp"

Animal::Animal()
{
	Animal::_type = "animal";
	std::cout << "create an animal" << std::endl;
}

Animal::~Animal()
{
	std::cout << "destroyed an animal" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "animal made sound" << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}