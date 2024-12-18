/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:58:06 by vandre            #+#    #+#             */
/*   Updated: 2024/09/12 19:08:48 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() {
    _type = "Dog";
    _brain = new Brain();
    std::cout << "Constructor dog called" << std::endl;
}

Dog::Dog(const Dog& dog) : Animal(dog) {
    _brain = new Brain(*dog._brain); //deep copy
    std::cout << "Copy constructor dog called" << std::endl;
}

Dog& Dog::operator=(const Dog& dog) {
    if (this != &dog) {
        Animal::operator=(dog);
        delete _brain;
        _brain = new Brain(*dog._brain);
    }
    std::cout << "Assignment operator dog called" << std::endl;
    return *this;
}

Dog::~Dog() {
    delete _brain;
    std::cout << "Destructor dog called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof Woof" << std::endl;
}

Brain* Dog::getBrain() const {
    return _brain;
}