/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:22:58 by vandre            #+#    #+#             */
/*   Updated: 2024/09/03 00:20:31 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon() {
    this->w_type = "un pistoulet";
}

Weapon::~Weapon()
{

}

Weapon::Weapon(std::string type)
{
	this->w_type = type;
}

std::string const &Weapon::getType(void) const
{
    return this->w_type;
}

void Weapon::setType(std::string type)
{
    w_type = type;    
}