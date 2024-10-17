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

FragTrap::~FragTrap() 
{
    std::cout << "FragTrap destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::string highfive;
    std::cout << "do you accept the high five ? " << std::endl;
    std::cin >> highfive; 

    if(highfive == "yes") 
    {
        std::cout << "nice you accepted the highfive" << std::endl;
    } 
    else if (highfive == "no") 
    {
        std::cout << "you refused the highfive..." << std::endl;
    }
    else 
    {
        std::cout << "you reply is wrong" << std::endl;
    }
}