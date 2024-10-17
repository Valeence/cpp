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

int main()
{
    // const int number = 4;
	// Animal* animal[number];
	
	// for (int i = 0; i < number / 2; i++)
	// 	animal[i] = new Dog();
	// for (int i = number / 2; i < number; i++)
	// 	animal[i] = new Cat();
    // return 0;

	// int i = 0;
	// while (i<= number)
	// {
	// 	delete animal[i];
	// 	i++;
	// }
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;
	return 0;
}