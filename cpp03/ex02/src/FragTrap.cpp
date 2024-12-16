/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:54:14 by vandre            #+#    #+#             */
/*   Updated: 2024/09/10 14:33:45 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "Default FragTrap";
    _hit = 100;
    _energy = 100;
    _attack = 30; 
    std::cout << "Default FragTrap created" << std::endl;

}

FragTrap::FragTrap(std::string name) 
{
    _name = name;
    _hit = 100;
    _energy = 100;
    _attack = 30; 
    std::cout << "FragTrap created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy) 
    : ClapTrap(cpy)
{
    std::cout << "FragTrap created by copy" << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap &cpy) 
{
    if (this != &cpy) 
    {
        _name = cpy._name;
        _hit = cpy._hit;
        _energy = cpy._energy;
        _attack = cpy._attack;
    }
    std::cout << "FragTrap created by operator" << std::endl;
    return *this;
}

FragTrap::~FragTrap() 
{
    std::cout << "FragTrap destroyed" << std::endl;
}

void FragTrap::attack(const std::string& target) 
{
    if (_energy > 0 && _hit > 0) 
    {
        std::cout << "FragTrap " << _name << " attack " << target << ", causing " << _attack << " points of damage!" << std::endl;
        _energy--;
    }
    else 
        std::cout << "FragTrap " << _name << " can't attack because he is dead or out of energy" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::string highfive;
    std::cout << "do you accept the high five ? " << std::endl;
    std::cin >> highfive; 

    if(highfive == "yes") 
        std::cout << "nice you accepted the highfive" << std::endl;
    else if (highfive == "no") 
        std::cout << "you refused the highfive..." << std::endl;
    else 
        std::cout << "you reply is wrong" << std::endl;
}