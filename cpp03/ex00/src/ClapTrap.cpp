/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:23:13 by vandre            #+#    #+#             */
/*   Updated: 2024/09/09 14:29:59 by vandre           ###   ########.fr       */
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
ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (ClapTrap::_energy != 0 || ClapTrap::_hit > 0 ) 
	{
		std::cout << "ClapTrap " << ClapTrap::_name << " attacks " << target << ", causing " << ClapTrap::_attack << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (ClapTrap::_hit > 0) 
    {
		ClapTrap::_hit -= amount;
		std::cout << "ClapTrap " << ClapTrap::_name << " has lost " << amount << " HP" << std::endl;
	}
    else
        std::cout << "ClapTrap "<< _name << " has no health left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (ClapTrap::_energy != 0)
	{	
		unsigned int i = ClapTrap::_hit + amount;
		if (i < 50)
		{
			ClapTrap::_hit += amount;
			std::cout << "ClapTrap " << ClapTrap::_name << " has now " << ClapTrap::_hit << std::endl;
		}
		else if (i >= 50)
		{
			ClapTrap::_hit = 50;
			std::cout << "ClapTrap " << ClapTrap::_name << " has not max heal (50HP)";
		}
		ClapTrap::_energy--;
	}
	else
		std::cout << "No energy left to repair" << std::endl;
}
