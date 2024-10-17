/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:01:49 by vandre            #+#    #+#             */
/*   Updated: 2024/09/12 19:18:51 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"
#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	j->makeSound();
	i->makeSound();
	delete j;
	delete i;
	return 0;
}