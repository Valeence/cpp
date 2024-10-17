/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:51:20 by vandre            #+#    #+#             */
/*   Updated: 2024/09/02 01:31:30 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(void)
{
    std::cout << "============= stackZombies =============" << std::endl;
    Zombie    zombie1("Zombie1");
    Zombie    zombie2("Zombie2");
    Zombie    zombie3;
  //Zombie    zombie2("Zombie2");


    

    zombie1.announce();
    zombie2.announce();
    zombie3.announce();
    randomChump("randomChumpZ");

    std::cout << std::endl;
    std::cout << "============= heapZombies ==============" << std::endl;
    Zombie    *heapZ;

    heapZ = newZombie("HeapZ");
    heapZ->announce();
    delete(heapZ);

    return (0);
}