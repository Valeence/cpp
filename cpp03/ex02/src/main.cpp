/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:23:15 by vandre            #+#    #+#             */
/*   Updated: 2024/09/10 14:32:16 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"


int main()
{
	// ScavTrap valence("Violence");
	// ScavTrap nabil("Pabil");
	// valence.attack("Pabil");

	FragTrap Dendrobate("dendrolance");
	FragTrap DendroGames("Dendrobil");


	Dendrobate.highFivesGuys();
	DendroGames.takeDamage(5);


	return 0;
}