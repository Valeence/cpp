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


ScavTrap::ScavTrap(const ScavTrap &cpy)
    : ClapTrap(cpy)
{
    std::cout << "ScavTrap " << cpy._name << " created by copy" << std::endl;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &cpy)
{
	if (this != &cpy)
	{
		_name = cpy._name;
		_hit = cpy._hit;
		_energy = cpy._energy;
		_attack = cpy._attack;
	}
	std::cout << "ScavTrap " << cpy._name << " create by operator" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << ScavTrap::_name << " destructed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energy > 0 && this->_hit > 0) {
    	std::cout << "ScavTrap " << this->_name << " attacks " << target
    	          << ", causing " << this->_attack << " points of damage!" << std::endl;
    	this->_energy--;
	}
	else
		std::cout << "ScavTrap " << _name << " can't attack because he is dead or out of energy" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}