/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:57:44 by vandre            #+#    #+#             */
/*   Updated: 2024/09/12 11:48:04 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "Mauvais Chat";
	std::cout << "Created wrong cat" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "wrong cat destroyed" << std::endl;
} 

void WrongCat::makeSound() const
{
	std::cout << "Miahooo wrong cat" << std::endl;
}