/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:41:20 by vandre            #+#    #+#             */
/*   Updated: 2024/09/10 12:50:04 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_name = "Default ScavTrap";
	_hit = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "Default ScavTrap create" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hit = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "ScavTrap " << _name << " create" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << ScavTrap::_name << " destructed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (ScavTrap::_energy != 0 || ScavTrap::_hit > 0 ) 
	{
		std::cout << "ScavTrap " << ScavTrap::_name << " attacks " << target << ", causing " << ScavTrap::_attack << " points of damage!" << std::endl;
		ScavTrap::_energy--;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}