/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:01:49 by vandre            #+#    #+#             */
/*   Updated: 2024/09/12 19:05:27 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"
#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

#define NUM_ANIMALS 6

int main()
{
    std::cout << "\n=== Construction d'un tableau d'Animaux ===" << std::endl;

    Animal* animals[NUM_ANIMALS];

    for (int i = 0; i < NUM_ANIMALS / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = NUM_ANIMALS / 2; i < NUM_ANIMALS; ++i) {
        animals[i] = new Cat();
    }

    std::cout << "\n=== Test des comportements des animaux ===" << std::endl;

    for (int i = 0; i < NUM_ANIMALS; ++i) {
        animals[i]->makeSound();
    }

    std::cout << "\n=== Copie profonde de Dog et Cat ===" << std::endl;

    Dog originalDog;
    originalDog.getBrain()->setIdea(0, "I love bones!");
    Dog copiedDog(originalDog);
    Dog assignedDog;
    assignedDog = originalDog;

    std::cout << "Original Dog idea[0]: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog idea[0]:   " << copiedDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Assigned Dog idea[0]: " << assignedDog.getBrain()->getIdea(0) << std::endl;

    copiedDog.getBrain()->setIdea(0, "I love running!");

    std::cout << "After modifying copied dog idea[0]:" << std::endl;
    std::cout << "Original Dog idea[0]: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog idea[0]:   " << copiedDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Assigned Dog idea[0]: " << assignedDog.getBrain()->getIdea(0) << std::endl;

    std::cout << "\n=== Destruction des Animaux ===" << std::endl;

    std::cout << "\n=== Destruction des Animaux ===" << std::endl;
    for (int i = 0; i < NUM_ANIMALS; ++i) {
        delete animals[i];
    }
    std::cout << "\n=== Fin du programme ===" << std::endl;
    return 0;
}