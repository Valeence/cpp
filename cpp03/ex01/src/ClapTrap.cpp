/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:23:13 by vandre            #+#    #+#             */
/*   Updated: 2024/09/09 22:39:37 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "Default name";
	_hit = 10;
	_energy = 10;
	_attack = 0;
	std::cout << "Default ClapTrap create" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hit = 10;
	_energy = 10;
	_attack = 0;
	std::cout << "ClapTrap " << name << " create" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	_name = cpy._name;
	_hit = cpy._hit;
	_energy = cpy._energy;
	_attack = cpy._attack;
	std::cout << "ClapTrap " << cpy._name << " create by copy" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &cpy)
{
	if (this != &cpy)
	{
		_name = cpy._name;
		_hit = cpy._hit;
		_energy = cpy._energy;
		_attack = cpy._attack;
	}
	std::cout << "ClapTrap " << cpy._name << " create by operator" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy > 0 && this->_hit > 0) {
    	std::cout << "ClapTrap " << this->_name << " attacks " << target
    	          << ", causing " << this->_attack << " points of damage!" << std::endl;
    	this->_energy--;
	}
	else
		std::cout << "ClapTrap " << _name << " can't attack because he is dead or out of energy" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit > amount) 
    {
		this->_hit -= amount;
		std::cout << "ClapTrap " << this->_name << " has lost " << amount << " HP" << std::endl;
	}
    else {
        _hit = 0;
		std::cout << "ClapTrap "<< _name << " has no health left" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy > 0)
	{
    	unsigned int max_heal = 50 - _hit;
    	unsigned int actual_heal = (amount > max_heal) ? max_heal : amount;

	    _hit += actual_heal;
    	_energy--;

    	std::cout << "ClapTrap " << _name << " has been repaired by " << actual_heal
        	      << " points. Current health: " << _hit << std::endl;
	}
	else
    	std::cout << "No energy left to repair." << std::endl;
}

std::string ClapTrap::getName() const
{
	return _name;
}
