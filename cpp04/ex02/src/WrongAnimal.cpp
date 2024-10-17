/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:17:25 by vandre            #+#    #+#             */
/*   Updated: 2024/09/12 11:48:18 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "wrong animal";
	std::cout << "created a wrong animal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "wrong animal destroyed" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Grzgrzzz wrong animal..." << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}