/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:57:44 by vandre            #+#    #+#             */
/*   Updated: 2024/09/12 19:08:27 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{
	_type = "Chat";
	std::cout << "Create a cat" << std::endl;
	_brain = new Brain();
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "destroyed cat" << std::endl;
} 

void Cat::makeSound() const
{
	std::cout << "Miaouuu" << std::endl;
}
