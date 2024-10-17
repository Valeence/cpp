/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:58:06 by vandre            #+#    #+#             */
/*   Updated: 2024/09/12 11:16:35 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	_type = "Chien";
	std::cout << "1 dog create" << std::endl;
}

Dog::~Dog()
{
	
}
void Dog::makeSound() const
{
	std::cout << "Ouaf Ouaf" << std::endl;
}