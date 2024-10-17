/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:57:44 by vandre            #+#    #+#             */
/*   Updated: 2024/09/12 11:16:20 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "Mauvais Chat";
	std::cout << "Wrong Cat create" << std::endl;
}

WrongCat::~WrongCat()
{
	
} 

void WrongCat::makeSound() const
{
	std::cout << "Miahooo wrong cat" << std::endl;
}