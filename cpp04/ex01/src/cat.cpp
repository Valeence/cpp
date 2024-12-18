/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:57:44 by vandre            #+#    #+#             */
/*   Updated: 2024/09/12 19:08:27 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Constructor cat called" << std::endl;
}

Cat::Cat(const Cat& cat) : Animal(cat) {
	_brain = new Brain(*cat._brain); //deep copy
	std::cout << "Copy constructor cat called" << std::endl;
}

Cat& Cat::operator=(const Cat& cat) {
	if (this != &cat) {
		Animal::operator=(cat);
		delete _brain;
		_brain = new Brain(*cat._brain);
	}
	std::cout << "Assignment operator cat called" << std::endl;
	return *this;
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Destructor cat called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Miaou Miaou" << std::endl;
}

Brain* Cat::getBrain() const {
	return _brain;
}
