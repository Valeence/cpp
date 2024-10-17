/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:58:06 by vandre            #+#    #+#             */
/*   Updated: 2024/09/12 19:08:48 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	_type = "Chien";
	std::cout << "create a dog " << std::endl;
	_brain = new Brain();
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Ouaf Ouaf" << std::endl;
}
