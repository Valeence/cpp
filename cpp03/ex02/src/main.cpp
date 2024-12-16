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


int main() {
    std::cout << "=== Création des FragTraps ===" << std::endl;

    FragTrap frag1("Fraggy");
    FragTrap frag2(frag1);

    std::cout << "\n=== Test des capacités ===" << std::endl;

    frag1.attack("EnemyBot");
    frag1.takeDamage(20);
    frag1.beRepaired(10);

    std::cout << "\n=== Test de la capacité spéciale ===" << std::endl;
    frag1.highFivesGuys();

    std::cout << "\n=== Assignation ===" << std::endl;
    FragTrap frag3("AnotherFrag");
    frag3 = frag1;

    std::cout << "\n=== Fin du programme ===" << std::endl;
    return 0;
}